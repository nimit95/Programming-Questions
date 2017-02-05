/*
    Stack implemented using Linked List
*/
#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x): data(x),next(NULL){}
}*temp, *top=NULL;
void push(node *(&top), int x)
{
    temp = new node(x);
    temp -> next = top;
    top = temp;
}
int pop(node *(&top))
{
    int x = top -> data;
    top = top ->next ;
    return x;
}
int main(){
    int n, t;
    cin>>n;
    while(n--){
        cin>>t;
        push(top, t);
    }
    pop(top);
    temp = top;
    while(temp!=NULL)
    {
        cout<<temp -> data;
        temp = temp->next;
    }
}
