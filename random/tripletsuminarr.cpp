   
   #include<bits/stdc++.h>
   #include<iostream>
   using namespace std;
   
   bool find3Numbers(int A[], int n, int x)
    {
      sort(A,A+n);
      int l,r;
      for(int i = 0;i<n;i++){
          int l = i+1;
          int r = n-1;
          while(l<r){
              if(A[i]+A[l]+A[r] == x){
                  return true;
              }
              
              else if(A[i]+A[l]+A[r]>x){
                  r--;
              }
              
              else {
                  l++;
              }
          }
      }
      
      return false;
    }