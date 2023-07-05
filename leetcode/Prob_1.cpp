#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of digits:";
    cin>>n;

    int sum = 0;
    int product = 1;
    for(int i=1; i<=n;i++) {
        sum +=i;
        product *= i ;
        
        
    }
    cout<<"Sum of digits:"<<" "<< sum <<endl;
    cout<<"Product of digits:"<<" "<< product <<endl;
    cout<<"Difference between the product and sum is:"<<" "<<(product - sum) <<endl;
}