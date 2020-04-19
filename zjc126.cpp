#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
string Pres,Ins;
int first,len;
struct treenode{
	char val;
	treenode *right;
	treenode *left;
	treenode(char x,treenode*L,treenode *R):val(x),left(L),right(R){}
};
treenode *buildtree(int left,int right){
	int mid=left;
	treenode *cur;
	cur=new treenode(Pres[first++],NULL,NULL);
	if(right>left){
		for(int i=left;i<=right;i++){
			if(Ins[i]==cur->val){
				mid=i;
				break;
			}
		}
		if(mid-1>=left) cur->left=buildtree(left,mid-1);
		if(mid+1<=right) cur->right=buildtree(mid+1,right);
	}
	return cur;
}
void postorder(treenode *p){
	if(p->left!=NULL) postorder(p->left);
	if(p->right!=NULL) postorder(p->right);
	cout<<p->val;
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>Pres>>Ins){
		first=0;
		len=int(Pres.length());
		treenode *root;
		root=buildtree(first,len-1);
		postorder(root);
		cout<<endl;
	}
	return 0;
}
