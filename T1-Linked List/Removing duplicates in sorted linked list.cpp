
//Remove duplicate element from sorted Linked List

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
node *removeDuplicates(node* &root)
{
unordered_set<int> s;
 node* prev=root;
 node* temp=root;
while(temp!=NULL)
{

if(s.find(temp->data)!=s.end())
{
prev->next=temp->next;
}
else

{
s.insert(temp->data);
prev=temp;

}
temp=temp->next;

}
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

    head= removeDuplicates(head);
cout<<"After Removing Duplicates"<<" "<<"\n";
     display(head);

}

