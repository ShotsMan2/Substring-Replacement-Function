#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void degisim(char kaynak[],char eski[],char yeni[],char sonuc[]){
    int i=0,j=0,k=0,uygunluk;

    int eskiuzunluk=strlen(eski);
    int yeniuzunluk=strlen(yeni);

    while(kaynak[i]!='\0'){
        uygunluk=1;

        for(k=0;k<eskiuzunluk;k++){
            if(kaynak[i+k]!=eski[k]){
                uygunluk=0;
                break;
            }
        }

        if(uygunluk==1){
            for(k=0;k<yeniuzunluk;k++){
                sonuc[j]=yeni[k];
                j++;
            }
            i=i+eskiuzunluk;
        }
        else{
            sonuc[j]=kaynak[i];
            i++;
            j++;
        }
    }

    sonuc[j]='\0';



}

int main()
{
        char metin[200] = "okula gidilir okul zamani okulda";
    char eski_kelime[] = "okul";
    char yeni_kelime[] = "mescid";

    // Sonuc icin bos bir dizi (yeterince buyuk olmali)
    char yeni_metin[200];

    // Fonksiyonu cagir (Dizileri fonksiyona yolluyoruz)
    degisim(metin, eski_kelime, yeni_kelime, yeni_metin);

    // Ekrana yazdir
    printf("Eski Hali : %s\n", metin);
    printf("Yeni Hali : %s\n", yeni_metin);

}
