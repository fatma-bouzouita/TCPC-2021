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

const int N=1e5+7;
ll arr[N];
void solve(){
	int n;
	cin >> n;
	For(i, n){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	ll ans = 0;
	ll m = 1e10;
	ll l = n/2;
	l += (n%2==0 ? 1:2);
	for(int i=0; i < l; i++){
		if(m > abs(arr[i]-arr[i+n/2-1])){
			m = abs(arr[i]-arr[i+n/2-1]);
			ans = 0;
			for(int j=i; j < (i+(n/2))-1; j++){
				ans += abs(arr[j]-arr[j+1]);
			}
		}
	}
	cout << ans << endl;
}

int main(){
	fastio;
	freopen("min.in", "r", stdin);
	solve();
	return 0;
}
