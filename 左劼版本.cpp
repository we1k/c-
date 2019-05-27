#include <iostream>
using namespace std;

const char *mask[7] = {
	"  *****      *  *****  *****  *   *  *****  *****  *****  *****  *****",
	"  *   *      *      *      *  *   *  *      *          *  *   *  *   *",
	"  *   *      *      *      *  *   *  *      *          *  *   *  *   *",
	"  *   *      *  *****  *****  *****  *****  *****      *  *****  *****",
	"  *   *      *  *          *      *      *  *   *      *  *   *      *",
	"  *   *      *  *          *      *      *  *   *      *  *   *      *",
	"  *****      *  *****  *****      *  *****  *****      *  *****  *****"
};

int main() {
	int n;
	cin>>n;
	for (int i = 0; i < n; i++) {
		int n1;
		cin>>n1;
		cout<<n1<<":\n";

		int d[10] = {0};
		int m = 0;
		if (n1 == 0) {
			m = 1;
		} else { 
			while (n1 > 0) {
				d[m++] = n1 % 10;
				n1 = n1 / 10;
			}
		} 

		for (int k = 0; k < 7; k++) {
			for(int i = m - 1; i >= 0; i--){
				if (i < m - 1) cout<<"  ";
				int f = d[i] * 7 + 2;
				for(int j = 0; j < 5; j++)
					cout<<mask[k][f + j];
			}
			cout<<endl;
		}
	}
	return 0; 
} 
