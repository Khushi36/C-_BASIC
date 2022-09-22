#include<bits/stdc++.h>
using namespace std;
 vector<int>a;
    vector<int>ans;
int main()
{
    int k;
    int n;
    int t;
    cin>>t;
    
    int i;
   
    while(t--){
        cin>>n;
        cin>>k;
    for(i=0;i<n;i++){
        if((a[i]-i)==k){
            ans.push_back(a[i]);
            i++;
        }
        else
            
            ans.push_back(-1);   
            
        }  
    }      
        
}