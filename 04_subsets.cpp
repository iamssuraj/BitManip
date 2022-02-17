// 2^n can be represented as 1<<n

#include <bits/stdc++.h>
using namespace std;
void subsets(vector<char> a, int n)
{
    for (int i = 0; i < 1 << n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout << "{" << a[j] << "}";
        }
        cout << endl;
    }
}
signed main()
{
    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    subsets(v, 4);
    return 0;
}