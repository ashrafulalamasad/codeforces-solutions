#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        ll cnt0 = 0, cnt1 = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == '0') cnt0++;
            else cnt1++;
        }
        if(cnt0 != cnt1){
            cout << -1 << endl;
            continue;
        }
        deque<char> q;
        for(ll i = 0; i < n; i++){
            q.push_back(s[i]);
        }
        vector<ll> z;
        ll d = 0;
        ll cur_n = n;
        while(!q.empty()){
            if(q.front() == q.back()){
                if(q.front() == '0'){
                    q.push_back('0');
                    q.push_back('1');
                    z.push_back(cur_n - d);
                }else{
                    q.push_front('1');
                    q.push_front('0');
                    z.push_back(d);
                }
                cur_n += 2;
            }
            while(!q.empty() && q.front() != q.back()){
                q.pop_front();
                q.pop_back();
                d++;
            }
        }
        cout << (ll)z.size() << endl;
        for(ll i = 0; i < (ll)z.size(); i++){
            if(i > 0) cout << " ";
            cout << z[i];
        }
        cout << endl;
    }
    return 0;
}
