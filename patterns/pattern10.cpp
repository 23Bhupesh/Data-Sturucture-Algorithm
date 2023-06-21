#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int i = 1; 
    while(i<=n) {

        //1st part

        int j = 1; 
        while(j<= n - i + 1) {
            cout<<j;
            j = j + 1;
          }

        //2nd part

        int star1 = i - 1;
        while(star1) {
            cout<<"*";
            star1 = star1 - 1;
        } 
/*
        //3rd part

        int star2 = i - 1;
        while(star2) {
            cout<<"*";
            star2 = star2 + 1;
        }

        //4th part

        int num = 1;
        while(num<=n-i+1) {
            cout<<n -i -num +2;
            num = num - 1;
        } */
        cout<<endl;
        i = i + 1;
    }

}