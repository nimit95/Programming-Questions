/*
Reverse a string
*/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
string reverse(string s, int i)
{
    if(i==0)
        return "";
    return s[i-1] +reverse(s,i-1);
}
int main()
{
    string s;
    cin>>s;
    cout<<reverse(s, s.length());
    return 0;
}
