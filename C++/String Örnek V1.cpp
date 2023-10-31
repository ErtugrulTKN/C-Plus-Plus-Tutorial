#include <iostream>
#include <cmath>
#include <string>


// String bir data tipidir TEXT yazımlarında kullanılır.

// int x = 10;
// int y = 20;
// int z = x+y dersek z = 30 olmuş olur integer üzerinde data oluşturduk


// string x = "10";
// string y = "20";
// string z = x+y  dersek z string data tipinde olur ve  ekrana 1020 yazılır.



int main(){

    std::string name;
    
    std::cout << "Lütfen Adınızı Giriniz:";
    std::getline(std::cin, name);

    if(name.lenght() >= 8 ){                     // Lenght string fonkisiyonu içerisindeki karakter uzunluğunu belirler.
        std::cout << "İsminiz Sekiz Karakterden fazla olamaz!!!";

    }

    else{
        std::cout << "Hoşgeldiniz" << name;
    }

    return 0;
}

int main(){
    std::string name;

    std::cout << "Lütfen Adınızı Giriniz:";
    std::getline(std::cin, name);

    if(name.empty()){
        std::cout << "Adınızı Girmediniz!!!:";     // Girdi Yapmayan Kullanıcıya Mesajı İlettik.
    }

    else{
        std::cout << "Merhaba" << name;
    }
    
    return 0;
}


int main(){
    std::string name;

    std::cout << "Lütfen Adınızı Giriniz:";
    std::getline(std::cin, name);

    name.clear();          // name.clear(); kullanıcı adını girdikten sonra içeriği (ismi) siler ekrana sadece Merhaba Yazdırır.

    std::cout << "Merhaba" << name;
    
    return 0;
}

int main(){
    std::string name;

    std::cout << "Lütfen Adınızı Giriniz:";
    std::getline(std::cin, name);

    name.append(@gmail.com);     // String Fonksiyonun içeriğine ekleme yaptık.

    std::cout << "Kullanıcı adınız " << name;
    
    return 0;
}


int main(){
    std::string name;

    std::cout << "Lütfen Adınızı Giriniz:";
    std::getline(std::cin, name);

    std::cout << name.at(0);  // name.at() ifadesi parantes içine girilen değere göre adımızın kaçıncı harfi ise onu ekrana bastırır.
                              // Boşluk ifadesini es geçer.
    return 0;
}



int main(){
    std::string name;

    std::cout << "Lütfen Adınızı Giriniz:";
    std::getline(std::cin, name);

    name.insert(0, "@");      // İfadesi ismin başına @ ibaresini yerleştirir.
                              // Girilen rakama göre hangi harfden sonra geleceği hesaplanır.

    std::cout << name;


    return 0;
}

int main(){
    std::string name;

    std::cout << "Lütfen Adınızı Giriniz:";
    std::getline(std::cin, name);

    std::cout << name.find(' ');    // ilk karakterin Sıfır (0) olduğu unutulmamalıdır.
                                    // İfadeyi bu şekilde girdiğimiz zaman İsimdeki boşluğun kaçıncı harften sonra geldiğini bulur.
    return 0;
}


int main(){
    std::string name;

    std::cout << "Lütfen Adınızı Giriniz:";
    std::getline(std::cin, name);

    name.erase(0, 3);      // 'erase' ifadesi ismin 0 harfinden sonra 3 harfi silerek ekrana bastırır.

    std::cout << name;

}




