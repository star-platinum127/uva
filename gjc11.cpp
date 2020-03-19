#include <iostream>
#include<cmath>
#include<algorithm>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int c;
	int sc[1001];
	cin>>c;
	for(int i=0;i<c;i++) cin>>sc[i];
	sort(sc,sc+c);
	cout<<sc[c-2];
	return 0;
}
