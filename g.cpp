#include "bits/stdc++.h"
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
 
#define fastio ios_base::sync_with_stdio(false)
#define debug(x) cerr << #x << " is " << x << "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define For(i, n) for(int i=0; i < n; i++)

void solve(){
	int x1,x2,x3,y1,y2,y3;
	float a,b;
	int t;
	cin >> t;
	while(t--)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		if(x1 == x2 && x1 == x3 && y1 == y2 && y2 == y3){
			cout << "Possible" << endl;
			continue;
		}
		if(x2==x1)
		{
			if(x3==x1)
				cout<<"Impossible"<<endl;
			else{
				a=(y3-y1)/(x3-x1);
				b=-a*x1+y1;
				if(a*x2+b==y2)
					cout<<"Impossible"<<endl;
				else
					cout<<"Possible"<<endl;
			}
		}

		else{
				a=(y2-y1)/(x2-x1);
				b=-a*x1+y1;
				if(a*x3+b==y3)
					cout<<"Impossible"<<endl;
				else
					cout<<"Possible"<<endl;
		}

	}
}

int main(){
	fastio;
	freopen("circles.in", "r", stdin);
	solve();
	return 0;
}
