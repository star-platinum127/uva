#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int arr[200005];
int b[200005];
int n;
bool solve1(){
	for(int i=0;i<n;i++){
		if(i+1!=arr[i]) return false;
	}
	return true;
}
bool solve2(){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=i+1){
			cnt++;
			int j=i;
			while(j<n && arr[j]!=j+1) j++;
			i=j-1;
		}
	}
	if(cnt==1) return true;
	else return false;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			b[i]=arr[i];
		}
		sort(b,b+n);
		if(solve1()) cout<<0<<endl;
		else if(solve2()) cout<<1<<endl;
		else cout<<2<<endl;
	}
	return 0;
}
