#include<bits/stdc++.h>
using namespace std;
int kthElement(int arr1[], int arr2[], int n, int m, int km)
    {
       int dumm[n+m];
       int i=n-1;
       int j=m-1;
       int k=m+n-1;
       while(i>=0 && j>=0){
           if(arr1[i]>arr2[j]){
               dumm[k--]=arr1[i--];
           }else{
               dumm[k--]=arr2[j--];
           }
       }
       while(i>=0){
           dumm[k--]=arr1[i--];
       }
       while(j>=0){
           dumm[k--]=arr2[j--];
       }
        return dumm[km-1];
    }