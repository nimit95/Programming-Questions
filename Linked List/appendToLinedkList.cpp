/*
    Append the last n elements of a linked list to the front. e.g. for 1 -> 2 -> 3
    -> 4 -> 5 -> 6 -> null and n = 2 return 5 -> 6 -> 1 -> 2 -> 3 -> 4 -> null.
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
Node *appendToLinkList(Node *head, int n)
{
    Node *temp= head,*temp2=head, *temp3=head;
    int i;
    for(i=1;temp->next!=NULL;i++)
    {
        temp = temp->next;
        if(i>n)
            temp2 = temp2->next;
        if(i>=n)
            temp3 = temp3->next;
    }
    //cout<<temp->data;
    if(n>=i)
        return head;
    temp->next = head;
    temp2->next = NULL;
    head = temp3;
    return head;
}
int main()
{
    Node *head=NULL, *temp=NULL;
    head= new Node(1);
    temp = head;
    for(int i=1;i<6;i++)
    {
        temp->next= new Node(i+1);
        temp=temp->next;
    }
    printList(head);
    int n;
    cin>>n;
    printList(appendToLinkList(head, n));
}
