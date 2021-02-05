#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n; // not divisiable by
		int k; // positon array of $n 
		cin >> n >> k;
		int ans = (k-1)/(n-1);
		cout << ans+k << '\n';
	}


}
