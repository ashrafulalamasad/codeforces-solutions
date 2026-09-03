#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; string a; cin >> n >> a >> m;
        string b, c; cin >> b >> c;
        deque<char> d(a.begin(), a.end());
        for(ll i = 0; i < m; i++){
            if(c[i] == 'V'){
                d.push_front(b[i]);
            }else{
                d.push_back(b[i]);
            }
        }
        for(char ch : d){
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
