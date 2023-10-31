#include <iostream>
#include <cmath>

//Üçgenin Hipotenüsünü Hesaplayan Basit Bir Program

int main(){

    double a;
    double b;
    double c;

    std::cout << "A değerini giriniz";
    std::cin >> a;

    std::cout << "B değerini giriniz";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    
    std::cout << "Hipotenüsün değeri" << c;

    return 0;
}
