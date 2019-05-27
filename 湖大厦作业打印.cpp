#include <iostream>
//#include <cstring>
using namespace std;
class DotArray{
public:
	virtual void showrow(int i) {}
};
class DA0:public DotArray{
public:
	virtual void showrow(int i) ;
};
class DA1:public DotArray{
public:
	virtual void showrow(int i) ;
};
class DA2:public DotArray{
public:
	virtual void showrow(int i) ;	
};
class DA3:public DotArray{
public:
	virtual void showrow(int i) ;
};
class DA4:public DotArray{
public:
	virtual void showrow(int i) ;
};
class DA5:public DotArray{
public:
	virtual void showrow(int i) ;

};
class DA6:public DotArray{
public:
	virtual void showrow(int i) ;
};
class DA7:public DotArray{
public:
	virtual void showrow(int i) ;
};
class DA8:public DotArray{
public:
	virtual void showrow(int i) ;
};
class DA9:public DotArray{
public:
	virtual void showrow(int i) ;
};
void DA0::showrow(int i) {
	if(i == 1||i == 7)cout<<"*****  ";
	else cout<<"*   *  ";
}
void DA1::showrow(int i) {
	cout<<"    *  ";
}
void DA2::showrow(int i) {
	if(i == 1||i == 7||i == 4)cout<<"*****  ";
	else if (i == 2 || i ==3 )cout<<"    *  ";
	else if (i == 5 || i ==6 )cout<<"*      ";
}
void DA3::showrow(int i) {
	if(i == 1||i == 7||i == 4)cout<<"*****  ";
	else cout<<"    *  ";
}
void DA4::showrow(int i) {
	if(i == 4)cout<<"*****  ";
	else if (i == 5 || i ==6 || i == 7)cout<<"    *  ";
	else cout<<"*   *  ";
}
void DA5::showrow(int i) {
	if(i == 1||i == 7||i == 4)cout<<"*****  ";
	else if (i == 2 || i ==3 )cout<<"*      ";
	else if (i == 5 || i ==6 )cout<<"    *  ";
}
void DA6::showrow(int i) {
	if(i == 1||i == 7||i == 4)cout<<"*****  ";
	else if (i == 2 || i ==3 )cout<<"*      ";
	else if (i == 5 || i ==6 )cout<<"*   *  ";
}
void DA7::showrow(int i) {
	if(i == 1)cout<<"*****  ";
	else cout<<"    *  ";
}
void DA8::showrow(int i) {
	if(i == 1||i == 7||i == 4)cout<<"*****  ";
	else if (i == 2 || i ==3 )cout<<"*   *  ";
	else if (i == 5 || i ==6 )cout<<"*   *  ";
}
void DA9::showrow(int i) {
	if(i == 1||i == 7||i == 4)cout<<"*****  ";
	else if (i == 2 || i ==3 )cout<<"*   *  ";
	else if (i == 5 || i ==6 )cout<<"    *  ";
}
class DAPrinter{
private:
	int num;
	int a[10];//从小到大 
	int w;
	DotArray *das[10];//从小到大 
public:
	DAPrinter(int a):num(a){}
	void split(); //done
	void print();	
};
void DAPrinter::split(){
//	memset(a,0,sizeof(a));
	int tep=num, i = 0;
	if (!tep) {DA0 X;das[i++] = &X;}
	while(tep){
		a[i]=tep%10;
		if (a[i]==0) {DotArray* X = new DA0;das[i++] = X;}
		else if (a[i]==1) {DotArray* X = new DA1;das[i++] = X;}
		else if (a[i]==2) {DotArray* X = new DA2;das[i++] = X;}
		else if (a[i]==3) {DotArray* X = new DA3;das[i++] = X;}
		else if (a[i]==4) {DotArray* X = new DA4;das[i++] = X;}
		else if (a[i]==5) {DotArray* X = new DA5;das[i++] = X;}
		else if (a[i]==6) {DotArray* X = new DA6;das[i++] = X;}
		else if (a[i]==7) {DotArray* X = new DA7;das[i++] = X;}
		else if (a[i]==8) {DotArray* X = new DA8;das[i++] = X;}
		else if (a[i]==9) {DotArray* X = new DA9;das[i++] = X;}
		tep=tep/10;
	}//i 为位数
	w = i; 
//	das[1]->showrow(1);
//	cout<<w<<endl;
//	cout<<w-1<<endl;
//	int a , b ;
//	for (a = 1 ; a <= 7; a++){//行 
//		for (b=w-1;b>=0;b--){
//			(*das[b]).showrow(a);
//		}
//		cout<<endl;
//	}
}

void DAPrinter::print(){
//	this->das[1]->showrow(1);
//	system("PAUSE");
	int i , j ;
	for (i = 1 ; i <= 7; i++){//行 
		for (j=w-1;j>=0;j--){
			das[j]->showrow(i);
//			system("PAUSE");
		}
		cout<<endl;
	}
}
int main (){
	int n,n1;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1;
        cout<<n1<<":\n";
        DAPrinter p(n1);
        p.split();
        p.print();
    }

    return 0;
}
