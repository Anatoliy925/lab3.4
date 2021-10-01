// Lab_03_4.cpp
// < Шоха Анатолій >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 23
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;  // вхідний аргумент
    double y;  // вхідний параметр
    double R;
    cout<<"x=";cin >>x;
    cout<<"y=";cin >>y;
    cout<<"R=";cin >>R;
    // розгалуження в повній формі
    if ((y>=-R && y<= R-sqrt(R*R - pow(x+R, 2)) && -R<=x && x<=0) ||
   (y<=R && y>= sqrt(R*R - pow(x-R, 2))-R && x>=0 && x<=R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
cin.get();
return 0; }

