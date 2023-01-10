#include<bits/stdc++.h>
#include<windows.h> 
#include<conio.h>
using namespace std;
int area;
string selection[15];
int select_now;
void sl_helper(int n,int k);//·ÀÖ¹Õ»Òç³ö 
void start();
void colorout(short x,string a)
{
  	if(x>=0 && x<=15)
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
  	else 
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<a;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    return;
}
void getmode(){
	int n;
	cout<<"ÇëÊäÈë¾ØÕó±ß³¤£º\n";
	cin>>n;
	area=n;
} 
void about(){
	system("cls");
	cout<<"version:V0.1-alpha\nprogramer:yzkadbq(former:Arthur_zhang)\nteam:AFoi studio.";
	getch();
	start();
}
void upd(int n,int k){
	system("cls");
	for(int i=1;i<=n;i++){
		if(i!=k){
			cout<<selection[i]<<"\n";
		}else{
			colorout(9,selection[i]);
			cout<<"\n";
		}
	}
}
int select(int n,int k){
	select_now=k;
	int now=k;
	while(true){
		char c=getch();
		if(c=='w'){
			k--;
			upd(n,k);
		}else if(c=='s'){
			k++;
			upd(n,k);
		}else if(c=='p'){
			return k;
		}
	}
}
void game();
void showrule();
void start(){
	selection[1]="start-singleplayer";
	selection[2]="game rules";
	selection[3]="about";
	selection[4]="quit";
	upd(4,1);
	int res=select(4,1);
	switch(res){
		//case 1: game();
		//case 2: showrule();
		case 3: about();
		case 4: exit(0);
	}
}
int main(){
	start();
	return 0;
}

