#include <bits/stdc++.h>

using namespace std;

int LCS(string str1,string str2) {
	int memo[str1.size()+1][str2.size()+1];
	memset(memo, 0, sizeof memo);
	for (int i = str1.size()-1;i >= 0; i--) {
		for (int j = str2.size()-1; j >= 0; j--) {
			if(str1[i] == str2[j]) {
				memo[i][j] = memo[i+1][j+1] + 1;
			} else {
					memo[i][j] = max(memo[i+1][j],memo[i][j+1]);
			}
		}
	}
	return memo[0][0];
}

int main() {
	string str1, str2;
	getline(cin,str1);
	getline(cin,str2);
	int ans = LCS(str1,str2);
	cout << ans << '\n';
	return 0;
}