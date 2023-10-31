#include <iostream>
#include <string>

// WHİLE Döngüsü programı döngüye alır biz durduruncaya kadar çalıştırmaya devam eder.

int main(){
    std::string name;

    while(name.empty()){  
    std::cout << "Lütfen Adınızı Giriniz!!!";
    std::getline(std::cin, name);
    }

    std::cout << "Merhaba" << name;

     return 0;
}


// DO WHİLE Döngüsü   öncelikle DO ile bir koşul belirlenir sonra WHİLE ile döngüre devam edilir.

int main(){

    int number;

        std::cout << "Pozitif Bir Sayı Giriniz:";  // DO kullanarak burdaki gereksiz satırı kaldırabiliriz.
        std::cin >> number;

        while(number < 0){    // While daki koşul doğru ise kod pozitif sayı giriniz kısmını atlar.
        
        std::cout << "Pozitif Bir Sayı Giriniz:";
        std::cin >> number;
    }

        std::cout << "Numara:"<< number;
    
    return 0;
}


// Aynı kodu Do While Kullanarak yazarsak.

int main(){

    int number;

    do{                                       // Do ile kodu blokla bu koşulu sağla
    std::cout << "Pozitif Sayı Giriniz!!!:";
    std::cin >> number;
    }

    while(number < 0);                        // Koşul doğru olunca While döngüsüne al. 

    std::cout << "Numara:" << number;
    
      return 0;
}

