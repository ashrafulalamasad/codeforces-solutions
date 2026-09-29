#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string path; cin >> path;
        set<pair<pair<ll, ll>, pair<ll, ll>>> visited;
        ll x = 0, y = 0, answer = 0;
        for(char direction : path){
            ll nextx = x, nexty = y;
            if(direction == 'N') nexty++;
            else if(direction == 'S') nexty--;
            else if(direction == 'E') nextx++;
            else nextx--;
            pair<ll, ll> first = {x, y}, second = {nextx, nexty};
            if(first > second) swap(first, second);
            if(visited.insert({first, second}).second) answer += 5;
            else answer++;
            x = nextx; y = nexty;
        }
        cout << answer << endl;
    }
    return 0;
}
