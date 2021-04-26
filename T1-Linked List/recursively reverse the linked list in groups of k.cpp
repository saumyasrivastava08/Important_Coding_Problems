
//Reverse the linked list in groups oof size k (recursively)

#include<bits/stdc++.h>
using namespace std;
class node{ //used for creating a node
	public:
		int data; //store the contents
		node* next; //for storing address, acts as a pointer
	node(int d)
	{
		data=d; //5
		next=NULL; //null	
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
node* reversek(node* head , int k)
{ 
node* curr=head;
    node* prev=NULL;
	node* next=NULL;
 int count=0;
    while(curr!=NULL&& count<k)
    {
        next= curr->next;
    	curr->next=prev;
    	prev=curr;
    	curr=next;
    	count++;
	}
	if(next!=NULL)
	{
		node* rest_head= reversek(next,k);
		head->next=rest_head;
	}
	return prev;
}
int main()
{
	node* head=NULL; 
	node* tail=NULL;
	int n; 
	cout<<"No of elements you want to insert :- "<<" ";
	 cin>>n;
	for(int i=1;i<=n;i++)
	{
		int k;
		cin>>k;
		insertback(head,tail,k);
	}
	cout<<"after inserting at back elements will be :- "<<endl;
	display(head);
    
	int knodes;
   cout<<"groups of size k is :="<< " ";
   	cin>>knodes;
    head= reversek(head,knodes);
cout<<"After Reverse Linked list"<<" "<<"\n";
     display(head);

}

