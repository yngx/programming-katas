#include <iostream>

// A namespace is a form of scope holding its own definitions for variables,
// functions, etc. For example, both cout and cin, along with some useful
// tokens like endl, are defined inside of std for use.
// If 'using namespace std' is not declared, you will have to explicity
// add std:: before cout or cin.
// 
// NOTE: Using namespaces like this can potentially cause collisions if 
// multiple name spaces share a similar function.
using namespace std;

int main(){

    cout << "Hello, world!";

    return 0;
}