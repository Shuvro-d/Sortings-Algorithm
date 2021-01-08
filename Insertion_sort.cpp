#include<bits/stdc++.h>
using namespace std;
void insertion_sort_for(int a[],int n){
int i,j,item;
for(i=1;i<n;i++){
    item=a[i];
    for(j=i-1;j>=0;j--){
        if(a[j]>item){
            a[j+1]=a[j];
        }
    }
    a[j+1]=item;
}
}
void insertion_sort_ascending(int a[],int n){
int item,i,j;
for(i=1;i<n;i++){
    item=a[i];
    j=i-1;
    while(j>=0 && a[j]>item){
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=item;
}
}
void insertion_sort_descending(int a[],int n)
{
    int item,i,j;
    for(i=1;i<n;i++){
        item=a[i];
        j=i-1;
        while(j>=0 && a[j]<item){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=item;
    }
}
int main()
{
    int a[]={5 ,4 ,3 ,2 ,1};
    int i,j,n=5;
    insertion_sort_for(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
