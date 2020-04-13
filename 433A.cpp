#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int a =0;
    int b =0;
    int n =0;
    cin >> n;
    int wi[n];
    for(int i=0;i < n;i++){
        cin >> wi[i];
        if(wi[i] == 100){
            a += 1;
        }else if(wi[i] == 200){
            b += 1;
        }
    }

    if (n != 1 ){
        if (a% 2 == 1 and a != 0){
            cout << "NO";
        }else if (a == 0 and b % 2 == 1){
            cout << "NO";
        }else{
            cout << "YES";
        }
    }else{
        cout << "NO";
    }
    
    return 0;
}
