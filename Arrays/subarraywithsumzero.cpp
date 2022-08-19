#include<iostream>
#include<unordered_map>
using namespace std;


//bruteforce
//o(n*n)

// int maxLen(int arr[],int N){

//     int max_len = 0;
//     for(int i = 0;i<N;i++){

//         int curr_sum = 0;

//          for(int j = i;j<N;j++){
//             curr_sum+=arr[j];


//             if(curr_sum==0)
//              max_len = max(max_len,j-i+1);


            

//          }
          

//     }

//     return max_len;

// }



//optimized approach

int maxLen(int arr[],int N){
    unordered_map<int,int>presum;
    int sum = 0;
    int max_len = 0;
    for(int i = 0;i<N;i++)
    {
        sum+=arr[i];
        if(arr[i]==0&&max_len==0)
         max_len=1;
         if(sum == 0)
          max_len = i+1;
          if(presum.find(sum)!=presum.end()){
            max_len = max(max_len,i-presum[sum]);

          }

          else {
            presum[sum] = i;

          }

    }

    return max_len;

}