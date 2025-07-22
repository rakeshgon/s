#include<iostream>
using namespace std;
 int main(){
    int n ;
    cout<<"enter the number"<<endl;
    cin>>n;
     
    int  i = 1;
    while(i <= n){
        int j  = 1;
        int b = 2;
        while(j <= i){
            char ch = 'A' + i - 1;
            cout<<char( ch + j - 1 );
            j++;
        }
        cout<<endl;
        i++;
    }
 }