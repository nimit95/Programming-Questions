
#include<iostream>

using namespace std;

int find_pivot(int a[], int l,int h){
    int mid = (high+low)/2;
    if(a[mid] > a[mid+1]){
        return mid;
    }
    else{
        return find_pivot(a, 0, mid-1);

    }
}

int main(){
    int n, pivot;
    cin >> n;
    for(int i =0; i < n; i++){
        cin >> a[i];
    }
    pivot = find_pivot(a, 0, n-1);
    return 0;
}
