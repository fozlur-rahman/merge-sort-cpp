#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r)
{
    int leftSize = m - l + 1;
    int rightSize = r - m;
    int lArray[leftSize];
    int rArray[rightSize];

    for (int i = 0; i < leftSize; i++)
    {
        lArray[i] = a[l + i];
    }
    for (int i = 0; i < rightSize; i++)
    {
        rArray[i] = a[m + 1 + i];
    }

    int i = 0, j = 0;
    int cur = l;

    while (i < leftSize && j < rightSize)
    {
        if (lArray[i] <= rArray[j])
        {
            a[cur] = lArray[i];
            i++;
        }
        else
        {
            a[cur] = rArray[j];
            j++;
        }
        cur++;
    }

    while (i < leftSize)
    {
        a[cur] = lArray[i];
        i++;
        cur++;
    }

    while (j < rightSize)
    {
        a[cur] = rArray[j];
        j++;
        cur++;
    }
}

void merge_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    merge_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}