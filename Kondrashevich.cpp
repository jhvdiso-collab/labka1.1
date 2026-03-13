#include <iostream>
#include <cmath>

using namespace std;

double perimeter(double width, double height) {
    return 2 * (width + height);
}

double area(double width, double height) {
    return width * height;
}

double diagonal(double width, double height){
    return sqrt(width * width + height * height);
}

int main() {
    double width, height;

    cout << "Введите ширину: ";
    cin >> width;
    
    if (width <= 0) {
        cout << "Ошибка: ширина должна быть положительным числом!" << endl;
        return 1;
    }
    
    cout << "Введите высоту: ";
    cin >> height;
    
    if (height <= 0) {
        cout << "Ошибка: высота должна быть положительным числом!" << endl;
        return 1;
    }

    cout << "Периметр: " << perimeter(width, height) << endl;
    cout << "Площадь: " << area(width, height) << endl;
    cout << "Диагональ: " << diagonal(width, height) << endl;

    return 0;
}
