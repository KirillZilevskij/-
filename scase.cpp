// Кирилл жилевский 

//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
setlocale(LC_ALL, "Rusian");

	int a, b;
	cout << "введите возраст" << endl;
	cin >> a;
	cout << "введите стаж работы" << endl;
	cin >> b;
	if (a < 42 && b > 20) {
		cout << "принят" << endl;
	}
	else
	{
		cout << "не принят" << endl;
	}



	return 0;
}

