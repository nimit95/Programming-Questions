/*
Using the phone keypad return all possible words that can be produced
given input digits. e.g. 23 > “ad, ae, af, bd, be, bf, cd, ce, cf”
*/
#include<iostream>
#include<vector>
using namespace std;
vector<string> mergeSet(vector<string> v1, vector<string> v2)
{
    vector<string> temp;
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            temp.push_back(v1[i]+v2[j]);
        }
    }
    return temp;
}
vector<string> keypadletterComb(string s, int n)
{
    vector<string> v={"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> v1, v2;
   // cout<<s<<endl;
    if(n ==1)
    {
        string temp = v[(int)s[0] - 48] + "";
     //   cout<<temp;
        for(int i=0;i<temp.length();i++){
            string l(1, temp[i]);
            v1.push_back(l);
            //cout<<v1[i];//
           // cout<<temp[i];
        }
        return v1;
    }

    v1 = keypadletterComb(s.substr(0,n/2),s.substr(0,n/2).length());
    v2 = keypadletterComb(s.substr(n/2), s.substr(n/2).length());
    return mergeSet(v1, v2);
}
int main()
{
    string s;
    cin>>s;
    vector<string> v = keypadletterComb(s, s.length());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
