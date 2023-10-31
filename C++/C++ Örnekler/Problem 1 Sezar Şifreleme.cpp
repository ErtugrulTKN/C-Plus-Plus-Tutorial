#include <iostream>


// Sezar Şifreleme Örneği C++


using namespace std;

char *sezar(const char *kelime,int anahtar){
    char alfabe[]="abcdefghijklmnoprstuvyz";
    char *sifreliKelime;
    sifreliKelime=new char[strlen(kelime)];
    for(int i=0;i<strlen(kelime);i++)
        for(int j=0;j<strlen(alfabe);j++)
            if(kelime[i]==alfabe[j])
                sifreliKelime[i]=alfabe[(j+anahtar)%23];  
            else if(isspace(kelime[i]))
                sifreliKelime[i]=' '; 
    return sifreliKelime;
}

main (){
    char kelime[20];
    char *sifreliKelime=NULL;
    int anahtar;
    cout<<"Sifrelencek kelimeyi kucuk harf olarak giriniz:";
    gets(kelime);
    cout<<"Kaydirma katsayisini giriniz:";
    cin>>anahtar;
    sifreliKelime=sezar(kelime,anahtar);
    cout<<"Sifrelenmis Kelime:"<<sifreliKelime<<endl;
    delete sifreliKelime;
    system("pause");
    return 0;
}