// link : https://www.naukri.com/code360/problems/count-leaf-nodes_893055

#include <iostream>
using namespace std;

template <typename T>
class BinaryTreeNode {
public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
    

void Inorder(BinaryTreeNode<int> *root, int &count) {
    if(root == NULL) return;

    Inorder(root -> left, count);
    
    if(root->left == NULL && root -> right == NULL) {
        count++;
    }

    Inorder(root -> right, count);
}


int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count = 0;
    Inorder(root, count);
    return count;
}

int main() {
    // Creating a sample binary tree:
    //       1
    //      / \
    //     2   3
    //    / \   \
    //   4   5   6
    //  /
    // 7
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
    root->left = new BinaryTreeNode<int>(2);
    root->right = new BinaryTreeNode<int>(3);
    root->left->left = new BinaryTreeNode<int>(4);
    root->left->right = new BinaryTreeNode<int>(5);
    root->right->right = new BinaryTreeNode<int>(6);
    root->left->left->left = new BinaryTreeNode<int>(7);
    
    int leafCount = noOfLeafNodes(root);
    cout << "Number of leaf nodes: " << leafCount << endl;
    
    
    return 0;
}