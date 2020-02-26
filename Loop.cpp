#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i < 9; i++) {
		if (i == 0 || i == 2) {
			cout << i << endl;
		} else {
			cout << "GO" << i << endl;
		}
	}

	return 0;
}