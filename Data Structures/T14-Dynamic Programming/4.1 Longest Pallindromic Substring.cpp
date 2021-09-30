//Longest Palindromic Substring
//Given a string s, return the longest palindromic substring in s.
/*
Example 1:

Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
Example 3:

Input: s = "a"
Output: "a"
Example 4:

Input: s = "ac"
Output: "a"
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string longestPalindrome(string s) {
       if(s.size()==0||s.size()==1){
           return s;
       }
        int si=0,ei=0;
       int dp[s.size()][s.size()],maximums=0;
      for(int po=0;po<s.size();po++){
          for(int i=0,j=po;j<s.size();i++,j++){
          if(po==0){
              dp[i][j]=1;
              if(maximums<j-i+1)
              {
                  si=i;
                  ei=j;
                  maximums=j-i+1;
              }
          }
              else if(po==1){
                  if(s[i]==s[j])
                  { dp[i][j]=1;
                  if(maximums<j-i+1)
              {
                  si=i;
                  ei=j;
                  maximums=j-i+1;
              }
                  }else
                      dp[i][j]=0;
              }
              else{
                if(s[i]==s[j]&&dp[i+1][j-1]==1)
                {
                   dp[i][j]=1;
                  if(maximums<j-i+1)
              {
                  si=i;
                  ei=j;
                  maximums=j-i+1;
              }
                }
                  else
                      dp[i][j]=0;
                  }
          }
      }
        string k="";
        for(int po=si;po<=ei;po++){
            k=k+s[po];
        }
    return k;}
int main(){
    string s;
    cin>>s;
    cout<<"Output: "<<longestPalindrome(s);
    return 0;
}
