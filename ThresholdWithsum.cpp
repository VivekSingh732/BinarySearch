 #include<bits/stdc++.h>
 using namespace std;
 int smallestDivisor(vector<int>& nums, int threshold) {
     
        int low=1;
        int high=1e6;
        int res=0;
        while(low<=high){
            int mid=(low+high)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
              sum+=ceil(1.0*nums[i]/mid);
            }
            if(sum>threshold){
              low=mid+1;
            }else{
              res=mid;
              high=mid-1;
            }
        }
        return res;
    }