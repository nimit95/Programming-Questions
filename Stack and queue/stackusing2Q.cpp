#include<iostream>
#include<queue>
using namespace std;
void print(queue<int> q1)
{
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
}
void push(queue<int> &q1, int x)
{
    q1.push(x);
}
void pop(queue<int> &q1, queue<int> q2)
{
    for(int i = 0;i<= q1.size()-1;i++){
        q2.push(q1.front());
        q1.pop();
    }
    int m= q2.size();
    for(int i = 0;i<m;i++){
        q1.push(q2.front());
        q2.pop();
    }

}
int main()
{
    queue<int> q1, q2;
    int y;
    while(3)
    {
        cin>>y;
        if(y==1){
            int temp;
            cin>>temp;
            push(q1,q2,temp);
        }
        else if(y==2)
            pop(q1, q2);
        else
            break;
        print(q1);
    }
}
