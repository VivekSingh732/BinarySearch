#include<bits/stdc++.h>
using namespace std;
int findKRotation(int arr[], int n) {
	    int low=0;
	    int high=n-1;
	    int mid=0;
	    if(arr[low]<arr[high]) return 0;
	    if(arr[low]==arr[high]) return 0;
	    while(low<=high){
	        mid=low+(high-low)/2;
	        if(mid<high && arr[mid]>=arr[mid+1]){
	            return mid+1;
	        }
	       if(mid>low && arr[mid-1]>=arr[mid]) {
	           return mid;
	        }
	        if(arr[low]<=arr[mid]){ 
	            low=mid+1;
	        }else{
	            high=mid-1;
	        }
	    }
	    return 0;
	}