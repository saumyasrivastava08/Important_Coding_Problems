//Through Linked List
#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node* next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

node *front, *rear;

void enqueue(int x)
{
		node* temp = new node(x);

		if (rear == NULL) {
			front = rear = temp;
            cout<<"\n"<<x<<" is succussfully enqueud .\n";
			return;
		}

		rear->next = temp;
		rear = temp;
        cout<<"\n"<<x<<" is succussfully enqueud .\n";
}

void dequeue()
{
		if (front == NULL)
			{
                cout<<"Queue is empty\n";
                return;
            }

		node* temp = front;
		front = front->next;

		if (front == NULL)
			rear = NULL;
         cout<<"\nSuccessfully Dequeued "<<temp->data<<"\n";
		delete(temp);
}
void display(){
       node *temp=front;
       cout<<"\nQueue is: ";
       while(temp!=nullptr)
       {
           cout<<temp->data<<' ';
           temp=temp->next;
       }
       cout<<"\n";
}


// Driven Program
int main()
{


	enqueue(1);
	enqueue(2);
	dequeue();
	
    display();
	enqueue(39);
	enqueue(90);
	enqueue(987);
	dequeue();
    dequeue();
    display(); 
	
}
// This code is contributed by rathbhupendra
