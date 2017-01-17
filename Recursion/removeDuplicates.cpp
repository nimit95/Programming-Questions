/*
Remove consecutive duplicates from a string recursively. For
example, convert "aabccba" to "abcba".
*/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
string removeDuplicate(string s, int i)
{
    if(i==s.length()-1)
        return "";
    return (s[i] == s[i+1]? removeDuplicate(s,i+1):s[i] +removeDuplicate(s,i+1));
}
int main()
{
    string s;
    cin>>s;
    cout<<removeDuplicate(s, 0);
    //cout<<len(x);
    return 0;
}
