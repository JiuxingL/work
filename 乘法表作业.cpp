#include <iostream>
using namespace std;
int main() {
	for (int i = 1;i < 10;i++) {
		for (int j = 1;j <= i;j++) {
			cout << j << "*" << i << "=" << j * i << "\t";
		}
		cout << endl;
	}

	int i = 1;
	while (i < 10) {
		int j = 1;
		while (j <= i) {
			cout << j << "*" << i << "=" << j * i << "\t";
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}
