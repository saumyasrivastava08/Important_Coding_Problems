#include<bits/stdc++.h> 
#define ll long long 
using namespace std; 
int main() 
{ 
 ll t; 
 cin>>t; 
 while(t--) 
 { 
  ll a,b,c,d,count=0; 
  cin>>a>>b>>c>>d; 
  string str=""; 
  if(a>0)
  {
             for(int i=0;i<a;i++) 
             str=str+'A'; 
  }
  if(b>0)
  {
          for(int i=0;i<b;i++) 
         str=str+'B';
  }
  if(c>0)
  {
              for(int i=0;i<c;i++) 
               str=str+'C';
  }
 
  else 
  { 
  for(int i=0;i<str.length()-1;i++) 
     { 
      if(str[i]==str[i+1]) 
         count++; 
     } 
  if(count>d || ((a+b)/2 >d)|| ((b+c)/2 >d) || ((a+c)/2 >d)) 
    cout<<"YES"<<endl; 
  else 
    cout<<"N0"<<endl; 
 } 
} 
}