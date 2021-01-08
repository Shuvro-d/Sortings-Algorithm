#include<bits/stdc++.h>
using namespace std;
int left(int i)
{
    return 2*i;
}

int right(int i)
{
    return 2 * i + 1;
}

int parent(int i)
{
    return i/2;
}

void max_heapify(int heap[],int heap_size,int i)
{
    int t,l,r,largest;
    l=left(i);
    r=right(i);
    if( l<=heap_size && heap[l]>heap[i]){
        largest=l;
    }else{
    largest =i;
    }
    if(r<=heap_size && heap[r]>heap[largest]){
        largest=r;
    }
    if(largest != i){
        swap(heap[i],heap[largest]);
        max_heapify(heap,heap_size,largest);
    }
}

void build_max_heap(int heap[],int heap_size)
{
    int i;
    for(i=heap_size/2;i>=1;i++){
        max_heapify(heap,heap_size,i);
    }
}

int is_max_heap(int H[],int heap_size)
{
    int i,p;
    for(i=heap_size;i>1;i--){
        p=parent(i);
        if(H[p]<H[i]){
            return 0;
        }
    }
    return 1;
}

void print_heap(int heap[],int heap_size)
{
    int i;
    for(i=1;i<=heap_size;i++){
        cout<<heap[i]<<" ";
    }
}

void heap_sort(int heap[], int heap_size)
{
    int i,t;
    build_max_heap(heap,heap_size);
    for(i=heap_size;i>1;i--){
        swap(heap[1],heap[i]);
        heap_size -=1;
        max_heapify(heap,heap_size,1);
    }
}

int main()
{

}
