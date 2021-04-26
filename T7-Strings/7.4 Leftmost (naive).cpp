#include <bits/stdc++.h> 
using namespace std; 


int leftMost(string &str) 
{
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j])return i;
        }
    }
    return -1;
}
 
int main() 
{ 
    string str ;
    cin<<str;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
} 
