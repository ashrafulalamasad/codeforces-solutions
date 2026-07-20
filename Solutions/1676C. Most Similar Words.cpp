#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        int n, m; cin >> n >> m;
        vector<string> words(n);
        for(int i = 0; i < n; i++){
            cin >> words[i];
        }
        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int diff = 0;
                for(int k = 0; k < m; ++k){
                    diff += abs(words[i][k] - words[j][k]);
                }
                mn = min(mn, diff);
            }
        }
        cout << mn << endl;
    }
    return 0;
}
