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

    for (int i = 0; i <= r; i++)
    {
        cout << a[i] << " ";
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

    merge(a, 0, 3, n - 1);
    return 0;
}
