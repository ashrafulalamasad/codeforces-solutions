#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string s; cin >> s;
        vector<ll> frequency(26);
        for(char c : s) frequency[c - 'a']++;
        ll maximum = *max_element(frequency.begin(), frequency.end());
        cout << max(2 * maximum - n, n % 2) << endl;
    }
    return 0;
}
