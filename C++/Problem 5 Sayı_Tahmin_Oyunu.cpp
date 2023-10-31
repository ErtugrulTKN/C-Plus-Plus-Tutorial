#include <iostream>
#include <string>
#include <cmath>
#include <time.h>

// Sayı Tahmin Oyunu

int main(){


    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100+ 1);

    std::cout << "****** Sayı Tahmin Oyunu ******\n";
    
    do{
        std::cout << "Lütfen 1 ile 100 arasında tahmininizi giriniz!\n";
        std::cin << guess;
        tries++;                        // Deneme Hakkını 1 den fazla kez verdik.
        
        if(guess > num){
            std::cout << "Girdiğiniz sayı 100 den büyük olmamalıdır !!!\n";
        }

        else if(guess < num){
            std::cout << "Girdiğiniz sayı 1 den küçük olmamalıdır !!!\n";
        }
        else{
            std::cout << "Doğru sayıyı girdiniz # of tries: " << tries << '\n';
        }

    }
while (guess != num);

std::cout << "*******************************\n";
    
   return 0;
} 