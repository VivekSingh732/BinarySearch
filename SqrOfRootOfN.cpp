#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
       int low=0;
       int high=x;
       long long int mid=0;
       int ans=-1;
       while(low<=high){
           mid=low+(high-low)/2;
           long long int squar=mid*mid;
           if(squar==x){
               return mid;
           }
           if(squar<x){
               ans=mid;
               low=mid+1;
           }else{
               high=mid-1;
           }
       }
       return ans;
    }
};