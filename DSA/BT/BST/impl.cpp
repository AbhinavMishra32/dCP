#include <iostream>
#include <string>
#include <queue>
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
      }
      this->left->bstpopulate();
    } else {
      if (this->right == nullptr) {
        this->right = new BSTNode(value);
      }
      this->right->bstpopulate();
    }
  }

  void prettyDisplay(BSTNode* node, int level){
    if (node == nullptr) return;

    prettyDisplay(node->right, level + 1);

    if (level != 0){
      for(int i =0; i< level; i++){
        cout << "\t";
      }
      cout << "|----->" << node->value << endl;
    } else {
      cout << node->value << endl;
    }

    prettyDisplay(node->left, level +1);
  }

  void dft(BSTNode* node){
    if (node == nullptr) return;

    cout << node->value << " ";

    dft(node->left);
    dft(node->right);
  }

  void bft(BSTNode* node){
    if (node == nullptr) return;

    queue<BSTNode*> q;
    q.push(node);

    while(!q.empty()){
      BSTNode* node = q.front();
      cout << node->value << " ";
      q.pop();

      if (node->left != nullptr) q.push(node->left);
      if (node->right != nullptr) q.push(node->right);
    }

  }
};

int main(){
  int rootValue;
  cout << "Enter root value: ";
  cin>> rootValue;

  BSTNode* root = new BSTNode(rootValue);
  root->bstpopulate();

  root->prettyDisplay(root, 0);

  root->dft(root);
  cout << "BFT: "<<endl;

  root->bft(root);
}
