#include <iostream>
using namespace std;
class HanXin{
private:
	int x1;
	int x2;
	int x3;
	int all;
public:
	void line3(int a);
	void line5(int a);
	void line7(int a);
	void showMany();
};
void HanXin::line3(int a){
	x1=a;
}
void HanXin::line5(int a){
	x2=a;
}
void HanXin::line7(int a){
	x3=a;
}
void HanXin::showMany(){
	all=x1*70+x2*21+x3*15;
	//cout<<all<<endl;
	while (all>=0){
		all=all-105;
	}
	//cout<<all<<endl;
	all+=105;
	//cout<<all<<endl;
	if ((all>=10)&&(all<=100))
	cout<<all<<endl;
	else cout<<"Impossible"<<endl;
}
int main (){
	int n,n1,n2,n3;
	std::cin>>n;
	for (int i=0;i<n;i++){
		std::cin>>n1>>n2>>n3;
		HanXin hx;
		hx.line3(n1); //三人一排
		hx.line5(n2);
		hx.line7(n3);
		hx.showMany();
	}
	return 0;
}

