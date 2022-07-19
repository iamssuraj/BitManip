#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define pb push_back
#define print(x, n) for(int i = 0; i < n ; i++) cout << x[i] << " ";
#define sort(x) sort(x.begin(), x.end())
#define reverse(x) reverse(x.begin(), x.end())
const int N = 1e5 + 2, MOD = 1e9 + 7;
#define int long long int
vector<vi> subsets(vi a)
{
    vector<vi> v;
    int n = a.size();
    for (int i = 0; i < 1 << n; i++)
    {
        vi temp;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                temp.pb(a[j]);
        }
        v.pb(temp);
    }
    return v;
}
void solve()
{ 
    int n;
    cin >> n;
    vi a(n);
    rep(i,0,n)
        cin >> a[i];
    vector<vi> ans = subsets(a);
    rep(i,0,ans.size())
        sort(ans[i]);
    sort(ans);
    for(int j=1;j<ans.size();j++)
    {
        print(ans[j], ans[j].size());
        cout << endl;
    }
}
signed main()
{     
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
