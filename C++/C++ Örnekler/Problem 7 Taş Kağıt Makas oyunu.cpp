#include <iostream>
#include <ctime>


// Basic Rock Papper Scissors Game İn C++
// Basit Bir Taş Kağıt Makas Oyunu C++


char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void choiceWinner(char player, char computer);


int main() {
        
        char player;
        char computer;

        player = getUserChoice();
        std::cout << "Seçiminizi Yapın!!! \n";
        showChoice(player);

        computer = getComputerChoice();
        std::cout << "Bilgisayarın Seçimi. \n";
        showChoice(computer);

        choiceWinner(player, computer);

    return 0;
}

    char getUserChoice(){
        
        char player;
        std::cout << "Taş Kağıt Makas Oyunu. \n";
        
        do{
            
            std::cout << "Yapmak İstediğiniz İşlemi Seçiniz. \n";
            std::cout << "********************************** \n";

            std::cout << "Taş için 't'. \n";
            std::cout << "Kağıt için 'k'. \n";
            std::cout << "Makas için 'm'. \n";
        
            std::cout << player;

            
        }while(player != 't' && player != 'k' && player != 'm');

         return player;
    }
    char getComputerChoice(){

        srand(time(0));
        int num = rand() % 3 + 1;

        switch(num){
            case 1: return 't';
            case 2: return 'k';
            case 3: return 'm';
        }
        return 0;
    }
    void showChoice(char choice){

        switch(choice){
            case 't': std::cout << "Taş. \n";
            break;
            case 'k': std::cout << "Kağıt. \n";
            break;
            case 'm': std::cout << "Makas. \n";
        }

    }
    void choiceWinner(char player, char computer){

        switch(player){
            case 't':   if(computer == 't'){
                            std::cout << "Berabere. \n";
                        }
                        else if(computer == 'k'){
                            std::cout << "Kaybettiniz!!! \n";
                        }
                        else{
                            std::cout << "Tebrikler Kazandınız. \n";
                        }
                        break;
            
            case 'k':   if(computer == 't'){
                            std::cout << "Tebrikler Kazandınız. \n";
                        }
                        else if(computer == 'k'){
                            std::cout << "Berabere. \n";
                        }
                        else{
                            std::cout << "Kaybettiniz!!! \n";
                        }
                        break;

            case 'm':   if(computer == 't'){
                            std::cout << "Kaybettiniz!!! \n";
                        }
                        else if(computer == 'k'){
                            std::cout << "Tebrikler Kazandınız. \n";
                        }
                        else{
                            std::cout << "Berabere. \n";
                        }
                        break;

            }



        }
