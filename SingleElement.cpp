#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        if(n==1) return arr[0];
        if(arr[low]!=arr[low+1]) return arr[low];
        if(arr[high]!=arr[high-1]) return arr[high];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]!=arr[mid+1] && arr[mid-1]!=arr[mid]){
                return arr[mid];
            }
            else if((arr[mid]==arr[mid+1] && mid%2==0) ||
                    arr[mid-1]==arr[mid] && mid%2!=0){
                        low=mid+1;
                    }else{
                        high=mid-1;
                    }
        }
        return -1;
    }