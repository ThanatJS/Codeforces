#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
	int t;
	cin >> t;
	string c = "AG";
	string aa;
	int a =0,g =0;
	int aaa =0 ,ggg =0;
	int ta= 0,tg=0;
	while(t--){
		cin >> aaa >> ggg;
		a += aaa;
		g += ggg;
		ta += aaa;
		tg += ggg;
		if((aaa+ggg) == 1000){
			if(a > 500 ){
				if((ta-tg) >= 500){
					aa += c[0];
					ta = 0;
				}else{
					aa +=c[1];
				}
				a = 0;
			}
			else{
				aa += c[0];
				a -= ggg;
			}
		}else{
			aa = "";
			aa += "-1";
		}	
	cout << abs(a) << " " << g << " " << aa << '\n';
	}
	cout << aa << '\n';
	return 0;
}

