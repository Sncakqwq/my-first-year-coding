# include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> a;
    vector <int> pre;
    int n;
    cin >> n;
    a.resize(n+1);
    pre.resize(n+1);
    a[0]=0;
    pre[0]=0;
    vector<int> premin; // 记录数组：premin[i] 表示pre[0]到pre[i]的最小值
    premin.resize(n+1);
    premin[0]=0;
    
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        pre[i]=pre[i-1]+a[i];
        premin[i] = max(premin[i-1],pre[i])
          // 可以用max函数替代下面的两行代码
        // premin[i]=premin[i-1];
        // if(pre[i]<premin[i]) premin[i]=pre[i];
    }
    int max=pre[1]-pre[0];
    for(int y=1;y<=n;y++)
    {
        int temp=pre[y]- premin[y-1] ;
        if(temp>max) max=temp;
    }
    cout << max;
    
    return 0;
}
