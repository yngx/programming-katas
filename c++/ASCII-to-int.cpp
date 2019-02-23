#include <iostream>
using namespace std;

int main() {

    /*
        Fundamental Data types
        ----------------------
        character types:
            char        - 8 bits
            char16_t    - 16 bits
            char32_t    - 32 bits
            wchar_t     - Can represent the largest supported character set
    */

    // US-ASCII characters are really 7 bits per characters but since most microprocessors
    // work with bytes (8 bits) it was much simpler to use 8 bits.
    char a; // char is only 8 bits
    cout << "Enter a character: ";
    cin >> a;
    cout << "ASCII value of " << a << " is " << int(a) << endl;
    return 0;
}