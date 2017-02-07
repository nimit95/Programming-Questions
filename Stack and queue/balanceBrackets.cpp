#include<iostream>
#include<stack>
using namespace std;
bool checkBrackets(string s)
{
    stack<char> Stack;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            Stack.push(s[i]);
        else if(s[i]=='}' && Stack.top()=='{')
            Stack.pop();
        else if(s[i]==')' && Stack.top()=='(')
            Stack.pop();
        else if(s[i]=='[' && Stack.top()==']')
            Stack.pop();
        else
            continue;
    }
    return Stack.empty();
}
int main(){
    string s;
    cin>>s;
    cout<<checkBrackets(s);
}
