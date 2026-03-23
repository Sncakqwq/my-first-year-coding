# include<bits/stdc++.h>
using namespace std;
vector <int> tree; 
int main()
{
    int l,m;
    cin >> l >> m;
    tree.assign(l+1,1);  // 初始化，树苗数组，长度为l+1，初始值为1，代表该位置还没有被移走
    int ans=0;
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin >> u >> v;
        for(int j=u;j<=v;j++)
        {
            if(tree[j]!=0) 
            {
                ans++;
                tree[j]=0;
            }
        }
        
    }
    int res=l+1-ans;
    cout << res;
    
    
    return 0;
}
