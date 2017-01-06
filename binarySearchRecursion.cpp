#include<iostream>
#include<vector>
using namespace std;
void binarysearch(vector<int> v, int i,int j, int x){
    int mid = (i + j)/2;
    if(v[mid] == x)
        cout<<mid+1;
    else if(mid==i)
        cout<<"Not found";
    else if(v[mid] > x)
        binarysearch(v, i, mid , x);
    else if(v[mid]<x)
        binarysearch(v, mid, j, x);

}
int main()
{
    long int n,x,searchEle;
    cin>>n;         //No. of elements
    vector<int> v;
    while(n--)      //Input Array
    {
        cin>>x;
        v.push_back(x);
    }
    cin>> searchEle ; //Element to search
    binarysearch(v, 0,v.size(), searchEle);
    return 0;
}
