#include<iostream>
#include<unordered_map>
using namespace std;


int  findmajority(int arr[],int n){
    int maxcount = 0;
    int index = -1;
    for(int i = 0;i<n;i++){
         int count = 0 ;
        for(int j = 0;j<n;j++){
            if(arr[i]==arr[j])

                count++;//keeps track of majority element


            
        }


        if(count>maxcount){
            
            maxcount = count;
            index  = i;


        }

       
    }
        if(maxcount>n/2){
           return arr[index];
            

        }


}


//time complexity - o(n*n)
//space complexity -o(1)












//o(n) time complexity
//o(1) space complexity

   int majorityElement(int a[], int size)
    {
        
         unordered_map<int,int>mp;
         for(int i = 0;i<size;i++){
             mp[a[i]]++;
             
         }
         
         for(auto i :mp){
             if(i.second>size/2){
                 return i.first;
                 
             }
         }
        return -1;
    }