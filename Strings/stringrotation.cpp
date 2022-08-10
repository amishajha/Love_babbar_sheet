#include<iostream>
using namespace std;



bool arerotation(string s1,string s2){
    if(s1.length()!=s2.length()){
        string str = s1+s2;
        if(str.find(s2)!=string::npos){
            return true;

        }
        else 
        return false;
        
    }
}