#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(int d)
		{
			data=d;
			next=NULL;
		}
};
void insertback(node* &head,node* &tail,int d)   
{
	if(head==NULL)
	{
		head=tail=new node(d);
	}
	else
	{
	node* n=new node(d); //allocate memory to node
	tail->next=n;
	tail=n;
}
}
void display(node* head)
{
	while(head)
	{
		cout<<head->data<<"--->";
		head=head->next;
	}
	cout<<"NULL"<<"\n";
}
int main()
{
	node* head=NULL; 
	node* tail=NULL; 
	cout<<"Enter no of elements you want to insert"<<" ";
     int num;
     cin>>num;
     	for(int i=1;i<=num;i++)
	{
		int k;
		cin>>k;
		insertback(head,tail,k);
	}
	cout<<"Linked list after insertion is "<<endl;
	display(head);
	  node* curr=head;
	  node *fast=head;
	  while(fast!=NULL && fast->next!=NULL)
	  {
	  	curr=curr->next;
	  	fast=fast->next->next;
	  }
     
     cout<<"Middle element of the linked list is:- "<< curr->data;
}
