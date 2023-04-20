#include<bits/stdc++.h>
using namespace std;
 int cnt(vector<int>&v,int m){
      int low=0;
      int high=m-1;
      int ans=m;
      while(low<=high){
          int mid=low+(high-low)/2;
          if(v[mid]==1){
             ans=mid;
             high=mid-1;
          }else{
              low=mid+1;
          }
      }
      return m-ans;
  }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int mx=0;
	    int l=-1;
	   for(int i=0;i<arr.size();i++){
	       int ans=cnt(arr[i],m);
	       if(ans>mx){
	           mx=ans;
	           l=i;
	       }
	   }
	   return l;
	}