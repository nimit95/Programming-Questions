/*
Create a Linklist and perform following operations on it- 
Delete a Node from head
Print Linklist
Insert Element at k
print element at kth position
Delete element at kth position
*/
#include<iostream>
using namespace std;
struct Node{                        //Node of a List
    int data;
    Node *next;
    Node(int x): data(x),next(NULL){}
}*temp=NULL;
void printList(Node* head)
{
    while(head!=NULL){
        cout<<head->data;
        head = head->next;
    }
    cout<<endl;
}
Node *deleteFromHead(Node *head)
{
    if(head==NULL)
    {
        cout<<"List is empty\n";
        return NULL;
    }
    else{
        temp = head;
        head = head -> next;
        delete temp;
    }
    printList(head);
    return head;
}
Node *insertAtEnd(Node *head, int x)
{
    Node* newNode = new Node(x);
    temp = head;
    if(temp == NULL)
        return newNode;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = newNode;
    printList(head);
    return head;
}
int elementAtK(Node *head, int k)
{
    if(k==1)
        return head->data;
    else if(head==NULL)
        return -1;
    else
        return elementAtK(head->next,--k);
}
Node* deleteAtK(Node* head, int k)
{
    if(head->next == NULL)
        return head;
    if(k==2){
        head->next = head->next->next;
        return head;
    }
    head -> next = deleteAtK(head -> next, --k);
    return head;
}
int main()
{
    int x,i=0;
    Node *head=NULL;
    while(++i)
    {
        cin>>x;
        if(x==1)
            head = deleteFromHead (head);
        else if(x==2){
            int data;
                cin>>data;
            head = insertAtEnd(head, data);
        }
        else if(x==3)
        {
            int k;
            cin>>k;
            cout<<elementAtK(head, k);
        }
        else if(x==4){
            int k;
            cin>>k;
            head = deleteAtK(head, k);
            printList(head);
        }
    }
}
