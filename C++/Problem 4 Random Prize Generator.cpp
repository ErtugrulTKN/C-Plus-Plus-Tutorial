#include <iostream>
#include <string>
#include <cmath>
#include <time.h>

                        //Random Prize Generator


int main(){

    srand(time(0));
    
    int randNum = rand() %5 + 1;
    
    switch(randNum);{
        case 1; std::cout << "Bir Adet Sticker Kazandınız.\n";
                break;

        case 2; std::cout << "Bir Adet TeddyBear Kazandınız.\n";
                break;

        case 3; std::cout << "Bir Adet Oyuncak Araba Kazandınız.\n";
                break;

        case 4; std::cout << "Bir Adet Toy Gun Kazandınız.\n";
                break;

        case 5; std::cout << "Bir Adet Barbie Kazandınız.\n";
                break;
                
        }

    return 0;
} 