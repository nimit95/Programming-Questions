/*
Number of zeroes in an integer
*/
#include<iostream>
#include<vector>
using namespace std;
int countZero(int x)
{
    if(x<=0)
        return 0;
    return x%10==0? 1 + countZero(x/10): countZero(x/10) ;
}
int main()
{
    long int x;
    cin>>x;
    cout<<countZero(x);
    return 0;
}
