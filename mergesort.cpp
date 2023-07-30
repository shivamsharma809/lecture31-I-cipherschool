#include<iostream>
using namespace std;


void mergesort(int *arr, int start, int end)
{

    if(start>=end)
    {
        return;
    }
    int mid;

    mid = (start+end)/2;

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);

    mergesort(arr,start,end);
}

int main()
{
    int size_arr;

    int arr[5] = {1,5,3,10,4};
    size_arr=5;

    mergesort(arr,0,size_arr-1);

    return 0;
}