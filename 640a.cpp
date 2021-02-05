#include<bits/stdc++.h>

using namespace std;

void resolve (int nn) {
	int p = 1;
	int ans = 0;
	int aa = 0;
	int s = 0;
	int tt = to_string(nn).length()+1;
	vector<int> v;
	while(tt--){	
		if(nn%p){
			aa += ans;
			ans = (nn%p)-aa;
			if(ans != 0){
				s++;
				v.push_back(ans);
			}
		}
		p *= 10;
	}
	cout << s << '\n';
	for(auto x:v)
		cout << x << " ";
}

int main() {
	int t;
	int n;
	cin >> t;
	while(t--){
		cin >> n;
		resolve(n);
		cout << '\n';		
	}
	return 0;
}
