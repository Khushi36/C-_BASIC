#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>nums;
    int i,j,k,l;
    int n;
    cin>>n;
    for(int l=0;i<n;i++){
        cin>>nums[i];
    }
        vector<int>ans;
        for(i=0;i<n-2;i++){
            for(j=i+1;j<n-1;j++){
                for(k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0)
                        cout<<nums[i]<<nums[j]<<nums[k];
                        
                }
            }
        }
        
        
    
    return 0;
}
