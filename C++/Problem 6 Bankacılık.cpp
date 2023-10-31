#include <iostream>
#include <iomanip>    // << işleçlerini kullanarak >> dizeleri akışlara ve akışlardan kolayca yuvarlamanızı sağlayan bir manipülatör.

// Bankacılık Programı


void showBalance(double balance);
double deposit();
double witdhraw(double balance);

int main(){

    double balance = 1 500 000;
    int choice = 0;
    
    do{
        std::cout << "*******************************\n";
        std::cout << "Lütfen yapılcak işlemi seçiniz.\n";
        std::cout << "*******************************\n";

        std::cout << "1. Miktarı göster.\n";
        std::cout << "2. Para yatır.\n";
        std::cout << "3. Para çek.\n";
        std::cout << "4. Exit.\n";

        std::cin >> choice;

        std::cin.clear();    
        fflush(stdin);
    
    switch(choice){

        case 1: showBalance(balance);
                break;
        case 2: balance += deposit();
                showBalance(balance);
                break;
        case 3: balance -= witdhraw(balance);
                showBalance(balance);
                break;
        case 4: std::cout << "İyi günler dileriz.\n";
                break;

        default: std::cout << "Geçersiz İşlem.\n";
    }
    }
    while(choice != 4);
    
        return 0;
}
void showBalance(double balance){
                std::cout << "Hessabınızdaki miktar: $" << std::setprecision(2) << std::fixed << balance '\n';
                // Bu ifade cent(kuruş) kısmı için.


}
double deposit(){

        double amount = 0;
                std::cout << "Yatırmak istediğiniz miktarı giriniz.\n";
                std::cin << amount;           
        
        if(amount > 0){
        return amount;
        }
        
        else{
                std::cout << "Lütfen geçerli bir miktar giriniz.\n";
        return amount;
        }

}
double witdhraw(double balance){
        
        double amount = 0;
                std::cout << "Çekmek istediğiniz miktarı giriniz.\n";
                std::cin >> amount;
        
        if(amount > balance){
                std::cout << "Yetersiz Bakiye.\n";
        return 0;
        }

        else if(amount < 0){
                std::cout << "Lütfen geçerli bir miktar giriniz.\n";
        return 0; 
        }
        
        else{
        return amount;
        }
        
}



