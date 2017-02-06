#include<iostream>
#include<stack>
using namespace std;
void printSpan(int a[], int n){
    stack<int> mystack;
    mystack.push(a[0]);
    for(int i=1;i<n;i++)
    {
        if(mystack.empty())
            mystack.push(a[i]);
        else if(mystack.top()<=a[i])
            mystack.push(a[i]);
        else{
            while(!mystack.empty())
            {
                cout<<mystack.top()<<"\t";
                mystack.pop();
            }
            cout<<endl;
        }
    }
    while(!mystack.empty())
    {
        cout<<mystack.top()<<"\t";
        mystack.pop();
    }
    cout<<endl;
}
int main(){
    int n,a[50];
    cin>>n;
    for(int i =0 ; i<n;i++)
        cin>>a[i];
    printSpan(a, n);
}
