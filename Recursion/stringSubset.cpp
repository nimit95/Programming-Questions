/*
Given a string print all its subsets
*/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void stringSubset(string s,int n, int maxsize)
{
    if(s=="")
        return;
    if(n == 0){
        cout<<s<<endl;
        return ;
    }
    stringSubset(s.substr(0, n-1)+s.substr(n), n-1, maxsize);
    stringSubset(s, n-1, maxsize);

}
int main()
{
    string s;
    cin>>s;
    stringSubset(s,s.length(),s.length());
    return 0;
}
