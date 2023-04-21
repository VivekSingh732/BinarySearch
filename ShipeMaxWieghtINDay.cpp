#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&arr,int days,int mid){
    int cnt=1;
    int sum=0;
   for(auto it:arr){
       if(sum+it>mid){
           cnt++;
           sum=0;
       }
       sum+=it;
   }
   if(cnt>days){
       return false;
   }else{
       return true;
   }
}
    int shipWithinDays(vector<int>& weights, int days) {
    int low=*max_element(weights.begin(),weights.end());
    int high=0;
    for(int x:weights){
        high+=x;
    }
    int ans=high;
    while(low<=high){
        int mid=(low+high)/2;
        if(check(weights,days,mid)){
            ans=mid;
            high=mid-1;
        }else{
         low=mid+1;
        }
    }
    return ans;
    }