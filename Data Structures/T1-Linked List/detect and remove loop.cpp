#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void detectRemoveLoop(Node* head) 
{ 
    Node *slow = head, *fast = head; 
  
    while (fast!=NULL && fast->next!=NULL) { 
        slow = slow->next; 
        fast = fast->next->next; 
        if (slow == fast) { 
            break; 
        } 
    } 
     if (slow == fast) 
    {
        slow = head;
        
          if(slow == fast) {
              while(fast->next != slow) fast = fast->next;
        }
          else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }
 
        fast->next = NULL; /* remove loop */
    }
}
void display(Node* head)
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
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
	//	display(head);
	detectRemoveLoop(head); 
//	return 0;
	display(head);
} 
