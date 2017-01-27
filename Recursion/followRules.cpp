/*
Suppose you have a string made up of only the letters 'a' and 'b'. Write a
recursive function that checks if the string was generated using the
following rules:
  a. The string begins with an 'a'
  b. Each 'a' is followed by nothing or an 'a' or "bb"
  c. Each "bb" is followed by nothing or an 'a'
*/
#include<iostream>
using namespace std;
bool stringfollowRules(string s, int n=0)
{
    if(n==s.length()){
        return true;}
    if(s[n]=='a'){
        return stringfollowRules(s, n+1);
    }
    else if(s[n]=='b')
    {
        if(n==s.length()-1)
            return false;
        else{
            if(s[n+1]=='b')
               stringfollowRules(s, n+2);
            else
                return false;
        }
    }
}
int main()
{
    string s;
    cin>>s;
    cout<<stringfollowRules(s);
    return 0;
}
