#include<iostream>
#include<vector>
using namespace std;
int len(int x){
    if(x==0)
        return 0;
    return 1+len(x/10);
}
int possiblePath(int i, int j, int maxx, int maxy)
{
    int temp=0;
    if( i == maxx && j == maxy)
        return ++temp;
    else if(i>maxx || j>maxy)
        return temp;
    temp = possiblePath(i+1, j, maxx, maxy);
    temp = temp +possiblePath(i, j+1, maxx, maxy);
    return temp;
}
int main()
{
    long int x,y;
    cin>>x>>y;
    cout<<possiblePath(0,0,x-1,y-1);
    //cout<<len(x);
    return 0;
}
