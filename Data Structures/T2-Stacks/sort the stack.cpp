#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a;
    stack<int> s;
   for(int i=0;i<n;i++)
   {
      cin>>a;
	   s.push(a); 
    }
    stack<int> t;
    while(!s.empty()){
     int temp=s.top();
       s.pop();
    while(!t.empty() && t.top()>temp){
       int x=t.top();
       t.pop();
       s.push(x);
      }
           t.push(temp);
 } 
  s=t;
   while(!s.empty())
     
     {
         cout<<s.top()<<" ";
       s.pop();}
}
  
	 

