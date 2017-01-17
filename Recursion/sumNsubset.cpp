/*
Gives all subset of a set of array which adds upto N.
*/
#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int coun=0;
int sumNsubset(vector<int> v, int n, int sum, string s)
{
    bool temp = false;
    if(sum == 0){
          cout<<endl<< s <<"\b}";
        return 1;
    }
    if(sum<0 || n<1)
        return 0;
    sumNsubset(v, n-1, sum, s);
    sumNsubset(v, n-1, sum - v[n-1], s + (char)(v[n-1] + 48)+",");
    return 0;

}
int main()
{
    int n,sum;
    vector<int> v;
    cin>>n>>sum;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sumNsubset(v,n,sum,"{");
}
