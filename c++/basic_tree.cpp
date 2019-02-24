#include <iostream>
using namespace std;

struct node_t {
    int data;
    node_t * left;
    node_t * right;
};

void displayData(node_t * p) {
    cout << "node data: " << (*p).data << endl;
}

void displayNode(node_t * p) {
    cout << "parent node data: " << p->data << endl;
    
    // display children
    if(p->left != NULL ){
        cout << "left child data: " << p->left->data << endl;
    }

    if(p->right != NULL ){
        cout << "right child data: " << p->right->data << endl;
    }

    cout << endl;
}

void addChildNode(node_t * parent, int leftVal, int rightVal){
    if (leftVal != NULL){
        node_t * left = new node_t();
        left->data = leftVal;
        parent->left = left;
        
        cout << "created left child node with ";
        displayData(left);
    }

    if (rightVal != NULL){
        node_t * right = new node_t();
        right->data = rightVal;
        parent->right = right;
        
        cout << "created right child node with ";
        displayData(right);
    }

    cout << endl;
}

int main() {

    node_t * parent = new node_t();
    parent -> data = 3;

    displayNode(parent);
    addChildNode(parent, 4, 5);
    displayNode(parent);

    return 0;
}