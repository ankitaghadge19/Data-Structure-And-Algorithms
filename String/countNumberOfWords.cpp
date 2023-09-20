/* Given a string consisting of spaces,\t,\n and lower case  alphabets.
Your task is to count the number of words where spaces,\t and \n work as separators */

#include<bits/stdc++.h>
using namespace std;

int countWords(string s){
     int count=0;
     int word=0;
     int n=s.size();
     
    for(int i=0; i<n; i++){
       if((s[i]=='\\' && s[i+1]=='n') || (s[i]=='\\' && s[i+1]=='t')){
           word=0;
           i++;
       }
        else if(s[i]==' '){
           word=0;
        }
        else if(word==0){
            count++;
            word=1;
        }
    }
    return count;
}


// TC = O(N)...where N is length of given String
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/count-number-of-words1500/1?page=10&difficulty[]=0&category[]=Arrays&category[]=Strings&category[]=Linked%20List&sortBy=submissions