#include <iostream>
#include <cmath>


// ternary operatör  İF ELSE üzerinde çalışır ama koşolu vardır.
// Eğer doğruysa geçtin değilse bla bla .....  gibi çalışırlar.


int main(){        //Bu şekilde Kodu oluşturabiliriz

    int grade = 75;

    if (grade >= 60){

        std::cout << "Başarıyla Geçtin";
        }

    else {

        std::cout << "Başarısız!!!";
    } 

    return 0;
}

// Veya Bu şekilde oluşturabiliriz

int main(){
    
    int grade = 75;  // int grade yerine değer girersek ona göre sonucu verir.

    grade >= 60 ? std::cout << "Başarıyla Geçtin" : std::cout << "Başarısız!!!";

    return 0;

}


