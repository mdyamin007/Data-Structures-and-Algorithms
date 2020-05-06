#include <bits/stdc++.h>

using namespace std;

int memo[1002][1002];

int LCS(string str1,string str2,int i,int j) {
	if(i >= str1.size() || j >= str2.size()) return 0;
	if(memo[i][j] != -1) return memo[i][j];
	int ans = 0;
	if(str1[i] == str2[j]) {
		ans = 1 + LCS(str1,str2,i+1,j+1);
	} else {
		int ret1 = LCS(str1,str2,i+1,j);
		int ret2 = LCS(str1,str2,i,j+1);
		ans = max(ret1,ret2);
	}
	memo[i][j] = ans;
	return memo[i][j];
} 

int main() {
	memset(memo, -1, sizeof memo);
	string str1, str2;
	getline(cin,str1);
	getline(cin,str2);
	int ans = LCS(str1,str2,0,0);
	cout << ans << '\n';
	return 0;
}