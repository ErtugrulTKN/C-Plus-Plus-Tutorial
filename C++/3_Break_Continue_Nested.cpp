#include <iostream>
#include <string>


// BREAK CONTİNUE İfadeleri

int main(){

    for(int i = 0; i <= 20; i++){   // Bu şekilde Numaralara 20 ye kadar bastırabiliriz.
    
        if(İ == 13);{               // İf koşulunu verip break ile 13 de durdurduk.
            break;
        }
        
        std::cout << i << '\n';
    }

    return 0;

}


// NESTED (Boşluklu) Loop alma

int main(){

    for(int i = 1; i <= 10; i++){
        
        std::cout << i << ' ';   // Bu şekilde aynı satırda boşluklu olarak 10 kadar bastırır.
    }

    return 0;
}

int main(){

    for(int i = 1; i <= 10; i++){
        
        for(int j = 1; j <=10; j++){   // Bu şekilde 10arlı ve boşluklu olarak alt alta bastırırız.
            std::cout << j << ' ';

        }
        
        std::cout << '\n';
    }

    return 0;
}


int main(){

    int satır;
    int sütun;
    char sembol;

    std::cout << "Kaç tane satır istiyorsun?:";
    std::cin >> satır;

    std::cout << "Kaç tane sütun istiyorsun?:";
    std::cin >> sütun;

    std::cout << "Kullanmak isrediğiniz sembol ü giriniz:";
    std::cout >> sembol;

        for(int i = 1; i <= satır; i++){
        
            for(int j = 1; j <=sütun; j++){
            
                std::cout << sembol;
            }   
        
                std::cout << '\n';
            }

    return 0;
}

