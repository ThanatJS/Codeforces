#include <bits/stdc++.h>

using namespace std;


int main() {

	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		map <int,int> m;	 
		int a[n];
		int ans = 0;
		int ml = 0,mr=0;
		for(int i=0;i < n;i++){
			cin >> a[n];
			m[a[n]]++;
			if(m[a[n]] == 1){
			ml++;
			}
		} 
		for(auto p:m){
			mr = max(p.second,mr);
		}
		cout << ml << ":" << mr << '\n';
		//cout << max(min(ml-1,mr),min(ml,mr-1)) << '\n';
	}
	return 0;
}
