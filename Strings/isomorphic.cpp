 #include<iostream>
 using namespace std;


 
 
 bool areIsomorphic(string str1, string str2)
    {

        if(str1.size()!=str2.size()){
           
           
            return 0;

        } 

        char map_t[128] = {0};
        char map_s[128] = {0};

        int length = str1.size();
        for(int i = 0;i<length;i++){
        
                if(map_s[str1[i]]!=map_t[str2[i]]){
                    return false;

                }

                map_t[str1[i]]= i+1;
                map_s[str2[i]] = i+1;



        }
      
      return 1;

       

       
        
    }