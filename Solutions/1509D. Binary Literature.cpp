#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<string> s(3);
        for(ll i = 0; i < 3; i++) cin >> s[i];
        ll first = 0, second = 1;
        for(ll i = 0; i < 3; i++){
            for(ll j = i + 1; j < 3; j++){
                ll zerosi = count(s[i].begin(), s[i].end(), '0');
                ll zerosj = count(s[j].begin(), s[j].end(), '0');
                ll onesi = 2 * n - zerosi;
                ll onesj = 2 * n - zerosj;
                if((zerosi >= n && zerosj >= n) || (onesi >= n && onesj >= n)){
                    first = i; second = j;
                }
            }
        }
        char common = count(s[first].begin(), s[first].end(), '0') + count(s[second].begin(), s[second].end(), '0') >= 2 * n ? '0' : '1';
        string answer; ll i = 0, j = 0;
        while(i < 2 * n && j < 2 * n){
            if(s[first][i] == s[second][j]){
                answer += s[first][i];
                i++;
                j++;
            }else if(s[first][i] != common){
                answer += s[first][i++];
            }else answer += s[second][j++];
        }
        while(i < 2 * n) answer += s[first][i++];
        while(j < 2 * n) answer += s[second][j++];
        cout << answer << endl;
    }
    return 0;
}
