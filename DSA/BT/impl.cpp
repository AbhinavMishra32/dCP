#include <iostream>
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
  root->populate();
  root->display();

  return 0;
}
