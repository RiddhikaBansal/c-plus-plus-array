#include<iostream>
using namespace std;

int main() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 9; j++) {
            if(j >= i && j < 9 - i) // Print stars between the appropriate columns
                cout << "* ";
            else
                cout << "  "; // Print spaces for the rest
        }
        cout << endl;
    }
    return 0;
}
