#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int mid, int r)
{
    int ls = mid - l + 1;
    int rs = r - mid;
    int la[ls];
    int ra[rs];
    int k = 0;
    for (int i = l; i < ls; i++)
    {
        cin >> la[i];
    }
    for (int i = mid + 1; i < rs; i++)
    {
        cin >> ra[i];
    }

    int i, j = 0;
    k = 0;
    while (i < ls && j < rs)
    {
        if (la[i] < ra[j])
        {
            a[k] = la[i];
            i++;
        }
        else
        {
            a[k] = ra[j];
            j++;
        }
        k++;
    }
}
void devide(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        devide(a, l, mid);
        devide(a, mid + 1, r);
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

    devide(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}