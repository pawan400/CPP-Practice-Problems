#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;

    // Outer loop
    for(int row=0; row<n; row++){
        // Inner loop
        for(int col=0; col<n; col++){
            cout<< "* ";
        }
        cout << endl;
    }
}