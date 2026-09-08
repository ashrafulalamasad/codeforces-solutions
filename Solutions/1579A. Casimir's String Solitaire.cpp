#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        ll a = count(s.begin(), s.end(), 'A');
        ll b = count(s.begin(), s.end(), 'B');
        ll c = count(s.begin(), s.end(), 'C');
        if(a + c == b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
