#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int mid=0;
        while(low<high){
            mid=low+(high-low)/2;
            if(arr[mid]<arr[mid+1]){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return low;
    }
 int main() {
  int n = 7;
  int x = 3;
  vector<int>arr = {2,2,3,15,4,2,1};
  int ans = findPeakElement(arr);
  cout <<x<<" occurs "<<ans<<" times in the array" << endl;
}