//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#define SWAP(x,y) {int t; t = x; x = y; y = t;}
TForm1 *Form1;
int n;
int trans(int nw){//保證每一步不超出邊界
	if(nw>=n) return 0;
	else if(nw<0) return n-1;
	else return nw;
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int owo=0;
	n=StrToInt(Form1->Edit1->Text);
	int ** square = new int * [n];
	for (int i=0; i<n; i++){
		square[i] = new int [n];
	}
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			square[i][j]=0;

	if(n%2){
		int x=n/2,y=0;
		if(Form1->RadioGroup1->ItemIndex==0) x=n/2,y=0;//leftup
		else if(Form1->RadioGroup1->ItemIndex==1) x=n-1,y=n/2;//rigthtup
		else if(Form1->RadioGroup1->ItemIndex==2) x=0,y=n/2;//leftdw
		else if(Form1->RadioGroup1->ItemIndex==3) x=n/2,y=n-1;//rightdw
		if(Form1->RadioGroup2->ItemIndex==0) x=n/2,y=0;//up
		else if(Form1->RadioGroup2->ItemIndex==1) x=n/2,y=n-1;//down
		else if(Form1->RadioGroup2->ItemIndex==2) x=n-1,y=n/2;//right
		else if(Form1->RadioGroup2->ItemIndex==3) x=0,y=n/2;//left
		square[y][x]=1;
		int cnt=1;
		while(cnt!=n*n){
			cnt++;
			//if(Form1->RadioButton1->Checked){
			if(Form1->RadioGroup1->ItemIndex==0){
				x=trans(x-1);
				y=trans(y-1);
				if(square[y][x]){
					x=trans(x+1);
					y=trans(y+1);
					y=trans(y+1);
				}
				square[y][x]=cnt;

			}
			else if(Form1->RadioGroup1->ItemIndex==1){
				x=trans(x+1);
				y=trans(y-1);
				if(square[y][x]){
					x=trans(x-1);
					y=trans(y+1);
					x=trans(x-1);
				}
				square[y][x]=cnt;
			}
			else if(Form1->RadioGroup1->ItemIndex==2){
				x=trans(x-1);
				y=trans(y+1);
				if(square[y][x]){
					x=trans(x+1);
					y=trans(y-1);
					x=trans(x+1);
				}
				square[y][x]=cnt;
			}
			else if(Form1->RadioGroup1->ItemIndex==3){
				x=trans(x+1);
				y=trans(y+1);
				if(square[y][x]){
					x=trans(x-1);
					y=trans(y-1);
					y=trans(y-1);
				}
				square[y][x]=cnt;
			}
		}

	}
	else if(n%4==0){
		 for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if((j+1) % 4 == (i+1) % 4 || ((j+1) % 4 + (i+1)) % 4 == 1) square[i][j] = (n+1-(i+1)) * n -(j+1) + 1;
				else square[i][j] = (i) * n + (j+1);
			}
		 }
	}
	else{
		int tn=n;
		n/=2;
		int r = 0;
		int c = n / 2;
		int cnt;
		for(cnt = 1; cnt <= n*n; cnt++) {
			square[r][c] = cnt;
			square[r+n][c+n] = cnt + n*n;
			square[r][c+n] = cnt + 2*n*n;
			square[r+n][c] = cnt + 3*n*n;
			if(cnt % n == 0)
			   r++;
			else {
				r = (r == 0) ? n - 1 : r - 1 ;
				c = (c == n-1) ? 0 : c + 1;
			}
		}
		n=tn;
        int m = n / 4;
		int m1 = m - 1;
		int i, j;
		for(i = 0; i < n/2; i++) {
			if(i != m)  {
				for(j = 0; j < m; j++)
					SWAP(square[i][j], square[n/2+i][j]);
				for(j = 0; j < m1; j++)
					SWAP(square[i][n-1-j], square[n/2+i][n-1-j]);
			}
			else {
				for(j = 1; j <= m; j++)
					SWAP(square[m][j], square[n/2+m][j]);
				for(j = 0; j < m1; j++)
					SWAP(square[m][n-1-j], square[n/2+m][n-1-j]);
			}
		}
	}
	//first output
	for(int i=0;i<n;i++){
		String s;
		for(int j=0;j<n;j++){
			s+=square[i][j];
			s+=" ";
			//Form1->Memo1->Add(IntToStr(square[i][j])+" ");
		}
		Form1->Memo1->Lines->Add(s);
	}
    //second output
	int len = IntToStr(n*n).Length()+3;
	String row, space ;
	for (int i = 0; i < n; i++){
		row = "";
		for (int j = 0; j < n; j++){
			space = len - IntToStr(square[i][j]).Length();
			for (int k = 0; k < space; k++) row += "  ";
			row += IntToStr(square[i][j]);
		 }
		 Form1->Memo2->Lines->Add(row);
	 }
	 //third output
	for (int i = 0; i < n; i++){
		row = "";
		int ouo=0;
		for (int j = 0; j < n; j++){
			ouo+=square[i][j];
			space = len - IntToStr(square[i][j]).Length();
			for (int k = 0; k < space; k++) row += "  ";
			row += IntToStr(square[i][j]);
		 }
		 if(!owo) owo=ouo;
		 else{
			 if(owo!=ouo) owo=-1;
         }
		 Form1->Memo3->Lines->Add(row+" － "+IntToStr(ouo));
	 }
	 row="";
	 int skew1=0,skew2=0;
	 for(int i=0;i<n;i++){

		int ouo=0;
		for(int j=0;j<n;j++){
			if(i==j) skew1+=square[i][j];
			if(i+j==n-1) skew2+=square[i][j];
			ouo+=square[j][i];
		}
		for(int k=0;k<len-IntToStr(ouo).Length()-1;k++){
			row+="  ";
		}
		if(ouo!=owo) owo=-1;
		row+=" |"+IntToStr(ouo);

	 }
     if(skew1!=owo || skew2!=owo) owo=-1;
	 Form1->Memo3->Lines->Add(row+"  ＼"+IntToStr(skew1)+"  ／"+IntToStr(skew2));
	 //fourth output
	 StringGrid1->RowCount = n;
	 StringGrid1->ColCount = n;
	 for (int i=0; i<n; i++){
		for (int j=0; j<n;j++){
			StringGrid1->Cells[j][i] = IntToStr(square[i][j]);
		}
	}
	if(owo!=-1) Form1->Memo4->Lines->Add("magic square");
	else  Form1->Memo4->Lines->Add("not a magic square");
	for (int i=0; i<n; i++){
		delete [] square[i];
	}
	delete [] square;
}
//---------------------------------------------------------------------------
