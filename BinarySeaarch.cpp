#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int k) {
         int i;
         int low=0;
         int high=n-1;
         int mid;
         while(low<=high){
             mid=(low+high)/2;
             if(arr[mid]==k){
                 return mid;
             }
             else if(k<arr[mid]){
                 high=mid-1;
             }
             else{
                 low=mid+1;
             }
         }
         return -1;
    }