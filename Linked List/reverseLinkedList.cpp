/*
Reverse a Linked List.
*/
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x):data(x), next(NULL){}
};
void printList(Node* head)
{
    Node *temp = NULL;
    while(head!=NULL){
        cout<<head->data;
        head = head->next;
    }
    cout<<endl;
}
Node *insertAtEnd(Node *head, int x)
{
    Node* newNode = new Node(x);
    Node *temp = head;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = newNode;
    return head;
}
void reverseList(Node* &head)
{
    Node *newNode=NULL;
    Node *temp = NULL;
    while(head!=NULL)
    {
        newNode = head->next;
        head->next = temp;
        temp = head;
        head=newNode;
    }
    head=temp;
}
int main()
{
    Node *head=NULL;
    head= new Node(1);
    for(int i=1;i<6;i++)
        head = insertAtEnd(head,i+1);
    printList(head);
    reverseList(head);
    printList(head);
}
