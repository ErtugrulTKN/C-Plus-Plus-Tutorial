#include <iostream>
#include <cmath>
#include <string>

// variable scopes.
// 2 çeşit variable scope var biri global diğeri local.
// global olan main fonksiyonu dışında. 
// local olan main fonlsiyonu içerisinde yer alır.


int global = 5;     // Global scopes

int main(){

    int global = 2; // Local Scopes

    std::cout << global << endl;

return 0;

}



// Local Variables


void print Num(myNum)

int main(){

    int mynum = 1;  // Bu bir local variable in main fonksiyon
    printNum(myNum)

    return 0;
}

void printNum(myNum){   // Eğer myNum için bir fonksiyon tanımlarsak;

    std::cout << myNum;
}


// Global Variables

int myNum = 3;   // Bu bir global Variable 

void printNum();

int main(){

    printNum();
    
    return 0;
}

void printNum(){
    std::cout << myNum;
}





