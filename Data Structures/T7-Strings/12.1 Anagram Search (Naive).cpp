#include <bits/stdc++.h> 
using namespace std; 
 
const int CHAR=256; 
bool areAnagram(string &pat, string &txt,int i) 
{ 
    int count[CHAR]={0};
    for(int j=0;j<pat.length();j++){
        count[pat[j]]++;
        count[txt[i+j]]--;
    }
    for(int j=0;j<CHAR;j++){
        if(count[j]!=0)return false;
    }
    return true;
}

bool isPresent(string &txt,string &pat){
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<=n-m;i++){
        if(areAnagram(pat,txt,i))return true;
    }
    return false;
}
 
int main() 
{ 
    string txt = "geeksforgeeks"; 
    string pat = "frog"; 
    if (isPresent(txt,pat)) 
        cout << "Anagram search found"; 
    else
        cout << "Anagram search not found"; 
  
    return 0; 
} 
