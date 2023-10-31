#include <iostream>

int main (){    //Bu şekilde program çalışmaz çünkü x e 2 Değer atadık fakar NAMESPACES kullanırsak ???????
    
    int x = 0;
    int x =1;

} 


#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main (){    
    
    int x = 0;
    
    std::cout << first::x; // Birinci olanı çalıştırır. 
    
    return 0;
} 