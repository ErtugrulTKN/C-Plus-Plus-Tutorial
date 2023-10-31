#include <iostream>
#include <time.h>
#include <string>

// KULLANICI TANIMLI FONKSİYONLAR.
// C deki Void Fonksiyonu ile benzerlikte.


void doğumgünü(){         // Doğumgünü adında bir fonksiyon tanımladık doğumgünü() yazarak istediğimiz zaman çağırırız.
    
    std::cout << "Doğum Günün Kutlu Olsun.";
    
    }

int main(){

    doğumgünü();          // main fonksiyonu içerisine çağırmış olduk.

   
    return 0;
}

void doğumgünü(){
    
    std::cout << "Doğum Günün Kutlu Olsun.\n";

}



// Eğer string ismimiz olsaydı ne olurdu ???



void doğumgünü(std::string name){         // Doğumgünü adında bir fonksiyon tanımladık doğumgünü() yazarak istediğimiz zaman çağırırız.
    
    std::cout << "Doğum Günün Kutlu Olsun.";
    
    }

int main(){     // Bu fonksiyon void içerisindekini göremez, görebilmesi için std::string name olarak tanımladığımız fonksiyonu girmemiz gerekir.

    std::string name = "Ertuğrul";
    
    doğumgünü(name);          // main fonksiyonu içerisine çağırmış olduk.

   return 0;
}

void doğumgünü(std::string name){
    
    std::cout << "Doğum Günün Kutlu Olsun" << name << '\n';

}
