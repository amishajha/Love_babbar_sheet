#include<iostream>
using namespace std;

int isPalindrome(string s)
	{
	    string ans = "";
	    
	    for(int i = s.length()-1;i>=0;i--){
	        ans+=s[i];
	        
	    }
	    if(ans==s){
	        return true;
	        
	    }
	    
	    return false;
	    
	    
	    
	}