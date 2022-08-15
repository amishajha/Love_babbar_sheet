#include<iostream>
#include<stack>
using namespace std;


stack<int>sortstack(stack<int>&input){
    stack<int>tempstack;
    while(!input.empty()){
        int temp =  tempstack.top();
        tempstack.pop();



        while(!tempstack.empty() && tempstack.top()>temp){
            input.push(tempstack.top());
            tempstack.pop();

        }


        tempstack.push(temp);


    }



    return tempstack;

}



int main(){
    stack<int>input;
    input.push(11);
    input.push(33);
    input.push(40);
    input.push(22);
    stack<int>tmpstack = sortstack(input);
    while(!tmpstack.empty()){
        cout<<tmpstack.top()<<" ";
        tmpstack.pop();


    }

}



// timecomplexity-o(n*n);
// auxilaiaryspace-o(n);