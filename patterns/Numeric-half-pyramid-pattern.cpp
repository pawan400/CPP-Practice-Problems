#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the value:-";
    cin>> n;

    // Outer Loop
    for(int i=0; i<n; i++){
        // Inner loop
        for(int j=0; j<i+1; j++){
            cout<< j+1 << " ";
        }
        cout<< endl;
    }
}