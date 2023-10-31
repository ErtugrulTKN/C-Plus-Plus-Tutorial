#include <iostream>
#include <cmath>
#include <string>

// Basit bir string örneği

std::string concatstring(std::string string1, std::string string2);

int main(){

    std::string firstname = "Ertuğrul";
    std::string lastname = "TKN";
    std::string fullname = concatstrings(firstname, lastname);

    std::cout << "Merhaba" << fullname;

    return 0;
}

std::string concatstring(std::string string1, std::string string2){

    return string1 + " " + string2;

}
