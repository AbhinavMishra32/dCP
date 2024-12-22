#include <iostream>
using namespace std;

class BSTNode {
public:
  int value;
  BSTNode* left;
  BSTNode* right;

  BSTNode(int value) {
    this->value = value;
    this->left = nullptr;
    this->right = nullptr;
  }

  void bstpopulate(){
    int value;
    cout << "Enter value for [" << this->value << "] (-1 to end):";
    cin >> value;
    if (value == -1) return;

    if (value <= this->value){
      if (this->left == nullptr) {
        this->left = new BSTNode(value);
        prettyDisplay();
      }
      else this->left->bstpopulate();
    } else {
      if (this->right == nullptr) {
        this->right = new BSTNode(value);
        prettyDisplay();
      }
      else this->right->bstpopulate();
    }
  }

  void prettyDisplay(){
    cout << this->value << " -> ";
    if (this->left != nullptr) this->left->prettyDisplay();
    else cout << "NULL -> ";
    if (this->right != nullptr) this->right->prettyDisplay();
    else cout << "NULL -> ";
  }
};

int main(){
  int rootValue;
  cout << "Enter root value: ";
  cin>> rootValue;

  BSTNode* root = new BSTNode(rootValue);
  root->bstpopulate();
}
