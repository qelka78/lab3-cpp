#include "obshie_iz_lab3.h"
int main(){
    //task1();
	//task2();
    //task3();
    //task4();
    compareSums(5);
}

/*
void task1() {
    int x = askNum("Введите число х: ");
    std::cout << x << "\n";
}
*/




/*
double ploshad(int n, double r) {
    return 0.5 * n * r * r * sin(2 * 3.14159 / n);
}
double S_circle(double r) {  //Skryg - пиR^2
    return 3.14159 * r * r;
}
void task2() {
    double r = 2.188659124;
    for (int n = 3; n <= 1000; n++) {  // увеличиваем колво углов
        std::cout << ploshad(n, r) << "\n";
    }
    std::cout << "ploshad kruga: " << S_circle(r) << "\n";
}
*/



int askNum(std::string s) {
    int x;
    while (true) {
        std::cout << s;
        if (std::cin >> x) return x;
        std::cin.clear();  // очищает ошибку
        std::cin.ignore(10000, '\n');  //удаляем
        std::cout << "\t\t\t\terror!!!!!!\n";
    }
}


int getSumProgressionF(int a, int b, int s) {
    int n = (b - a) / s + 1;  //колво
    int last = a + (n - 1) * s;  
    return (a + last) * n / 2;
}
int getSumProgressionL(int a, int b, int s) {
    int sum = 0;
    for (int i = a; i <= b; i += s) {  //шаг s
        sum += i;
    }
    return sum;
}
void task3() {
    int a = askNum("введите первое число");
    int b = askNum("введите последнее число");
    int s = askNum("введите шаг");
    int sumF = getSumProgressionF(a, b, s);
    int sumL = getSumProgressionL(a, b, s);
    std::cout << "\t\t\tформулой: " << sumF << "\n\t\t\tциклом: " << sumL << "\n";
}


void compareSums(int k) {
    srand(time(NULL));
    for (int i = 0; i < k; ++i) {
        int a = rand() % 100;
        int b = rand() % 100 + 500;
        int s = rand() % 10 + 1; 
        int sumF = getSumProgressionF(a, b, s);
        int sumL = getSumProgressionL(a, b, s);
        if (sumF != sumL) {
            std::cout << "oшибка при a=\t" << a << " b=\t" << b << " s=\t" << s << "\n";
            std::cout << "формула: " << sumF << " цикл: " << sumL << "\n";
            return; 
        }
    }
    int a = rand() % 100;
    int b = rand() % 100 + 500;
    int s = rand() % 10 + 1;
    std::cout << a <<" " << b <<" " << s << "\n";  //показываю что работает(всегда разные(ну не всегда))
    std::cout << "норм(лайк(одинаковы))\n";
}





