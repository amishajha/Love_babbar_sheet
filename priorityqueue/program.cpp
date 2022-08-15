#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(22);
    pq.push(44);
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();

    }

}