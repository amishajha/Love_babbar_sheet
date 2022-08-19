//algorithm

//step 1 --take a stack
//step 2 --push the number of elements
//step 3 --while stack size ! = 1 pop top two elements(A and B)
//step 4 -- if A knows B (A is not a celebrity push B again inside the stack)
//step 5 -- if B knows A (B is not a celebrity push A again inside the stack)

//at last if stack size is == 1 then the element inside the stack is potential celebrity
//step 6 verify celebrity knows no one (check rows == all zeroes )
                //everyone knows celebrity (all the columns should be one except diagonal)


#include<iostream>
#include<vector>
#include<stack>
using namespace std;






bool knows(vector<vector<int> >&M,int a ,int b,int n){
    if(M[a][b]==1){
        return true;
    }
    else {
        return false;
    }

}

int celebrity(vector<vector<int> >& M, int n) 

 {


    stack<int>s;
    for(int i = 0;i<n;i++){
        s.push(i);

    }

    //get two elements and compare them
    while(s.size()>1){
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if(knows(M,a,b,n)){
            s.push(b);

        }
        else {
            s.push(a);

        }

    }



    int ans = s.top();
    bool rowcheck = false;
    int zerocount = 0;




    //single element in stack is potential celebrity
    //so verify it
    for(int i = 0 ;i< n;i++){
        if(M[ans][i]==0){
            zerocount++;
        }
    }

    if(zerocount==n){
        rowcheck = true;
    }

    bool colcheck = false;
    int onecount = 0;
    for(int i = 0;i<n;i++){
        if(M[i][ans]==1){
            onecount++;

        }
    }


    if(onecount==n-1){
        colcheck = true;

    }

    if(rowcheck==true && colcheck==true){
        return ans;
    }
    else {
        return -1;

    }




    


 }