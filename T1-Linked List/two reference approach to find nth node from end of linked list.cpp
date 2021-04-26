//Approach 2 (two reference )
// one pointer at head
// second pointer n postions head
// now do move to next pointers
//for finding nth node from end of linked list
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
      cout<<"nth node from last to be deleted"<<" ";
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
      {
      	
      	curr=curr->next;
      }
      node* curr2=head;
      	while(curr!=NULL)
      	{
      		curr=curr->next;
      		curr2=curr2->next;
      		
		}
	  
     cout<<"Nth last node from  linked list is:- "<< curr2->data;
}
