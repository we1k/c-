#include <iostream>
using namespace std;
class Number{
private:
	int x;
public:
	void show();
	Number(int a);
	int Gx();
	int maxDivisor(Number sp);
};
void Number::show(){
	cout<<x<<endl;
}
int Number::Gx(){
	return x;
}
Number::Number(int a):x(a){}
int Number::maxDivisor(Number sp){
	int i=1;
	int tep=1;
	for (i=1;i<=min(x,sp.Gx());i++){
		if ((!(x%i))&&(!(sp.Gx()%i))){
			tep=i;
		}
	}
	return tep;
}
int main (){
	int n,n1,n2;
	cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>n1>>n2;
		Number no1(n1),no2(n2);
		Number no3=no1.maxDivisor(no2);
		no3.show();
	}
}