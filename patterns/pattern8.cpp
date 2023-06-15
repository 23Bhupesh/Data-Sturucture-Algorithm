#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int i = 1;
    int value = 1;
    while(i<=n) {
        int space = n-i;
        while(space) {
            cout<<" ";
            space = space - 1;
        }
        int j = 1;
        while(j<=i) {
            cout<<value;
            value = value + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}