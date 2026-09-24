#include <iostream>

using namespace std;


bool es_parell(int n) {
	if (n % 2 == 0) return true;
	else return false;
}
int main() {
	if (es_parell(20))
		cout << "Parell" << endl;
	else
		cout << "Senar" << endl;
	return 0;
}