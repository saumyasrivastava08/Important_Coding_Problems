//Move last element to front of a given Linked List

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
node *datamove(node* &root)
{
    node *curr=root;
    node *sec_last=NULL;
    while(curr->next!=NULL)
    {
    	sec_last=curr;
    	curr=curr->next;
	}
//	node *temp= root;
        sec_last->next=NULL;
        curr->next=root;
        root=curr;
        return root;
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

    head= datamove(head);
cout<<"After Moving the  last element to front of a given Linked List"<<" "<<"\n";
     display(head);

}

