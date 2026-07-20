#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 5000001;
int spf[N], g[N], pre[N];

int main()
{
    fast;
    for(int i=1; i<N; i++) spf[i] = i;
    for(int i=2; i*i < N; i++)
        if(spf[i] == i)
            for(int j=i*i; j<N; j+=i)
                if(spf[j] == j) spf[j] = i;
    g[1] = 0;
    for(int i=2; i<N; i++) g[i] = g[i/spf[i]] + 1;
    for(int i=1; i<N; i++) pre[i] = pre[i-1] + g[i];
    tc{
        int a, b; cin >> a >> b;
        cout << pre[a] - pre[b] << endl;
    }
    return 0;
}
