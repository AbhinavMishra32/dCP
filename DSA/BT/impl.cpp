#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
  int value;
  Node* left;
  Node* right;

  Node(int value){
    this->value = value;
    left = nullptr;
    right = nullptr;
  }

  void populate(){
    char choice;
    cout<< "Enter to LEFT or RIGHT of " << this->value << " (l/r): ";
    cin >> choice;

    if (choice == 'l' || choice == 'L'){
      int value;
      cout << "Enter value for LEFT child of [" << this->value << "]: "; 
      cin >> value;
      this->left = new Node(value);
      this->left->populate();
    }
    cout << "Enter to RIGHT of " << this->value << " (l/r): ";
    if (choice == 'r' || choice == 'R'){
      this->left = nullptr;
      int value;
      cout << "Enter value for RIGHT child of [" << this->value << "]: ";
      cin >> value;
      this->right = new Node(value);
      this->right->populate();
    }
  }

  void buildFromArray(vector<int> &vec){
    if (vec.size() == 0) return;

    Node* root = new Node(vec[0]);
    Node* temp;
    Node* leftNode;
    Node* rightNode;

    if (vec.size() > 1){
      leftNode = new Node(vec[1]);
      root->left = leftNode;
    }
    if (vec.size() > 2) {
      rightNode = new Node(vec[2]);
      root->right = rightNode;
    }

    int i = 1;
    while(2*i + 2 < vec.size()){
      temp = new Node(vec[i]);
      leftNode = new Node(vec[2*i + 1]);
      rightNode = new Node(vec[2*i + 2]);
      temp->left = leftNode;
      temp->right = rightNode;
      i++;
    }
  }

  void display(){
    cout << this->value << " ";
    if (this->left != nullptr){
      this->left->display();
    }
    if (this->right != nullptr){
      this->right->display();
    }
  }
};

int main(){
  int rootValue;
  cout << "Enter root node: ";
  cin>> rootValue;
  Node* root = new Node(rootValue);
  cout << endl;
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
  root->buildFromArray(vec);
  /*root->populate();*/
  root->display();

  return 0;
}
