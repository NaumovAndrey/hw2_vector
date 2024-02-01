#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*С помощью списка инициализации задаётся вектор цен на продукты (дробными
числами). Таким же образом с помощью списка инициализации задаётся вектор покупок (в виде индексов), 
которые совершает человек. Необходимо вывести на экран итоговую стоимость покупок.
Вектор цен и вектор покупок можно задать напрямую в коде.*/

void task2() {
	std::vector<float> prices{ 2.5, 4.25, 3.0, 10.0 };
	std::vector<int> items{ 1, 1, 0, 3 };

	float summ = 0;
	for (int i = 0; i < items.size(); ++i) {
		summ += prices[items[i]];
	}
	cout << "total" << summ;
}
