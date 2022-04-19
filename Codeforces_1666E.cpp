#include <bits/stdc++.h>
#define mxm 100010

using namespace std;
int inp[mxm], l , n , out[mxm]; 
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
	cin>>l>>n;
	for (int i=1 ; i<=n; i++){
		cin>>inp[i];
		out[i]=i<n?inp[i]:l;
	}
	//Gradient-Descent Approach
	//learning-rate = 1; as only integer matters here
	for (int i=1 ; i<=2500 ; i++){
		for (int j = n -1; j ; j--){
			out[j]=min (max(out[j],(out[j+1]+out[j-1]+1)/2),inp[j+1]);
		}

	}
	for (int i=1; i<=n ; i++){
		cout<<out[i-1]<<" "<<out[i]<<endl;
	}
	return 0;
}