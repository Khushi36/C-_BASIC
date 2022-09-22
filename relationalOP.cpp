#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    if(n>10){
        cout<<"Number is greater "<<endl;
    }
    else if(n<10){
        cout<<"Number is less "<<endl;
    }
    else{
        cout<<"Number is equal "<<endl;
    }

}