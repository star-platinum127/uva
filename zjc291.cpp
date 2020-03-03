#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int fri[n];
	bool tr[n];
	for(int i=0;i<n;i++){
		cin>>fri[i];
		tr[i]=0;
	}
	int c=0;
	for(int i=0;i<n;i++){
		if(tr[i]==1) continue;
		c++;
		int t=fri[i];
		while(fri[t]!=i){
			tr[t]=1;
			t=fri[t];
		} 
		tr[t]=1;
	}
	cout<<c;
	return 0;
}
