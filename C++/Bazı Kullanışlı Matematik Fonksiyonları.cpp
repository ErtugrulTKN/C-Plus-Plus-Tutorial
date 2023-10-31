#include <iostream>
#include <cmath>     // Matematik fonksiyonları için bu kütüphane gerekli.

int main(){

    double x = 3;
    double y = 4;
    double z;     // Z ye Henüz değer atamadık

    z = std::max(x, y); // Z nin X veya Y den max olanı atamasını istedik.Aynı şekilde Mİn Fonk.kullanarak MİN değeride isteyebiliriz.

    std::cout << z;  // Bu şekilde çıktı alırsak Z yi olarak kabul eder.

    return 0;

}


int main(){

    double z;   

    z = pow(2, 3)    // POW FONKSİYONU ÜST ALMAK İÇİN KULLANILIR Program çıktısı bize 2 üzeri 3 yani 8 i verir.
    std::cout << z;  // Bu şekilde çıktı alırsak Z yi olarak kabul eder.

    return 0;

}

int main(){

    double x =3.14;
    double z;   

    z = sqrt(9);     // Karekök almak için kullanırız 9un kare kökünü alarak bize 3ü verir.

    std::cout << z;
    
    z = abs(-3);

    std::cout << z;  // ABS Fonksiyonu Sıfır a olan uzaklığı yani eksi ise Pozitifini verir.

    z = round(x);   // round Fonksiyonu Yuvarlama aşağı yapmak için kullanılır.

    std::cout << x; // X i başta 3.14 olarak tanımladık round bize aşağı yuvarlayarak 3ü verir.

    z = ceil(x);    // CEİL x i yukarı yuvarlayarak bize 4 ü verir.

    std::cout << x; // Bu programın çıktısı 4 olarak ekrana verilir.

    z = floor(x);   //Aşağı yuvarlamak için kullanılır.

    std::cout << x; 

    return 0;

}