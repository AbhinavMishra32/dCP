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

  void populate(Node* root){
    bool choice;
    cout<< "Enter to LEFT of [" << root->value << "] ? ";
    cin >> choice;

  }
};

int main(){
  Node* root = new Node(10);

  return 0;
}
