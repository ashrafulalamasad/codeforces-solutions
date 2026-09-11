#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;
	tc{
		ll n, m; string moves; cin >> n >> m >> moves;
		ll x = 0, y = 0, minX = 0, maxX = 0, minY = 0, maxY = 0;
		for(char move : moves){
			ll nextX = x, nextY = y;
			if(move == 'U'){
				nextX--;
			}else if(move == 'D'){
				nextX++;
			}else if(move == 'L'){
				nextY--;
			}else{
				nextY++;
			}
			ll nextMinX = min(minX, nextX), nextMaxX = max(maxX, nextX);
			ll nextMinY = min(minY, nextY), nextMaxY = max(maxY, nextY);
			if(nextMaxX - nextMinX >= n || nextMaxY - nextMinY >= m){
				break;
			}
			x = nextX; y = nextY;
			minX = nextMinX;
			maxX = nextMaxX;
			minY = nextMinY;
			maxY = nextMaxY;
		}
		cout << 1 - minX << ' ' << 1 - minY << endl;
	}
	return 0;
}
