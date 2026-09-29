#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string a, b; cin >> n >> a >> b;
        deque<char> current(a.begin(), a.end());
        vector<ll> answer;
        bool reversed = false, inverted = false;
        for(ll i = n - 1; i >= 0; i--){
            char back = reversed ? current.front() : current.back();
            if(inverted) back = back == '0' ? '1' : '0';
            if(back != b[i]){
                char front = reversed ? current.back() : current.front();
                if(inverted) front = front == '0' ? '1' : '0';
                if(front == b[i]){
                    answer.push_back(1);
                    if(reversed) current.back() = current.back() == '0' ? '1' : '0';
                    else current.front() = current.front() == '0' ? '1' : '0';
                }
                answer.push_back(i + 1);
                reversed = !reversed;
                inverted = !inverted;
            }
            if(reversed) current.pop_front();
            else current.pop_back();
        }
        cout << answer.size() << " ";
        for(ll x : answer) cout << x << " ";
        cout << endl;
    }
    return 0;
}
