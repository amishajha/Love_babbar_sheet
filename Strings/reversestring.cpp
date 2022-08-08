
#include<iostream>
using namespace std;


//approach 1 - using stack
// void recursiveReverse(string &str)
// {
//    stack<char> st;
//    for (int i=0; i<str.length(); i++)
//        st.push(str[i]);
  
//    for (int i=0; i<str.length(); i++) {
//        str[i] = st.top();
//        st.pop();
//    }       
// }
string reverseWord(string str){
    
    string ans = "";
    
    for(int i = str.length()-1;i>=0;i--){
        
        ans+=str[i];
        
    }
    
    return ans;
    
  //Your code here
}