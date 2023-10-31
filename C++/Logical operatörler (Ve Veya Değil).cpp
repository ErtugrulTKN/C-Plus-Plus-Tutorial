#include <iostream>
#include <cmath>


//Logical Operatörler

// && Ve anlamıda gelir iki koşulda doğruysa uygulanır.

// || Veya anlamına gelir iki koşuldan birisi doğru olmak zorundadır.

// !  Değil anlamı Taşımaktadır.

int main(){                               // && Operatörünün Basit Bir Kullanımı.

    int temp;
    std::cout << "Sıcaklığı Giriniz";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "Sıcaklık Normal";

    }

    else{
        std::cout << "Sıcaklık Yüksek";

    }
    return 0;
}


int main(){                                //  || Operatörünün Basit Bir Kullanımı.

    int temp;
    std::cout << "Sıcaklığı Giriniz";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){
        std::cout << "Sıcaklık Düşük";

    }

    else{
        std::cout << "Sıcaklık Yüksek";

    }
    return 0;
}


int main(){

    int temp;
    bool sunny = true;
    std::cout << "Sıcaklığı Giriniz";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "Sıcaklık Normal";

    }

    else{
        std::cout << "Sıcaklık Yüksek";

    }

    if(sunny == true){
        std::cout << "Hava Güneşli";
    }
    
    else{
        std::cout << "Hava Yağmurlu";       //Koşulun Değilini girmemiz lazım.
    }


    return 0;
}