#include<iostream>
using namespace std;

int max_char = 26;



string sortstring(string &s){
     
     int charcount[max_char] = {0};
     string b;

     //store the frequency of each char 
     for(int i = 0;i<s.length();i++){
        charcount[s[i]-'a']++;

     }
     

      //add all the char intp string
      for(int i = 0;i<max_char;i++){
        for(int j = 0;j<charcount[i];j++){
            b+='a'+i;

        }
      }

return b;



}




int main(){
    string s = "zbca";
    cout<<sortstring(s);

}