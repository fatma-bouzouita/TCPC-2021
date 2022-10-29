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
	ll t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a, b;
		cin >> a >> b;
		int c=0;
		int zeros = 0;
		for(int i=0; i < a.size(); i++){
			if(a[i] == '1' && a[i] == b[i]){
				c++;
			}else if(a[i] == '0' && a[i] == b[i])
				zeros++;
			if(c > 1)
				break;
		}
		if((c < 2 && zeros > 0) || c == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}

int main(){
	fastio;
	freopen("xorsum.in", "r", stdin);
	solve();
	return 0;
}
