#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int>findsmall(vector<int>&arr){

    int n  = arr.size();
//      int mini = INT_MAX;
//      int smin = INT_MAX;
//      vector<int>v;
//      for(int i = 0;i<arr.size();i++){
//         if(mini<arr[i]){
//             mini = arr[i];
//         }
//      }


//      for(int i = 0;i<arr.size();i++){
//         if(arr[i]<smin && arr[i]>mini){
//             smin = arr[i];
//         }
//      }

//      if(mini==INT_MAX)
//         mini=-1;

    

//      if(smin==INT_MAX)
//         smin = -1;
     
// if(mini==-1||smin==-1){
//     v.push_back(-1);
//     return v;

// }

// v.push_back(mini);
// v.push_back(smin);
// return v;

 vector<int>v;
    int min;
    min=INT_MAX;;
    int smin;
    smin=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smin && arr[i]>min)
        smin=arr[i];
    }
    if (min==INT_MAX)
    min=-1;
    if(smin==INT_MAX)
    smin=-1;
    if(min==-1 || smin==-1)
    {
    v.push_back(-1);
    return v;
    }
     v.push_back(min);
      v.push_back(smin);
      return v;

}

int main(){
    vector<int>arr;
    arr.push_back(22);
    arr.push_back(2);
    arr.push_back(3);
    vector<int>ans;

    ans = findsmall(arr);
    for(int i = 0; i<ans.size();i++){
        cout<<ans[i]<<endl;

    }


}