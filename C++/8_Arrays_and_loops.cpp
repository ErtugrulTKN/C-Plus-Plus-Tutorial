#include <iostream>
#include <string>
#include <iomanip>

// ARRAYS (Diziler)


int main()[

    std::string car = "corvette";  // Bu şekilde tanımladığımız string fonksiyonunu dizilere dönüştürelim.
    std::cout << car;
    return 0;
]


int main(){

    std::string car[] = {"corvette"};  // Bu şekilde ifadeyi diziye dönüştürmüş olduk.
    std::cout << car;                  // car bizim dizimiz ve içerisinde "corvette" yi tutuyor.
    return 0;
}

int main(){

    std::string car[] = {"corvette", "mustang", "camry"};  //Bu şekilde çıktı almamız hata verir çünkü index numaralararını eklememiz lazım.
    std::cout << car;
    return 0;
}

int main(){

    std::string car[] = {"corvette", "mustang", "camry"};
    std::cout << car[0];      // 0 ile dizimizin ilk elemanını belirtmiş olduk program çıktısı corvette olacaktır.
    return 0;
}

int main(){

    std::string car[] = {"corvette", "mustang", "camry"};
    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';    // Programımızın çıktısı corvette new line mustang new line camry olacaktır.
    std::cout << car[2] << '\n';
    return 0;
}

int main(){

    std::string car[] = {"corvette", "mustang", "camry", 1};  // Dizilerimizin hepsi aynı data tipinde olmalıdır.
    std::cout << car[0] << '\n';                              // integer tipindeki 1 çıktısını vermez hata verir.
    std::cout << car[1] << '\n';    
    std::cout << car[2] << '\n';
    return 0;
}

int main(){

    std::string cars[3];  // Bu şekildede diziyi tanımlayıp büyüklüğünü belirleyip =>
    
    cars[0] = "camaro";   // daha sonra değişkenleri tanımlaya biliriz.        
    cars[1] = "mustang";
    cars[2] = "camry";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
    return 0;
}


//Örnek

int main(){

    double prices[4] = {5.00, 7.50, 9.99, 15.00};
    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}



#include <iostream>
#include <string>
#include <iomanip>   // std::setprecision(2) ifadesi için

int main(){

    double prices[4] = {5.00, 7.50, 9.99, 15.15369};
    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << std::setprecision(4) << prices[3] << '\n';   // Ekrana 15.15 çıktısını verir.

    return 0;
}




// Sizeof()

#include <iostream>
#include <string>

// sizeof() OPERATÖRÜ
// Dizi içerisindeki elamanların büyüklüğünü (byte) bulmak için kullanırız.


int myNumbers[5] = {10, 20, 30, 40, 50};// int tipindeki data 4 byte yer kaplar   
                                        // 5 elemanlı int dizisi 4*5=20 byte yer kaplar.
cout << sizeof(myNumbers);              // Bu fonksiyon ile öğrenmiş oluruz.



int main(){

    double gpa = 2.5;
    std::cout << sizeof(gpa) << "bytes.\n";    //double data sı 8 byte yer kaplar.
    return 0;
}

int main(){

    std::string name = "Eto\n";
    std::cout << sizeof(name) << "bytes.\n";    // string data sı 32 byte yer kaplar.
    return 0;
}

int main(){

    std::string name = "Merhaba Eto  nasılsın? \n";
    std::cout << sizeof(name) << "bytes.\n";    // string data sı gene 32 byte yer kaplar.
    return 0;
}

int main(){

    char grades[] = {'A', 'a', 'B', 'b', 'C', 'c'};
    std::cout << sizeof(grades) << "bytes.\n";    // char data sı bu programda 6 byte yer kaplar.
    return 0;
}



// Diziler üzerinde Loop lama / Diziyi Loop a alma.


int main(){

    std::string << studetns[] = {"Ali", "Veli", "Arda"};  // Bu şekilde dizileri bölebiliriz veya =>

    std::cout << students[0] << '\n';
    std::cout << students[1] << '\n';
    std::cout << students[2] << '\n';

    return 0;
}


int main(){

    std::string students[] = {"Ali", "Veli", "Arda"};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }

    return 0;
}


// Foreach Loop (Her Data elamanı üzerinde ayrı ayrı loop alma)

int main(){

    std::string students[] = {"Ali", "Veli", "Arda"};   // Bu loop u daha kolay şekilde loop a alabiliriz.

    for(std::string student : students){
        std::cout << student << '\n';
    }
    return 0;
}


// Pass Array to a function.   (TEKRAR ET!!!)


double getTotal(double prices[], int size );  // Main fonksiyon yapalım

int main(){

    double prices[] = {49.99, 15,05, 75, 9.99};    //Bu fiyatları bulan fonksiyonu yazalım.
    int size = sizeof(prices)/sizeof(prices [0]);
    double total = getTotal(prices, size);         // getTotal(prices[]) koymamıza gerek yok. ARRAY ismini geçmemiz yeterli.

    std::cout << "$" << total;

    return 0;
}

double getTotal(double prices[], int size){

    double total = 0;

    for(int i = 0; i < size; i++){      // For Loop u kullanarak itare edelim.
        total += prices[i];

    return total;

    }
}



// Dizinin elemanlarının o dizinin kaçıncı elamanı olduğunu bulmak yani elemanın index ini (sırası) bulmak.


#include <iostream>
#include <string>

int searchArray(int array[], int size, int element);

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    int index;
    int myNum;

    std::cout << "Aramak istediğiniz elemanı giriniz." << '\n';
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1){

        std::cout << myNum << "is at index" << index;
    }
    else{

        std::cout << myNum << "Dizi içerisinde yer almamaktadır.";
    }
    return 0;
}

int searchArray(int array[], int size, int element){           // Main fonksiyon dışında tanımladık.

    for(int i = 0; i < size; i++){
    
        if(array[i] == element){
            return i;

        }

    }
    return -1;

}



// Aynı örneği string datası için yapalım.


#include <iostream>
#include <string>

int searchArray(std::string array[], int size, std::string element);

int main(){

    std::string foods[] = {"Pizza", "Hamburger", "Hotdog"}; //Pizza = index 0, Hamburger = index 1, Hotdog = 2 
    int size = sizeof(foods)/sizeof(foods[0]);

    int index;
    std::string myFoods;

    std::cout << "Aramak istediğiniz elemanı giriniz." << '\n';
    std::getline(std::cin, myFoods);

    index = searchArray(foods, size, myFoods);

    if(index != -1){

        std::cout << myFoods << "is at index" << index;
    }
    else{

        std::cout << myFoods << "Dizi içerisinde yer almamaktadır.";
    }
    return 0;
}

int searchArray(std::string array[], int size, std::string element){           // Main fonksiyon dışında tanımladık.

    for(int i = 0; i < size; i++){
    
        if(array[i] == element){
            return i;

        }

    }
    return -1;

}



// Dizilerde Sıralama (Sort an Array)



#include <iostream>
#include <string>

void sort(int array[], int size);  // Tanımladığımız sort fonksiyonu program öncesinde belirttik.

int main(){

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array){
        std::cout << element << " ";
    }

    return 0;
}

// Şimdi bu dağınıklığı düzeltecek sort fonksiyonunu yapalım =>>>

void sort(int array[], int size){

    int temp;    //variableleri swaplamak için

    for(int i = 0; i < size - 1; i++);{             // (size - 1) son elemanı çevirmemize gerek olmadığından.
        for(int j = 0; j < size - i - 1; j++);{
            if(array[j] > array[j + 1]){            // Soldaki eleman sağdaki elemandan büyükse yer değiştiren ifade.
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

            }
        
        }

    }

}



// Fill() Function.



#include <iostream>
#include <string>







