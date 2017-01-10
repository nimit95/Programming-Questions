//Array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> &v, int n)
{
    if(n==1)
        return true;
    return v[n-1] > v[n-2]?isSorted(v, n-1):false;
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
    cout<<isSorted(v, v.size());
    return 0;
}
