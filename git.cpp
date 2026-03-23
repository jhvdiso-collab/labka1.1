#include <iostream>

using namespace std;

const double PI = 3.141592653589793;

double lenght(double r) {
    return 2 * PI * r;
}

double Area(double r) {
    return PI * r * r;
}

double sector(double r, double angle) {
    return (PI * r * r * angle) / 360;
}

int main() {
    double r, angle;
    
    cout << "Введите радиус: ";
    cin >> r;

    if (r < 0) {
        cout << "Ошибка: радиус не может быть отрицательным" << endl;
        return 1;
    }
    
    cout << "Длина окружности: " << lenght(r) << endl;
	cout <<"Hello world"<<endl;
    cout << "Площадь круга: " << Area(r) << endl;
    
    cout << "Введите угол сектора (в градусах): ";
    cin >> angle;

    if (angle < 0) {
        cout << "Ошибка: угол не может быть отрицательным" << endl;
        return 1;
    }
    
    cout << "Площадь сектора: " << sector(r, angle) << endl;
    
    return 0;
}
