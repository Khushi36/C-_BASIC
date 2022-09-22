#include<bits/stdc++.h>
using namespace std;
void binary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
    int n=5;
    cout<<(n>>1)<<endl;//two divisible
    cout<<(n<<1);//two multiply
return 0;
}