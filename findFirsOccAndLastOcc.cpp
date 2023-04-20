#include<bits/stdc++.h>
using namespace std;
// First Occurrence of Element
 int firstocc(vector<int>& arr,int n,int k){
        int low=0;
        int high=n-1;
        int ans=-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(arr[mid]==k){
                ans=mid;
                high=mid-1;
            }
            else if(arr[mid]<k){
                low=mid+1;
            }else{
                high=mid-1;
            }
             mid=low+(high-low)/2;
        }
        return ans;
    }
    // Last Occurrence of Element
    int lastOcc(vector<int>&arr,int n,int k){
        int low=0;
        int high=n-1;
        int ans=-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(arr[mid]==k){
                ans=mid;
                low=mid+1;
            }
            else if(arr[mid]<k){
                low=mid+1;
            }else{
                high=mid-1;
            }
             mid=low+(high-low)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& arr, int target) {
       vector<int>v;
       int n=arr.size();
       v.push_back(firstocc(arr,n,target));
       v.push_back(lastOcc(arr,n,target));
       return v;
        
    }