#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
ll arr[11];
string s1="codeforces";
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	ll cnt=1;
	int buf=0;
	for(int i=0;i<10;i++) arr[i]=1;
	while(cnt<n){
		cnt/=arr[buf];
		arr[buf]++;
		cnt*=arr[buf];
		buf++;
		buf%=10;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<arr[i];j++){
			cout<<s1[i];
		}
	}
	cout<<endl;
	return 0;
}
