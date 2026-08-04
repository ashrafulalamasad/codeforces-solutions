#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll dot(ll ax, ll ay, ll bx, ll by){
    return ax * bx + ay * by;
}

bool isRight(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
    ll area2 = (x2-x1) * (y3-y1) - (x3-x1) * (y2-y1);
    if(area2 == 0) return false;
    ll d1 = dot(x2-x1, y2-y1, x3-x1, y3-y1);
    ll d2 = dot(x1-x2, y1-y2, x3-x2, y3-y2);
    ll d3 = dot(x1-x3, y1-y3, x2-x3, y2-y3);
    return d1 == 0 || d2 == 0 || d3 == 0;
}

int main()
{
    fast;
    ll x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if(isRight(x1, y1, x2, y2, x3, y3)){
        cout << "RIGHT" << endl;
        return 0;
    }
    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
    bool almost = false;
    for(int i = 0; i < 4 && !almost; i++){
        if(isRight(x1 + dx[i], y1+dy[i], x2, y2, x3, y3)) almost = true;
    }
    for(int i = 0; i < 4 && !almost; i++){
        if(isRight(x1, y1, x2 + dx[i], y2 + dy[i], x3, y3)) almost = true;
    }
    for(int i = 0; i < 4 && !almost; i++){
        if(isRight(x1, y1, x2, y2, x3 + dx[i], y3 + dy[i])) almost = true;
    }
    cout << (almost ? "ALMOST":"NEITHER") << endl;
}
