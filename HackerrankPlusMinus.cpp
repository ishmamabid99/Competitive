#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int pos=0 , neg=0 , zero =0;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cin>>x ;
        if (x<0) neg++;
        else if(x>0) pos++;
        else zero++;
    }
    double ratio1 = (1.0*pos)/(n*1.0);
    double ratio2 = (1.0*neg)/(n*1.0);
    double ratio3 = (1.0*zero)/(n*1.0);
    cout<<fixed<<setprecision(6)<<ratio1<<endl<<ratio2<<endl<<ratio3<<endl;
}
 
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    // int tests;
    // cin >> tests;
    // while (tests--)
     solve();
}