/*
Sum of Series 1 + 1/2 + 1/4 + ... +1/(2^k)
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
double sum(int x)
{
    if(x==0)
        return 1;
    return 1/pow(2,x) + sum(--x);
}
int main()
{
    long int x;
    cin>>x;
    cout<<sum(x);
    return 0;
}

