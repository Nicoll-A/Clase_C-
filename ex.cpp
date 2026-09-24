#include <iostream>
#include <string>

bool es_parell(int n) {
	if (n % 2 == 0) return true;
	else return false;
}

int main() {
	std::string parell = "Parell";
	std::string senar = "Senar";
	using namespace std;

	bool* elMeuVector = new bool[10];
	
	for (int i = 0; i < 10; i++) {
		if (es_parell(i)) {
			elMeuVector[i] = true;
		}
		else {
			elMeuVector[i] = false;
		}
		
	}
	//variable
	int num;

	while (true) {
		
		std::cout << "Introduce un numero del 0 al 9: ";
		std::cin >> num;
		if (num < 0 || num>9) {
			std::cout << "Introduce un numero del 0 al 9: ";
		}
		else if (elMeuVector[num]) {
			std::cout << parell << endl;
		}
		else {
			std::cout << senar << endl;

		}

	}

	
}
