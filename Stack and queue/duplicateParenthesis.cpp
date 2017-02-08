/*
    Check for Duplicate Parenthesis
*/
#include<iostream>
#include<stack>
using namespace std;
bool duplicateParenthesis(string s){
    stack<char> mystack;
    for(char c : s){
        if(c==')'){
            if(mystack.top()=='(')
                return true;
            else{
                while(mystack.top()!='(')
                    mystack.pop();
                mystack.pop();
            }
        }
        else
            mystack.push(c);
    }
    return false;
}

int main(){
    string s;
    cin>>s;
    cout<<duplicateParenthesis(s);
}
d
