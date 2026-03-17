#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    vector<ll> a(n+1);    // 原数组（1下标）
    vector<ll> pre(n+1);  // 前缀和数组

    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];  // 核心代码！
    }

    // 求 [l, r] 的和
    ll l = 1, r = 3;
    cout << pre[r] - pre[l-1] << endl;
}
