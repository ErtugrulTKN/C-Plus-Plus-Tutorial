#include <iostream>


//Type Conversions  Farklı data tiplerini birbirine dönüştürerek çıktısını alabiliriz.

int main(){

    int x = 3,14;
    std::cout << x;   //Bu şekilde çıktı alırsak ekrana sadece 3 yazdırırız.

    return 0;    

}


int main(){

    double x = 3,14;
    std::cout << x;   //Bu şekilde çıktı alırsak ekrana sadece 3,14 yazdırırız.

    return 0;    

}

int main(){

    double x = (int) 3,14;
    std::cout << x;   //Bu şekilde çıktı alırsak double int e dönüşür ve ekrana 3 çıktısını alırız.

    return 0;    

}

int main(){

    char = 100;      //Bu şekilde char çıktısı alırsak bize 100 sayısının ASCII tablosundaki karşılığını verir yani 'd'
    std::cout << x;

    return 0;    

}


int main (){
    
    char = 100;
    std::cout << (char) x;   // bu şekil de bize d harfini verir

    return 0;
}


int main (){
    
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; //normalde int question bize %0 verir fakat biz onu (double) dönüştürdük ve %80 verdi

    std::cout << score << "%";

    return 0;
}

