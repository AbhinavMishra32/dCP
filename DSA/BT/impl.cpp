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
    cout<< "Enter to LEFT of [" << this->value << "] (Y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y'){
      int value;
      cout << "Enter value for LEFT child of [" << this->value << "]: "; 
      cin >> value;
      this->left = new Node(value);
      this->left->populate();
    }
    cout << "Enter to RIGHT of " << this->value << " (Y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y'){
      this->left = nullptr;
      int value;
      cout << "Enter value for RIGHT child of [" << this->value << "]: ";
      cin >> value;
      this->right = new Node(value);
      this->right->populate();
    }
  }

  void levelOrder(){
    vector<vector<int>> vec;

    queue<Node*> q;

    q.push(this);

    while (!q.empty()){
      vector<int> level;

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
