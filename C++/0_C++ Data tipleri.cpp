// C deki data tiplerine benzer tipler C++ da mevcut

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false

#include <iostream>

int main (){
    
    İnteger //Doğal Sayı 4 Byte
    int age = 7;
    int year = 2023;
    int days = 20;

    Double  //Virgüllü Doğal Sayılar 8 byte
    double price = 10.99;
    double temprature =36.5;

    std::cout << price; //Örnek olarak verilebilir

    Char //Tek Karakter A b C d $ gibi 1 byte
    char grade = 'A';
    char initial = 'B';
    char dollarsing = '$';

    std::cout << initial;

    Boolean // Doğru veya Yanlış ifadesi 1 byte
    bool student = true;
    bool power = false;

    String // Text için kullanılır Kelime Cğmle gibi ifadeler
    
    std::string name = "Ertuğrul";
    std::cout << name; //Ekrana Bastırırız

    std::string lastname = "Tekin";
    std::cout << lastname;

    std::cout << "Merhaba" << name << '\n';  //Merhabadan sonra Name i yani Ertuğrul u bastırır Satır atlatır.
    std::Cout << "Senin Yaşın" << age << ;   // Senin Yaşın 7 Bastırır.

    return 0;

}
