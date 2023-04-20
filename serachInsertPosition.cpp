#include<bits/stdc++.h>
using namespace std;
int searchInsertK(vector<int>arr, int n, int k)
    {
       int low=0;
       int high=n;
       int ans=0;
       if(k>arr[high-1]) return high;
       while(low<=high){
           int mid=low+(high-low)/2;
           if(arr[mid]==k) return mid;
           else if(arr[mid]<k){
               low=mid+1;
           }else{
               high=mid-1;
           }
       }
       return low;
    }