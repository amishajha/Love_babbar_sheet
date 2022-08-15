#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
string sortstring(string &s){

       int lo = 0;
       int h = s.length()-1;
       int n  =  s.length();
       int mid = 0;
       while(mid<=h){
          switch(s[mid]){
          
           case 'a':
               swap(s[lo++],s[mid++]);
               break;

            case 'b':
            mid++;
            break;



            case 'c':
            swap(s[mid],s[h--]);
            break;





          }



       }

return s;



}


int main(){
    
     string s = "ccbaba";
     cout<<sortstring(s);




}