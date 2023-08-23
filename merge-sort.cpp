#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int m, int r)
{
    int leftSize = l - m + 1;
    int rightSize = r - m;
    int lArray[leftSize];
    int rArray[rightSize];
    int k = 0;

    for (int i = l; i <= m; i++)
    {
        lArray[k] = a[i];
        k++;
    }
    k = 0; 
    for (int i = m + 1; i <= r; i++)
    {
        rArray[k] = a[i];
        k++;
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