#include<bits/stdc++.h>
using namespace std;
int findFloor(vector<long long> arr, long long n, long long x){
       int i= lower_bound(arr.begin(),arr.end(),x)-arr.begin();
       if(i<n && arr[i]==x){
           return i;
       }else
       i--;
       if(i>=0){
           return i;
       }else{
           return -1;
       }
    }

int main(){
    vector<long long>arr={2,3,4,5,6,7,8,9,10};
    int x=5;
    cout<<"It find Just Lesser then the Element x"<<endl;
    int less=findFloor(arr,arr.size(),x);
    cout<<"The Lesser Element : "<<less<<endl;
}