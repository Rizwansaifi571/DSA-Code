#include <iostream>
#include <stack>
#include <queue>
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

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout << endl;

            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << temp -> data << " ";
            if(temp -> left) {
                q.push(temp -> left);
            }

            if(temp -> right) {
                q.push(temp -> right);
            }
        }
    }
}

void ReverselevelOrderTraversal(node* root) {
    queue<node*> q;
    stack<node*> st;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        st.push(temp);

        if(temp == NULL && !q.empty()) {
            q.push(NULL);
        }
        else if(temp != NULL) {
            if(temp -> left) {
                q.push(temp -> left);
            }

            if(temp -> right) {
                q.push(temp -> right);
            }
        }
    }

    while(!st.empty()) {
        node* temp = st.top();
        st.pop();
        if(temp == NULL) {
            cout << endl;
        }
        else {
            cout << temp->data << " ";
        }
    }
}

int main() {

    node* root = NULL;

    buildTree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1


    cout << endl;
    cout << endl;
    levelOrderTraversal(root);
    
    cout << endl;
    cout << endl;
    ReverselevelOrderTraversal(root);
    return 0;
}