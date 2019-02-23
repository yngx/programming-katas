#include <iostream>
using namespace std;

struct node_t {
    int data;
    node_t * left;
    node_t * right;
};

void displayNodeValue(node_t * p) {
    cout << "Node data: " << p->data << endl;

    // display children
    if(p->left != NULL ){
        cout << "Left child data: " << p->left->data << endl;
    }

    if(p->right != NULL ){
        node_t * child = p->right;
        cout << "Right child data: " << child->data << endl;
    }
}

void addChildNode(node_t * parent, int value){
    node_t child = node_t();
    child.data = value;

    cout << "Created a child node. ";
    displayNodeValue(&child);
    parent->right = &child;
}

int main() {
    cout << "Hello, welcome. " << endl;

    node_t parent = node_t();
    parent.data = 3;
    displayNodeValue(&parent);
    addChildNode(&parent, 4);

     cout << endl << "Redisplay parent... " << endl;
    displayNodeValue(&parent);

    return 0;
}