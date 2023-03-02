/*
	Эта программа выводит на экран таблицу преобразования футов в метры

*/

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	double f; //содержит длину в футах
	double m; //содержит длину в метрах
	int counter;
	counter = 0;
	for (f = 1.0; f <= 100; f++) {
		m = f / 3.28;
		cout << f << " футов составляет " << m << " метров. \n";
		counter++;
		if (counter == 25) {
			cout << "\n";
			counter = 0;
		}
	}
	
	return 0;
}