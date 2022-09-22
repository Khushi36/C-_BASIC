#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    if((n%2==0) && (n%3==0)){
        cout<<"Both"<<endl;
    }
    else if(n%2==0){
        cout<<"By 2"<<endl;
    }
    else if(n%3==0){
        cout<<"By 3"<<endl;
    }
    else{
        cout<<"not  divisible"<<endl;
    }
    return 0;
}