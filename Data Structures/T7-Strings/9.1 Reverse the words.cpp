#include <bits/stdc++.h> 
using namespace std; 

void reverse(string &sr,int low, int high){
    while(low<=high){
        swap(sr[low],sr[high]);
        low++;
        high--;
    }
}

void reverseWords(string &str){
    int start=0;
    for(int end=0;end<str.length();end++){
        if(str[end]==' '){
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    int n = str.length();
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}
 
int main() 
{ 
    string s ;int n=s.length();
    getline(cin,s);
    
    cout<<"After reversing words in the string:"<<endl;
    reverseWords(s);
  
        cout << s;
    
    return 0; 
} 
