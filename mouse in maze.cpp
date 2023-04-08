//---------------------------------------------------------------------------

#include <vcl.h>
#include<stdio.h>
#pragma hdrstop

#include "Unit2.h"
#define pii pair<int,int>
#define ss second
#define ff first
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
const int N=1025;
int g[N][N];
int n,m;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

bool check(int x,int y){
	if(x<0 || x>n+1 || y>m+1 || y<0) return false;
    else return true;
}
bool NextMove(int x,int y){
	for(int i=0;i<4;i++){
		if(g[x+dx[i]*2][y+dy[i]*2]==1) return 1;
	}
	return 0;
}

void dfs(int x,int y){
	g[x][y]=0;
	while(NextMove(x,y)){
		int d=rand()%4;
		int nx=x+dx[d]*2,ny=y+dy[d]*2;
		if(g[nx][ny]==1){
			g[x+dx[d]][y+dy[d]]=0;
			dfs(nx,ny);
		}
	}
}
bool dfs2(int x,int y){
	g[x][y]=3;
	bool f=0;
	if(x==n&&y==m+1){
		g[x][y]=4;
		return 1;
	}
	bool r=0;
	for(int i=3;i>=0;i--){
		if(r) continue;
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(check(nx,ny)&&g[nx][ny]==0){
			r=dfs2(nx,ny);
			if(r) f=1;
		}
	}
	if(f){
		g[x][y]=4;
		return 1;
	}
	return 0;
}
void mp(){
	String s;
	for(int i=0;i<=n+1;i++){
		for(int j=0;j<=m+1;j++){
			s+=IntToStr(g[i][j]);
		}
		Form2->Memo2->Lines->Add(s);
		s="";
	}
}
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{

	n=StrToInt(Form2->Edit1->Text);
	m=StrToInt(Form2->Edit2->Text);

	n-=2;
	m-=2;
	/*StringGrid2->RowCount = n+2;   StringGrid2->ColCount = m+2;
	StringGrid1->RowCount = n+2;
	StringGrid1->ColCount = m+2;*/
	for(int i=0;i<=n+1;i++){
		for(int j=0;j<=m+1;j++){
			g[i][j]=1;
		}
	}
	for(int i=0;i<=n+1;i++){
		g[i][0]=2;
		g[i][m+1]=2;
	}
	for(int i=0;i<=m+1;i++){
		g[0][i]=2;
		g[n+1][i]=2;
	}
	g[1][0]=0;
    g[n][m+1]=1;
	dfs(1,0);
	String s;
	for(int i=0;i<=n+1;i++){
		for(int j=0;j<=m+1;j++){
			s+=IntToStr(g[i][j]);
		}
		Form2->Memo1->Lines->Add(s);
		s="";
	}
	//Form2->Memo1->Lines->Add("cc");

	StringGrid1->RowCount = n+2;
	StringGrid1->ColCount = m+2;
	for(int i=0;i<n+2;i++){
		for(int j=0;j<m+2;j++){
			StringGrid1->Cells[j][i] = g[i][j];
		}
	}
	StringGrid2->RowCount = n+2;   StringGrid2->ColCount = m+2;
 	for(int i=0;i<n+2;i++){
		for(int j=0;j<m+2;j++){
			StringGrid2->Cells[j][i] = g[i][j];
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	int a=dfs2(1,0);
	mp();
 	for(int i=0;i<n+2;i++){
		for(int j=0;j<m+2;j++){
			StringGrid1->Cells[j][i] = g[i][j];
		}
	}


	for(int i=0;i<n+2;i++){
		for(int j=0;j<m+2;j++){
			StringGrid2->Cells[j][i] = g[i][j];
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::StringGrid1DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State)
{
	StringGrid1->RowCount = n+2;
	StringGrid1->ColCount = m+2;
	StringGrid2->RowCount = n+2;
	StringGrid2->ColCount = m+2;
		StringGrid3->RowCount = n+2;
	StringGrid3->ColCount = m+2;
    //
	StringGrid1->Canvas->Brush->Color = clWhite;
	StringGrid1->Canvas->Font->Color = clBlue;
	StringGrid1->Canvas->FillRect(Rect);
	AnsiString text = StringGrid1->Cells[ACol][ARow];
	StringGrid1->Canvas->TextRect(Rect, Rect.Left+8, Rect.Top+8, text);
	//
	text = StringGrid2->Cells[ACol][ARow];
	StringGrid2->FixedCols=0; StringGrid2->FixedRows=0;
	StringGrid2->GridLineWidth = 0;
	StringGrid2->DefaultDrawing = false;
	int grid_size = Edit3->Text.ToInt();
	for (int i=0; i<n+2; i++) StringGrid2->RowHeights[i] = grid_size;
	for (int i=0; i<m+2; i++) StringGrid2->ColWidths[i] = grid_size;
	if (text == "2")
		StringGrid2->Canvas->Brush->Color = TColor RGB(200, 205, 155) ;
	else if(text=="1")
		StringGrid2->Canvas->Brush->Color = TColor RGB(57, 54, 70) ;
	else if(text=="3")
		StringGrid2->Canvas->Brush->Color = TColor RGB(192, 219, 234);
	else if(text=="4")
		StringGrid2->Canvas->Brush->Color = TColor RGB(210, 19, 18);
	else StringGrid2->Canvas->Brush->Color = TColor RGB(253, 244, 245);

	StringGrid2->Canvas->FillRect(Rect);
	//
	text = StringGrid3->Cells[ACol][ARow];
	StringGrid3->FixedCols=0;
	StringGrid3->FixedRows=0;
	StringGrid3->GridLineWidth = 0;
	StringGrid3->DefaultDrawing = false;
	//int grid_size = Edit3->Text.ToInt();
	for (int i=0; i<n+2; i++) StringGrid3->RowHeights[i] = grid_size;
	for (int i=0; i<m+2; i++) StringGrid3->ColWidths[i] = grid_size;
	if (text == "2")
		StringGrid3->Canvas->Brush->Color = TColor RGB(200, 205, 155) ;
	else if(text=="1")
		StringGrid3->Canvas->Brush->Color = TColor RGB(57, 54, 70) ;
	else if(text=="3")
		StringGrid3->Canvas->Brush->Color = TColor RGB(192, 219, 234);
	else if(text=="4")
		StringGrid3->Canvas->Brush->Color = TColor RGB(210, 19, 18);
	else if(text=="5")
        StringGrid3->Canvas->Brush->Color = TColor RGB(87, 108, 188);
	else StringGrid3->Canvas->Brush->Color = TColor RGB(253, 244, 245);

	StringGrid3->Canvas->FillRect(Rect);

}
//---------------------------------------------------------------------------
bool f3[N][N]={0};
void dfs3(int x,int y){
	if(f3[x][y]) return;
	f3[x][y]=1;
	if(g[x][y]==4||g[x][y]==3){
			Sleep(Form2->TrackBar1->Position);
			int k = Form2->StringGrid3->Cells[y][x].ToInt();
			Form2->StringGrid3->Cells[y][x] = 5;
			Form2->StringGrid3->Refresh();
			Form2->StringGrid3->Cells[y][x] = k;
	}
	if(x==n&&y==m+1){
		//g[x][y]=4;
			Sleep(Form2->TrackBar1->Position);
			int k = Form2->StringGrid3->Cells[y][x].ToInt();
			Form2->StringGrid3->Cells[y][x] = 5;
			Form2->StringGrid3->Refresh();
			Form2->StringGrid3->Cells[y][x] = k;
		return;
	}
	//bool r=0;
	for(int i=3;i>=0;i--){
		//if(r) continue;
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(check(nx,ny)&&(g[nx][ny]==3||g[nx][ny]==4)){
			dfs3(nx,ny);
			//if(r) f=1;
		}
	}
	return;

}



void __fastcall TForm2::Button3Click(TObject *Sender)
{   StringGrid3->RowCount = n+2;   StringGrid3->ColCount = m+2;
	for(int i=0;i<n+2;i++){
		for(int j=0;j<m+2;j++){
			StringGrid3->Cells[j][i] = g[i][j];
		}
	}

	PageControl1->ActivePage = TabSheet5;
	//if (CheckBox2) DoubleBuffered = true;
	//else DoubleBuffered = false;
	DoubleBuffered = true;
	/*for (int i=0; i<n+2; i++){
		for (int j=0; j<m+2; j++){
			Sleep(TrackBar1->Position);
			int k = StringGrid3->Cells[j][i].ToInt();
			StringGrid3->Cells[j][i] = 5;
			StringGrid3->Refresh();
			StringGrid3->Cells[j][i] = k;
		}
	}*/
	for(int i=0;i<=n+2;i++){
		for(int j=0;j<=m+2;j++){
            f3[i][j]=0;
		}
	}
	dfs3(1,0);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button4Click(TObject *Sender)
{
	FILE *fp;
	String out;

 //int m, n, i, j;
	AnsiString in;
	if (OpenDialog1->Execute()){
		in = OpenDialog1->FileName;
		//Memo1->Lines->Add(in);
		fp = fopen(in.c_str(), "r");
		if(fp==NULL) Memo1->Lines->Add("nonoon");
		//rewind(fp);
		fscanf(fp,"%d %d", &n,&m);
		Memo1->Lines->Add("(n, m)="+IntToStr(n)+", "+IntToStr(m));
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				fscanf(fp, "%d", &g[i][j]);
		fclose(fp);

		for (int i=0; i<n; i++){
			out = "";
			for (int j=0; j<m; j++) out += "  "+IntToStr(g[i][j]);
			Memo1->Lines->Add(out);
		}
	  //
	  n-=2,m-=2;
  }
}
//---------------------------------------------------------------------------
