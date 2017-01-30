/*
  change pi in string to 3.14
  Eg "xpix" -> "x3.14x" , "pipi" -> "3.143.14"
*/
#include<iostream>
using namespace std;
string replacepi(string s, int i = 0)
{
    if(i == s.length())
        return "";

    return (s[i]=='p'&&s[i+1]=='i')? "3.14" + replacepi(s,i+2): s[i] + replacepi(s ,i+1) ;
}

int main()
{
    string s;
    cin>>s;
    cout<<replacepi(s,0);
}
