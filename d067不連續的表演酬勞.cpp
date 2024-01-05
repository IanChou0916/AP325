#include<bits/stdc++.h>
using namespace std;
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define all(_) _.begin(),_.end()
#define pr(_) cout << fixed << setprecision(_)
typedef long long ll;
typedef long double ld;
const int maxn = 1e7+10;
vector<int> dp(maxn);
vector<int> cost(maxn);
int main(void) {
	penguin
	ll n;
	cin >> n;
	dp[0] = 0;
	cost[0] = 0;
	dp.resize(n+1);
	cost.resize(n+1);
	for(int i=1;i<=n;i++){
		cin >> cost[i];
	}
	dp[1] = cost[1];
	for(int i=2;i<=n;i++){
		dp[i] = max(dp[i-1],cost[i]+dp[i-2]);
		//cerr << dp[i] << " ";
	}
	cout << dp[n] << "\n";
	return 0;
}