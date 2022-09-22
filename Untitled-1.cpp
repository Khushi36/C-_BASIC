#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int i;
    bool ans = false;

    while(i<num){
    if(num==1)
    ans=true;
    if(i*i==num)
    ans=true;
    else
    i++;
    cout<<ans;
    }

return 0;
}