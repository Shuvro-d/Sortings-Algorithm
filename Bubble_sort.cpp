#include<bits/stdc++.h>
using namespace std;
int i,j,swaps;
void bubble_sort_ascending(int a[],int n){
for(i=0;i<n;i++){
        swaps=0;
    for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            swaps++;
        }
    }
    if(swaps==0)break;
}
}
void bubble_sort_descending(int a[],int n){
for(i=0;i<n;i++){
        swaps=0;
    for(j=0;j<n-i-1;j++){
        if(a[j]<a[j+1]){
            swap(a[j],a[j+1]);
            swaps++;
        }
    }
    if(swaps==0)break;
}
}
int main()
{
    int a[]={8,2,4,1,5};
    int n=5;
    bubble_sort_ascending(a,n);
    for(i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
