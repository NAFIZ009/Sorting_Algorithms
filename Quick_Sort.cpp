#include<bits/stdc++.h>
using namespace std;
void swap(int *p,int *q)
{
    int temp=*p;
    *p = *q;
    *q = temp;
}
int partition(int arr[],int start,int end)
{
    int pivot=arr[end];
    int pIndex = start;
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[pIndex],arr[i]);
            pIndex++;
        }
    }
    swap(arr[pIndex],arr[end]);
    return pIndex;
}
void quickSort(int arr[],int start,int end)
{
    if(start>=end)return;
    int pIndex = partition(arr,start,end);
    quickSort(arr,start,pIndex-1);
    quickSort(arr,pIndex+1,end);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    quickSort(arr,0,n-1);
    for (int i = 0; i < n; i++) cout << arr[i] << endl;
    return 0;
}