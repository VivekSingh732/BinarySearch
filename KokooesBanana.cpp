#include<bits/stdc++.h>
using namespace std;
int Solve(int N, vector<int>& piles, int H) {
       int low=1,high=1e9;
       while(low<=high){
           int mid=(low+high)/2;
           long long total=0;
           for(int i=0;i<piles.size();i++){
               total+=ceil(1.0*piles[i]/mid);
           }
           if(total>H){
               low=mid+1;
           }else{
               high=mid-1;
       }
    }
      return low;
    }