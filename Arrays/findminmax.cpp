#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;


pair<long long, long long> getMinMax(long long arr[], int n) {



        
long long mini  = INT_MAX;
long long maxi  = INT_MIN;


for(int i = 0;i<n;i++){
    mini = min(mini,arr[i]);
    maxi = max(maxi,arr[i]);
}

pair<long long,long long>p;
p.first = mini;
p.second = maxi;

return p;
    
    
    
}