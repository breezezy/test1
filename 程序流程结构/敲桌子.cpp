#include<iostream>
using namespace std;

int main() {
	int i = 0;
	for ( i = 1; i <= 100;i++) {
		if (i % 10 == 7 || i / 10 == 7 || i / 7 == 0) {
			cout << "敲桌子";
		}
		/*else 
		cout << i << endl;*/
	}
	for (i = 1; i <= 100;i++) {
		cout << i << endl;
	}
	return 0;
}