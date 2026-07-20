#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    string ans[] = {"Walk", "No", "No", "No", "Yes", "Yes", "backwards", "7"};
    cout << ans[n-1] << endl;
    return 0;
}
