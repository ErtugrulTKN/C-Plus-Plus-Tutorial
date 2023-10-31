#include <iostream>

// Çıktı almak için cout << kullanırız.
// Kullanıcı girdisi almak için cin >> Kullanırız.

int main (){

    std::string name;
    int age;

    std::cout << "Senin Adın Ne ?";  //Kullanıcıya Adını sorduk
    std::cin >> name;               //Kullanıcıdan input istedik

    std::cout << "Kaç yaşındasın ?";
    std::cin >> age;

    std::cout << "Merhaba" >> name; //in put girildikten sonra Merhaba ........ şeklinde çıktıyı aldık.
    std::cout << "sen" >> age; << "Yaşındasın";

    return 0; 
}

int main (){

    std::string name;
    int age;

    std::cout << "Senin Adın ve Soyadın Ne ?";  //Kullanıcıya bütün ismini sorduk sorduk.
    std::getline(std::cin, name);               //Kullanıcıdan 'getline' fonksiyonunu kullanarak input istedik.

    std::cout << "Kaç yaşındasın ?";
    std::cin >> age;

    std::cout << "Merhaba" >> name; //in put girildikten sonra Merhaba ........ şeklinde çıktıyı aldık.
    std::cout << "sen" >> age; << "Yaşındasın";

    return 0; 
}