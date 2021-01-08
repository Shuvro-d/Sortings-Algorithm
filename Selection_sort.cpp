#include<bits/stdc++.h>

using namespace std;

void selection_sort_descending(int a[],int n)
{
    int i,j,index_max;
    for(i=0; i<n-1; i++)
    {
        index_max=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]>a[index_max])
            {
                index_max=j;
            }
        }
        if(index_max!=i)
        {
            swap(a[i],a[index_max]);
        }
    }
}
void selection_sort_ascening(int a[], int n)
{
    int i,j,index_min;
    for(i=0; i<n-1; i++)
    {
        index_min=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[index_min])
            {
                index_min=j;
            }
        }
        if(index_min!=i)
        {
            swap(a[i],a[index_min]);
        }
    }
}
int main()
{
    int a[]= {10,5,2,8,7};
    int n=5;
    int i;
    selection_sort_ascening(a,n);
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    selection_sort_descending(a,n);
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
