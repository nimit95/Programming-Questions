/*
n are no. of stairs, can hop them 1, 2 or 3 steps. Total Possible Ways
*/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int waystoClimb(int i, int n)
{
    int temp = 0;
    if(i==n)
        return ++temp;
    if(i>n)
        return temp;
    temp = waystoClimb(i+1,n);
    temp += waystoClimb(i+2,n);
    temp += waystoClimb(i+3, n);
    return temp;
}
int main()
{
    int n;
    cin>>n;
    cout<<waystoClimb(0,n);
    //cout<<len(x);
    return 0;
}

