#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the value:-";
    cin>> n;

    // Outer Loop
    for(int i=0; i<n; i++){
        // Inner Loop
        for(int j=0; j<n-i; j++){
            cout<< j+1 << " ";
        }
        cout << endl;
    }
}