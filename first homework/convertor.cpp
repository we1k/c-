#include <iostream>
#include <string.h>
#include <cmath>
// testing 
// i am writing this text to see if it work//
//ignore 
using namespace std;
class Number{
private:
	int a;//十进制的数
	int b;//进制数
	int s[20];
	int c;//转换后的数
public:
	void show();
	void convertor();
	Number(int x,int y);// ��˹�� 
};
Number::Number(int x,int y):a(x),b(y){}
void Number::show(){
}
void Number::convertor(){
	int i,j;
	memset(s,0,sizeof(s));
	for (i=1;a>0;i++){
		s[i]=a%b;
		a/=b;
	}
	for ( j=i-1;j>=1;j--){
		cout<<s[j];
	}
	cout<<endl;
}
int main(){
	int n,n1,n2;
	std::cin>>n;
	for (int i=0;i<n;i++){
		cin>>n1>>n2;
		Number no1(n1,n2);
		no1.convertor();
		no1.show();
	}
}
