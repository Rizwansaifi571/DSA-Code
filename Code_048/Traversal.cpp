#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* &root) {
    int data;
    cout << "Enter the data : ";
    cin >> data;

    root = new node(data);

    if(data == -1) return NULL;

    cout << "for Inserting 'LEFT' Node of "<< data <<" -> ";
    root -> left = buildTree(root -> left);
    
    cout << "for Inserting 'RIGHT' Node of "<< data <<" -> ";
    root -> right = buildTree(root -> right);

    return root;
}



// ----------------- Pre, Post, In order Traversal --------------------

void InOrder(node* root) {
    
    // base case
    if(root == NULL) return;

    InOrder(root -> left);
    cout << root -> data << " ";
    InOrder(root -> right);
}


void PreOrder(node* root) {
    
    // base case
    if(root == NULL) return;

    cout << root -> data << " ";
    PreOrder(root -> left);
    PreOrder(root -> right);
}


void PostOrder(node* root) {
    
    // base case
    if(root == NULL) return;

    PostOrder(root -> left);
    PostOrder(root -> right);
    cout << root -> data << " ";
}

int main() {

    node* root = NULL;

    buildTree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

    cout << "InOrder Traversal : ";
    InOrder(root);
    
    cout << endl << "PreOrder Traversal : ";
    PreOrder(root);

    cout << endl << "PostOrder Traversal : ";
    PostOrder(root);

    return 0;
}