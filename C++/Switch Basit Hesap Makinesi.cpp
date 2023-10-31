#include <iostream>
#include <cmath>


int main()[

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********** CALCULATOR ***********/n";
    
    std::cout << "Yapmak İstediğiniz İşlemi Giriniz (+ - * /)";
    std::cin >> op;


    std::cout << "Giriniz #1: ";
    std::cin >> num1;

    std::cout << "Giriniz #2: ";
    std::cin >> num2;

    switch(op){
        case '+';
            result = num1 + num2;
                std::cout << "result: " << result << '\n';
            break;
        case '-';
            result = num1 - num2;
                std::cout << "result: " << result << '\n';
            break;
        case '*';
            result = num1 * num2;
                std::cout << "result: " << result << '\n';
            break;
        case '/';
            result = num1 / num2;
                std::cout << "result: " << result << '\n';
            break;
                default:
                    std::cout << "That Wasn't a Valid response\n";
                break;
            
            
            

    }



    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    std::cout << "*********************************/n";

    return 0;
]