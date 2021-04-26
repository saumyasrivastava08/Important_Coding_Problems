#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
int leftMost(string &str) 
{
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(count[str[i]]>1)return i;
    }
    return -1;
}
 
int main() 
{ 
    string str;
    cin<<str;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
} 
