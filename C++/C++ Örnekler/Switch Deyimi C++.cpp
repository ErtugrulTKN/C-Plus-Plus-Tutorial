#include <iostream>
#include <cmath>


// Switch deyimi İF ELSE alternatif olarak kullanılır bazı programları daha kısa yazmak mümkündür.

int main(){

    int month;
    
    std::cout << "1 den 12 ye kadar bir sayı giriniz";
    std::cin >> month;

    switch(month){

        case 1:
        std::cout << "Ocak Ayındasınız";
        break;

        case 2:
        std::cout << "Şubat Ayındasınız";
        break;

        case 3:
        std::cout << "Mart Ayındasınız";
        break:

        case 4:
        std::cout << "Nisan Ayındasiniz";
        break:

        case 5:
        std::cout << "Mayıs Ayındasiniz";
        break:

        case 6:
        std::cout << "Haziran Ayındasınız";
        break:

        case 7:
        std::cout << "Temmuz Ayındasınız";
        break:

        case 8:
        std::cout << "Ağustos Ayındasınız";
        break:

        case 9:
        std::cout << "Eylül Ayındasınız";
        break:

        case 10:
        std::cout << "Ekim Ayındasınız";
        break:
        
        case 11:
        std::cout << "Kasım Ayındasınız";
        break:

        case 12:
        std::cout << "Aralık Ayındasınız";
        break:

        default:                         //   ( DEEFAULT )Fonksiyon aralarında Uyarıda bulunmak için kullanılır.
        std::cout << "Lütfen Sadece 1-12 Arasında Numaralar Giriniz";

        return 0;

    }

}


// iKİNCİ BİR ÖRNEK DAHA YAPACAK OLURSAK !!!

int main(){

    char grade;
    std::cout << "What Letter Grade: ";
    std::cin >> grade;

    switch(grade){

        case 'A':
            std::cout << "You Did Grade!";
            break;

        case 'B':
            td::cout << "You Did Good!";
            break;

        case 'C';
            std::cout << "You Did Okay!";
            break;

        case 'D';
            std::cout << "You Did Not Do Good!";
            break;

        case 'F';
            std::cout << "You Failed!";
            break;

        default: 
            std::cout << "Please only enter in a letter gread (A-F)";


    }

return 0;
}