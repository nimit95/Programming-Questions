/*
Reverse a integer
*/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int len(int x){
    if(x==0)
        return 0;
    return 1+len(x/10);
}
int reverse(int x, int i)
{
    if(x<=0)
        return 0;
    return pow(10, i-1)* (x%10) + reverse(x/10,--i) ;
}
int main()
{
    long int x;
    cin>>x;
    cout<<reverse(x,len(x));
    //cout<<len(x);
    return 0;
}
