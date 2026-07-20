#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        string s; ll m;  cin >> s >> m; vector<ll> b(m);
        for(ll i = 0; i < m; i++) cin >> b[i];
        map<char, ll> count;
        for(char c : s) count[c]++;
        string t(m, ' ');
        auto it = count.rbegin();
        while(true){
            vector<ll> zeros;
            for(ll i = 0; i < m; i++){
                if(b[i] == 0 && t[i] == ' '){
                    zeros.push_back(i);
                }
            }
            if(zeros.empty()){
                break;
            }
            while(it != count.rend() && it->second < zeros.size()){
                it++;
            }
            for(ll i : zeros){
                t[i] = it->first;
            }
            it++;
            for(ll i = 0; i < m; i++){
                if(t[i] == ' '){
                    for(ll z : zeros){
                        b[i] = b[i] - abs(i - z);
                    }
                }
            }
        }
        cout << t << endl;
    }
    return 0;
}
