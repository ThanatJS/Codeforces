#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n = 0;
		int pa = 0,pb = 0;
		int sa = 0 ,sb = 0;
		int data;
		cin >> n;
		vector<int> v;
		for(int i =0;i <n;i++){
			cin >> data;
			v.push_back(data);
		}
		for(int j =0;j < n;j++){
			if(pa <= pb ){
				sa += v[0];
				pa += v[0];
				v.erase(v.begin());
			}else if(pb <= pa){
				sb += v[v.size()];
				pb += v[v.size()];
				v.pop_back();
			}
		}
		cout  << (n/2)+1 << " " << sa << " " << sb;
		cout << '\n';
	}
}
