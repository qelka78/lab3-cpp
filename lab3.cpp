//Skryg - пиR^2
//Scolca - пир^2 большая минус пир^2 маленькая



#include "lab3.h"
//void task1(); тк есть хедфайл
//void task2();
//void task3();

int main() {
	//task1();
	task2();
	//task3();
}





/*

inline double Skryg(double r) {
	return 3.14 * r * r;
}

double modul(double x) {
	if (x < 0) {
		return -x;
	}
	return x;
}
void task1() {  //функция всегда должна чтото возвращать
	double R, r;
	std::cin >> R >> r;
	if (R > 0 && r > 0) {
		double S = modul(Skryg(R) - Skryg(r));
		std::cout << S << std::endl;
	}
	
}
*/






/*
Написать программу, содержащую функцию вычисления расстояния
между двумя точками в пространстве Rn
.Данные должны передаваться в
функцию и возвращаться из нее по ссылке.Функция должна быть
расположена после функции main.
*/


//sqrt((x1-y1)*(x1-y1) + (x2-y2)*(x2-y2)* и тд)
/*
double dist(const std::vector<double>& p1, const std::vector<double>& p2) {
	double sum = 0.0;
	for (size_t i = 0; i < p1.size(); ++i) {
		double raznost = p2[i] - p1[i];
		sum += raznost * raznost;
	}
	return std::sqrt(sum);
}
void task2() {
	int n;
	std::cin >> n;
	if (n <= 0) {
		return; // вышли
	}
	std::vector<double> p1(n); // размер n
	std::vector<double> p2(n);
	for (int i = 0; i < n; ++i) { //заполн первую точку
		std::cin >> p1[i];
	}
	for (int i = 0; i < n; ++i) {  //заполн втору= точку
		std::cin >> p2[i];
	}
	// Считаем и сразу выводим результат
	double res = dist(p1, p2);
	std::cout << "rasstoyanie mejdy tochkami: " << res << std::endl;
}
*/








/*
//рекурсия
double palinom_hermite(int n, double x) {
	if (n == 0)  return 1.0; 
	if (n == 1)  return 2.0 * x; 
	return 2.0 * x * palinom_hermite(n - 1, x) - 2 * (n - 1) * palinom_hermite(n - 2, x);  // на шаг сдвигаем
}
*/

/*
//цикл
double palinom_hermite(int n, double x) {
	if (n == 0) return 1.0;
	if (n == 1) return 2.0 * x;
	double H0 = 1.0;
	double H1 = 2.0 * x;
	for (int i = 2; i <= n; ++i) {
		double H_rn = 2.0 * x * H1 - 2.0 * (i - 1) * H0;
		H0 = H1;
		H1 = H_rn;
	}
	return H1;
}
void task3() {
	int n;
	int x;
	std::cin >> n;
	std::cin >> x;
	double res = palinom_hermite(n, x);
	std::cout << res;
}
*/

