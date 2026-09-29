#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; char c; string s; cin >> n >> c >> s;
        vector<ll> answer; bool equal = true;
        for(char current : s){
            if(current != c) equal = false;
        }
        if(!equal){
            for(ll i = n / 2 + 1; i <= n; i++){
                if(s[i - 1] == c){
                    answer.push_back(i);
                    break;
                }
            }
        }
        if(answer.empty() && !equal){
            answer.push_back(n);
            answer.push_back(n - 1);
        }
        cout << answer.size() << endl;
        for(ll x : answer) cout << x << " ";
        if(!answer.empty()) cout << endl;
    }
    return 0;
}
