#include <iostream>
using namespace std;

const int stroka = 3;  // Константа, определяющая количество строк в массиве
const int stolbec = 5;   // Константа, определяющая количество столбцов в массиве

int main() {
    setlocale(LC_ALL, "Russian");  
    double arr[stroka][stolbec];  
    double srednee[stroka] = { 0 };  

    // Ввод c клавиатуры
    cout << "Введите элементы массива " << stroka << "x" << stolbec << ":" << endl;
    for (int i = 0; i < stroka; ++i) {  // Цикл для обхода строк
        cout << "Строка " << i + 1 << ":" << endl;
        for (int j = 0; j < stolbec; ++j) {  // Цикл для обхода столбцов
            cout << "Элемент " << j + 1 << ": ";
            cin >> arr[i][j];  // Ввод элемента массива
            srednee[i] += arr[i][j];  // Добавляем значение к сумме элементов строки
        }
    }

    // Вычисление среднего арифметического 
    for (int i = 0; i < stroka; ++i) {
        srednee[i] /= stolbec;  // Делим сумму элементов строки на количество столбцов
    }

    // Вывод средних арифметических
    cout << "Средние арифметические элементов строк:" << endl;
    for (int i = 0; i < stroka; ++i) {  // Цикл для вывода средних значений по строкам
        cout << "Строка " << i + 1 << ": " << srednee[i] << endl;
    }

    return 0;
}