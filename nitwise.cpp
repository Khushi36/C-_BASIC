#include<bits/stdc++.h>
using namespace std;
void printbinary(int num){
    for(int i=num;i>=0;i--){
        cout<<((num>>i) &1);
    }
    cout<<endl;
}
int main()
{
     int a=9;//1001
    printbinary(a);
   
    int i=3;//
    if((a &(1<<i))!=0){
        cout<<"Set bit\n";
    }else{
        cout<<"not set bit";
    }
    //bit set
    printbinary(a|(1<<1));
    //bit unset
    printbinary( a&(~(1<<3)));
    //toggle
    printbinary(a^(1<<2));
//count set bits
    int ct=0;
    for(int i=32;i>=0;--i){
        if((a&(1<<i))!=0){
            ct++;
        }
    }
    cout<<ct<<endl;
    //built in function to get set bit count
    cout<<__builtin_popcount(a);
    cout<<__builtin_popcountll((1LL<<35)-1);



return 0;
}