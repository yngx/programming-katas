/**
 *  binary_tree.cpp
 *  Binary Tree implementation using nodes
 */
#include <iostream>
using namespace std;

struct node_t {
    int data;
    node_t * left;
    node_t * right;
};

// Given a pointer to a node, displays the data stored in the node.
void displayData(node_t * p) {
    cout << "node data: " << (*p).data << endl;
}

// Given a pointer to a node, displays the values of the node and its
// left and right children.
void displayNode(node_t * p) {
    cout << "parent node data: " << p->data << endl;
    
    if(p->left != NULL ){
        cout << "left child data: " << p->left->data << endl;
    }

    if(p->right != NULL ){
        cout << "right child data: " << p->right->data << endl;
    }

    cout << endl;
}

// Given a pointer to a node, adds a left and right child with
// values equal to leftVal and rightVal
void addChildNode(node_t * parent, int leftVal, int rightVal){
    if (leftVal != NULL){
        node_t * left = new node_t();
        left->data = leftVal;
        parent->left = left;
    }

    if (rightVal != NULL){
        node_t * right = new node_t();
        right->data = rightVal;
        parent->right = right;
    }
}

// Hard coded initial tree
void buildDefaultBinaryTree(node_t * root){
    addChildNode(root, 2, 3);
    addChildNode(root->left, 4, 5);
    //addChildNode(root->right, 8, 9);
}

// Implementation of inorder tree traversal
// Given the following tree:
//                1
//              /   \
//             2     3
//            / \          
//           4   5
//  We should expect: 4, 2, 5, 1, 3
void inorderTraversal(node_t * root){
    if(root == NULL){
        return;
    }

    // if has left child, go to left child
    if(root->left != NULL){
        inorderTraversal(root->left);
    }

    // print itself
    cout << root->data << " ";

    // if has right child, go to right child
    if(root->right != NULL){
        inorderTraversal(root->right);
    }
}

void preorderTraversal(node_t * root){
    if(root == NULL){
        return;
    }

    // print itself
    cout << root->data << " ";

    // if has left child, go to left child
    if(root->left != NULL){
        preorderTraversal(root->left);
    }

    // if has right child, go to right child
    if(root->right != NULL){
        preorderTraversal(root->right);
    }
}

void postorderTraversal(node_t * root){
    if(root == NULL){
        return;
    }

    // if has left child, go to left child
    if(root->left != NULL){
        postorderTraversal(root->left);
    }

    // if has right child, go to right child
    if(root->right != NULL){
        postorderTraversal(root->right);
    }

    // print itself
    cout << root->data << " ";
}

int main() {

    node_t * parent = new node_t();
    parent -> data = 1;

    buildDefaultBinaryTree(parent);
    inorderTraversal(parent);
    cout << endl;
    preorderTraversal(parent);
    cout << endl;
    postorderTraversal(parent);
    cout << endl;

    return 0;
}