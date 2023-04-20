#include<bits/stdc++.h>
using namespace std;
int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	   int r=0,c=M-1;
	   while(r<N && r>=0){
	       if(mat[r][c]==X){
	           return 1;
	       }
	       if(mat[r][c]>X){
	           c--;
	       }else{
	           r++;
	       }
	   }
	   return 0;
	}