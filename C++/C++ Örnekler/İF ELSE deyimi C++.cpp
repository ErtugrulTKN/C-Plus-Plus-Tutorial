#include <iostream>
#include <cmath>


// İF ELSE deyimi.
// eğer doğruysa yap değilse diğer koşula geç.

int main(){

    int age;

    std::cout << "Lütfen Yaşınızı Giriniz";
    std::cin >> age;

   else if(age >= 40){

        std::cout << "Bu Site İçin Fazla Yaşlısınız";
    }

    else if(age > 100){

        std::cout << "Sizin Ölmüş Olmanız Gereklidir";
    }

    else{

        std::cout << "Siteye Girebilmek için 18 Yaşından Büyük Olmanız Gereklidir";

    }

     if(age >= 18){

        std::cout << "Siteye Hoşgeldiniz";
    }









    return 0;
}