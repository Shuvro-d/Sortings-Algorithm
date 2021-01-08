#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int low,int high)
{
    int pivot,i,j;
    pivot=a[high];
    for(i=low-1,j=low;j<high;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[high],a[i+1]);
    return i+1;
}

void quick_sort(int a[],int low,int high)
{
    if(low>=high){
        return;
    }
    int p;
    p=partition(a,low,high);
    quick_sort(a,low,p-1);
    quick_sort(a,p+1,high);
}

int main()
{
    int i,n=11;
    int a[]={1,5,6,3,8,7,2,9,5,3,5,8};
    int low=0,high=n;
    quick_sort(a,low,high);
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
