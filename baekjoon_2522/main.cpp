#include <iostream>
using namespace std;
// 개선 필요성이 존재
int main(){
	int l;
	cin >> l;
	for (int i = 0; i < l; i++) {
		for (int j = l - i - 1; j > 0; j--) cout << " ";
		for (int j = 0; j <= i; j++) cout << "*";
		cout << endl;
	}
	for (int i = 0; i < l - 1; i++) {
		for (int j = 0; j <= i; j++) cout << " ";
		for (int j = l - i - 1; j > 0; j--) cout << "*";
		cout << endl;
	}
	return 0;
}