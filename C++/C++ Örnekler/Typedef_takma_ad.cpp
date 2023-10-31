#include <iostream>
#include <vector>      //Typedef int, float, char gibi değişken isimlerini değiştirmeye yarar.

typedef std::vector<std::pair<std::string, int >> Fairless_t //Datamızın ismi bu kadar uzun olduğunda Kısaltma için Typedef kullan.
                                                           // Typedef imizin ismini Fairless Yaptık

#include <iostream>
#include <vector>
    
    typedef std::string Fairless_t;
    typedef int number_t;

int main (){
    
    Fairless_t firstname = "Eto";
    number_t age = 20;
    std::cout << firstname << '\n';
    std::cout << age << '\n';

     return 0;
    
}