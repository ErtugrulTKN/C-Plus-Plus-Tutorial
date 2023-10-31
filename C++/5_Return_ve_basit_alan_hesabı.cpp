#include <iostream>
#include <cmath>


// Return keyword Fonksiyon kode bittisini işaret eder.


void square(double lenght);  // Basit bir alan hesabı

int main(){

    double lenght = 5.0;    // Bir kenar 5 olsun

return 0;
}

void square(double lenght){
    
    double result = lenght * lenght;  
    
return result;  // Fonksiyon sonunda result a döndüğümüz için fonksiyonda void ten double a dönmeli. sonraki koda bakalım => 
}



double square(double lenght);  // Basit bir alan hesabı

int main(){

    double lenght = 5.0;    // Bir kenar 5 olsun
    double area = square(lenght);

    std::cout << "area:" << area << "cm^2\n";

return 0;
}

double square(double lenght){
    
    double result = lenght * lenght;  
    
return result;
}


// Küp hesabınıda eklersek;


double square(double lenght);  // Basit bir alan hesabı
double cube(double lenght);    // Küp için

int main(){

    double lenght = 5.0;    // Bir kenar 5 olsun
    double area = square(lenght);
    double volume = cube(lenght);

    std::cout << "area:" << area << "cm^2\n";
    std::cout << "volume:" << volume << "cm^3\n";

return 0;
}

double square(double lenght){
    
    double result = lenght * lenght;  
    
return result;
}
double cube(double lenght){
    
    double result = lenght * lenght * lenght;     // Küp için  
    
return result;
}