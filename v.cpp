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
	string et, dt;
	cin >> et >> dt;
	string key = "";
	for(int i=0; i < et.size();i++){
		if(et[i] == ' '){
			key += ' ';
			continue;
		}
		cout << int(dt[i])-int(et[i]) << endl;
		key += char(((int)'a' + (abs(int(et[i])-int(dt[i])))));
		cout << key;
	}
	// cout << key << endl;
}

int main(){
	fastio;
	freopen("cipher.in", "r", stdin);
	solve();
	return 0;
}
