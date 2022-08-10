#include<iostream>
#include<map>

using namespace std;

void printdup(string str){
    map<char,int>count;
    for(int i = 0;i<str.length();i++){
        count[str[i]]++;

    }

    for(auto i : count){
        if(i.second>1){
            cout<<i.first<<i.second<<"\n";
            

        }
    }

}