#include <bits/stdc++.h>
using namespace std;
void margeSort(int arr[], int left[], int leftSize, int right[], int rightSize)
{
    int i = 0, j = 0, k = 0;
    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < leftSize)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < rightSize)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void marge(int arr[], int n)
{
    if (n < 2)
        return;
    int mid = n / 2;
    int left[mid], right[n - mid];
    for (int i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }
    for (int i = mid; i < n; i++)
    {
        right[i - mid] = arr[i];
    }
    marge(left, mid);
    marge(right, n - mid);
    margeSort(arr, left, mid, right, n - mid);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    marge(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}