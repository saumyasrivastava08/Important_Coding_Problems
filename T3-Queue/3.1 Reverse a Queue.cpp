#include <bits/stdc++.h> 
#include <queue>
using namespace std; 


void Print(queue<int>& Queue) 
{ 
	while (!Queue.empty()) { 
		cout << Queue.front() << " "; 
		Queue.pop(); 
	} 
} 


void reverseQueue(queue<int>& Queue) 
{ 
	stack<int> Stack; 
	while (!Queue.empty()) { 
		Stack.push(Queue.front()); 
		Queue.pop(); 
	} 
	while (!Stack.empty()) { 
		Queue.push(Stack.top()); 
		Stack.pop(); 
	} 
} 

 
int main() 
{ 
	queue<int> q; 
	int a,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		q.push(a);
	}

	//Print(q); 
	for(int i=0;i<n;i++)
   	reverseQueue(q); 
	Print(q); 
} 

