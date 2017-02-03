#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s1)
{
    if(s1.empty())
        return;
    int temp = s1.top();
    s1.pop();
    print(s1);
    cout<<temp<<" ";
}
void push(stack<int> &s1, int x)
{
    s1.push(x);
}
void pop(stack<int> &s1){
    stack<int> s2;
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s2.pop();
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
}
int main(){
    stack<int> s1;
    int y;
    while(3)
    {
        cin>>y;
        if(y==1){
            int temp;
            cin>>temp;
            push(s1,temp);
        }
        else if(y==2)
            pop(s1);
        else
            break;
        print(s1);
       cout<<endl;
    }
}
