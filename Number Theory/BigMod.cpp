#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll bigMod(ll base,ll exponent,ll mod) {
	if(exponent == 0) return 1;
	if(exponent & 1) {
		return ((base % mod) * bigMod(base,exponent-1,mod))%mod;
	} else {
		ll tmp = bigMod(base,exponent/2,mod);
		return (tmp*tmp) % mod;
	}
}

int main() {
  ll b, e, m;
  cin >> b >> e >> m;
  ll ans = bigMod(b,e,m);
  cout << ans << '\n';
}