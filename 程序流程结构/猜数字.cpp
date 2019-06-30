#include<iostream>
#include<ctime>
using namespace std;

int main1() {
	int num, max = 10,count = 0;
	srand((unsigned int)time(NULL));
	int r = rand() % 100 + 1;
	while ( count < max ) {
		cin >> num;
		count++;
		if (num == r) {
			
			cout << "恭喜你，猜了"<<count<<"次就猜对了" << endl;
			break;
		}
		else if (num < r) {
			cout << "猜小了" << endl;
		}
		else {
			cout << "猜大了" << endl;
		}
	}
	if (count == max) {
		cout << "很遗憾，" << count << "次机会用完了，你没猜对" << endl;
	}
	

	return 0;
}