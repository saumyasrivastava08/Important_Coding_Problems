#include <iostream>
using namespace std;
struct node{    //Creating a structure for node
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};
void insertBack(node* &head, node* &tail, int x){   //Creation of a linked list
    node* temp = new node(x);
    if(head == NULL){
        head = tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
void printList(node* head){     //print the linked list
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" --> ";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}
node* insertAtPosition(node* head, int n, int pos){
        int size = 0;
    node* new_head = new node (n);
    node* temp = head;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    if (pos < 1 || pos > size+1){           //handling the corner cases
        cout<<"Enter valid input!"<<endl;
        return head;
    }
    else if (pos == 1){
        new_head->next = head;
        return new_head;
    }
    else{
        int i = 0;
        node* curr = head;
        while(i < pos-2){
            curr = curr->next;
            i++;
        }
        new_head->next = curr->next; 
        curr->next = new_head;
        return head;
    }

}
int main(){
    int n;
    int pos;
    node* head = NULL;
    node* tail = NULL;
    insertBack(head, tail, 10);
    insertBack(head, tail, 20);
    insertBack(head, tail, 30);
    insertBack(head, tail, 40);
    printList(head);
    cout<<"Enter the number to be inserted: ";
    cin>>n;
    cout<<"Enter the position: ";
    cin>>pos;
    node* new_head = insertAtPosition(head, n, pos);
    printList(new_head);
    return 0;
}