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


vvi graph;
bool visited[107];
int colors[107];

int bfs(int pos){
	queue<int> q;
	q.push(pos);
	visited[pos] = true;
	colors[pos] = 1;
	int ans = 0, cond = false, c = 0;
	while(!q.empty()){
		int x = q.front();
		c++;
		q.pop();
		for(auto child : graph[x]){
			if(colors[child] == -1)
				colors[child] = !colors[x];
			else if(colors[child] == colors[x])
				cond = true;
			if(!visited[child]){
				visited[child] = true;
				q.push(child);
			}
		}
	}
	if(cond && c % 2 == 1)
		ans++;
	return ans;
}
void solve(){
	int n, m;
	cin >> n >> m;
	memset(visited, false, sizeof visited);
	memset(colors, -1, sizeof visited);
	graph.resize(n+1);
	For(i, m){
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
	}
	int ans = 0;
	for(int i=1; i <= n; i++){
		if(!visited[i])
			ans += bfs(i);
	}
	if((n - (ans/2)) % 2 != 0)
		cout << (ans/2) + 1 << endl;
	else
		cout << (ans/2) << endl;
}

int main(){
	fastio;
	// freopen("input.in", "r", stdin);
	solve();
	return 0;
}
