#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b; char s; cin >> a >> s >> b;
    if(s == '<' && a < b) cout << "Right" << endl;
    else if(s == '>' && a > b) cout << "Right" << endl;
    else if(s == '=' && a == b) cout << "Right" << endl;
    else cout << "Wrong" << endl;
    return 0;
}
