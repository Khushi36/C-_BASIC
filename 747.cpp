#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    vector<int> nums;
    int    n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(pow(nums[i],2)>nums[n])
                return -1;
                
        }
    return n;
        
return 0;
}