#include <iostream>
#include<algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
int main(int argc, char** argv) {
	int data[101],right[101];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data[i];
		if(i!=n-1) right[i]=i+1;
		else right[i]=-1;
	}
	int t=0;
	n++;
	cin>>data[n-1];
	while(t!=-1){
		if(data[right[t]]>data[n-1]){
			right[n-1]=right[t];
			right[t]=n-1;
			break;
		}
		t=right[t];
	}
	t=0;
	while(t!=-1){
		cout<<data[t]<<" ";
		t=right[t];
	}
	return 0;
}
