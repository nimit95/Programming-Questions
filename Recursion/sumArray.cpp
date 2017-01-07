#include<iostream>
#include<vector>
using namespace std;
int sum(vector<int> &v, int n)
{
    if(n==0)
        return 0;
    return v[n-1] + sum(v, n-1);
}
int main()
{
    long int n,x ;
    cin>>n;         //No. of elements
    vector<int> v;
    while(n--)      //Input Array
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<sum(v, v.size());
    return 0;
}
