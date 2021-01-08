#include<bits/stdc++.h>

using namespace std;

void counting_sort(int a[],int n)
{
    int cnt[n];
    int i,j;
    for(i=0;i<=n;i++){
        cnt[i]=0;
    }
    int z=0;
    for(i=0;i<=n;i++){
        x=a[i];
        cnt[x]++;
    }
    for(i=0;i<=n;i++){
        a[i]=0;
    }
    for(i=0;i<=n;){
        if(cnt[i]!=0){
            for(j=0;j<cnt[i];j++){
                a[z]=i;
                z++;
            }
        }
        i++;
    }
}

int main()
{
    int a[]={3,4,1,6,2,4,9,7,8,4,2,1};
    counting_sort(a,11);
    for(int i=0;i<=11;i++){
    cout<<a[i]<<endl;
    }
    return 0;
}

