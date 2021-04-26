#include <bits/stdc++.h> 
#include <queue>
using namespace std; 


void printFirstN(int n) 
{ 
    queue<string> q;
    string s,a;
    cout<<"Enter first digit \n";
    cin>>s;
    cout<<"Enter second digit \n";
    cin>>a;
    q.push(s);
    q.push(a);
    
    for(int i = 0; i < n; i++)
    {
        string curr = q.front();
       
        cout << curr << " ";
        
        q.pop();
        
        q.push(curr + s);
        q.push(curr + a);
    }
        
} 

 
int main() 
{ 
	int n;
	cout<<"No. of digits want to generate \n";
	cin>>n;
		
	printFirstN(n);
} 

