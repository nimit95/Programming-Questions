/*
If A is 1, B is 2…and Z is 26. Given a number N, print all possible
strings based on above. E.g: 123 -> ABC, LC, AW
*/
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int findNum(string s)
{
   // cout<<"yo"<<s;
    if(s.length()==1)
        return ((int)s[0]-48);
    return ((int)s[0]-48) * pow(10, s.length()-1) + findNum(s.substr(1));
}
void possibleStrings(string s, int n)
{
    if(n==1 && s!= ""){
        vector<int> ans;
        vector<char> temp;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=','){//cout<<s[i];
                temp.push_back(s[i]);}
            else{
                string s2(temp.begin(), temp.end());
                int num = findNum(s2);
                ans.push_back(num);
                if(num>26)
                {
                    temp.clear();
                    ans.clear();
                    break;
                }
                temp.clear();
            }
        }
        if(!temp.empty()){
            string s2(temp.begin(), temp.end());
            int num = findNum(s2);
            if(num>26)
                return;
            ans.push_back(num);
            temp.clear();
        }
        for(int k=0;k<ans.size();k++)
            cout<<(char)(ans[k]+64);
        cout<<endl;
        return;
    }
    /*if(n==1){
        cout<<s<<endl;return;}*/
    possibleStrings(s,n-1);
    possibleStrings(s.substr(0,n-1)+","+s.substr(n-1), n-1);
}
int main()
{
    string s;
    cin>>s;
    possibleStrings(s, s.length());
    return 0;
}
