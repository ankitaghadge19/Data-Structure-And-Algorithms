/*  
    Input:
    S = "HEY U"
    Output: 4433999088
    Explanation: For 'H' press '4' two times.
    For 'E' press '3' two times. For 'Y' press '9' 
    three times. For white space press '0' one time.
    For 'U' press '8' two times.
*/

#include<bits/stdc++.h>
using namespace std;

string printSequence(string s)
{
    string str[] = {"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555", "6",
                  "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999",
                  "9999"};
    // { "2" = A, "22"=B, "222"=C ... "9999"=Z } and { " "=0 }
    /*   
          2   3   4   5   6   7    8   9
         ABC DEF GHI JKL MNO PQRS TUV WXYZ   
    */     
    string ans="";
    
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            ans=ans+"0";
        }
        else{
            int j= s[i]-'A';
            ans=ans+str[j];
        }
    }
    return ans;
}

// TC = O(Length of String)
// SC = O(Length of String)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1