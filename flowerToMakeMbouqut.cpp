#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool isPossible(vector<int>&arr,int mid,int k,int m){
   int adj=0;
   int bc=0;
   for(int i=0;i<arr.size();i++){
       if(arr[i]<=mid){
           adj++;
           if(adj==k){
               bc++;
               if(bc==m){
                   return true;
               }else{
                   adj=0;
               }
           }
       }else{
           adj=0;
       }
   }
   return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
       int mini=*min_element(bloomDay.begin(),bloomDay.end());
       int maxi=*max_element(bloomDay.begin(),bloomDay.end());
       int low=mini;
       int high=maxi;
       if((long long)m*(long long)k>bloomDay.size()) return -1;
        int minDay=-1;
       while(low<=high){
           int mid=(low+high)/2;
           if(isPossible(bloomDay,mid,k,m)){
               minDay=mid;
               high=mid-1;
           }else{
               low=mid+1;
           }
       }
       return minDay;

    }
};