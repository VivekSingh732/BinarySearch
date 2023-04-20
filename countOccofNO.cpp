#include<bits/stdc++.h>
using namespace std;
int count(int arr[], int n, int x) {
	    int *i=lower_bound(arr,arr+n,x);
	    if(i==(arr+n) || *i!=x) return 0;
	     
	     int *j=upper_bound(arr,arr+n,x);
	     return j-i;
	}
int main() {
  int n = 7;
  int x = 3;
  int arr[] = {2,2,3,3,3,3,4};
  int ans = count(arr, n, x);
  cout <<x<<" occurs "<<ans<<" times in the array" << endl;
}