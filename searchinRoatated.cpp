#include<bits/stdc++.h>
using namespace std;
// For Minimum Element
int getPivot(int arr[],int n){
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(arr[mid]>=arr[0]){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return low;
    }
    // Seraching
    int binarySe(int arr[],int l,int h,int k){
        int low=l;
        int high=h;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==k){
                return mid;
            }else if(arr[mid]<k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return -1;
    }
    int search(int arr[], int l, int h, int key){
        int n=h+1;
        int pivot=getPivot(arr,n);
        //Serahing After the Pivot
        if(key>=arr[pivot] && key<=arr[n-1]){
            return binarySe(arr,pivot,n-1,key);
        }else{
            //Searching Begore the pivot
            return binarySe(arr,0,pivot-1,key);
        }
    }
