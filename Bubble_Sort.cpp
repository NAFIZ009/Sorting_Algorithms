#include <bits/stdc++.h>
using namespace std;

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int bubble_sort(int arr[])
{
    for (int i = 0; i < sizeof(arr) - 1; i++)
    {
        int sorted = 1;
        for (int j = 0; j < sizeof(arr) - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                sorted = 0;
            }
        }
        if (sorted)
        {
            break;
        }
    }
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
    bubble_sort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}