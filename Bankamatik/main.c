#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>
int bakiye;
int parola;
void paraCekme()
{
    system("cls");
    int secim;
    int miktar;
    printf("Lutfen cekmek istediginiz miktari giriniz.\n");
    scanf("%d",&miktar);
    printf("Isleminiz gerceklestiriliyor.\n");

    printf("Lutfen bekleyiniz.\n"); sleep(2);
    if(bakiye < miktar)
    {
        printf("Para cekme islemi basarisiz.\n");
        printf("Ana menuye yonlendiriliyorsunuz.\n");
        printf("Devam etmek icin bir tusa basin.\n");
        getch();
        secim = menu();
       }


    else{
        bakiye-=miktar;
        printf("Para cekme islemi basarili\n");
        printf("Kalan bakiye %d'dir.\n",bakiye);
        printf("Devam etmek icin bir tusa basin.\n");
        getch();
    }

}
void paraYatirma()
{
    system("cls");
    int miktar;
    int secim;
    printf("Lutfen yatirmak istediginiz miktari giriniz.\n");
    scanf("%d",&miktar);
    printf("Lutfen bekleyin.Bu islem biraz zaman alabilir...\n"); sleep(5);
    if(miktar  <  0 )
    {
        printf("Negatif degerde bir para birimi yoktur.Tekrar deneyiniz.\n");
        return 0;
        secim = menu();
    }

    else{
        bakiye+=miktar;
        printf("Para yatirma islemi basarili\n");
        printf("Lutfen bekleyin..\n"); sleep(1);
        printf("Mevcut bakiye = %d TL'dir\n",bakiye);
    }
    printf("Devam etmek icin lutfen herhangi bir tusa basiniz.\n");
    getch();
    secim = menu();
}
void HavaleEFT()
{
    system("cls");
    int miktar;
    int secim;
    int musterino1;
    int musterino2;
    int musterino3;
    int aktarma1;
    extern int bakiye; // Global bakiye tanımlaması

    // Müşteri numaralarını rastgele oluşturma
    musterino1 = rand() % 100000000 + 15000;
    musterino2 = rand() % 100000000 + 15000;
    musterino3 = rand() % 100000000 + 15000;

    printf("Hosgeldiniz.\n");
    printf("\t\t\t\t\t\tHAVALE/EFT EKRANI\n\n");
    printf("\t1-MEHMET CAM   "); printf("MUSTERI NO: %d\n", musterino1);
    printf("\t2-EMIR NERGIZOGLU   "); printf("MUSTERI NO: %d\n", musterino2);
    printf("\t3-ISMAIL TOPUZ   "); printf("MUSTERI NO: %d\n", musterino3);

    printf("Havale yapacaginiz kisinin musteri no'sunu not aliniz.\n");
    sleep(2);

    printf("Lutfen havale yapmak istediginiz kisiyi seciniz.\n");
    scanf("%d", &secim);

    system("cls");

    // Seçime göre işlemler
    if (secim < 1 || secim > 3)
    {
        printf("Boyle bir kullanici bulunmamaktadir. Ana menuye donduruluyorsunuz.\n");
        sleep(1.5);
        return;
    }

    if (secim == 1) {
        printf("Lutfen MEHMET CAM'in musteri numarasini giriniz.\n");
        scanf("%d", &aktarma1);

        if (aktarma1 != musterino1) {
            printf("Musteri no hatali. Menuye yonlendiriliyorsunuz.\n");
            sleep(1.5);
            return;
        } else {
            printf("Musteri numarasi onaylandi. Eslestirme basarili. Lutfen bekleyiniz.\n");
            sleep(2);
            printf("Lutfen havale yapmak istediginiz miktari giriniz.\n");
            scanf("%d", &miktar);

            if (miktar > bakiye) {
                printf("Bakiyenizde yeteri kadar nakit bulunmamaktadir.\n");
                printf("Ana menuye yonlendiriliyorsunuz.\n");
                sleep(2);
                printf("Devam etmek icin bir tusa basin...\n");
                getch();
            } else {
                bakiye -= miktar;
                printf("Para gonderimi islemi basarili.\n");
                system("cls");
                printf("Havale islemi gerceklestirilmistir.\n");
                sleep(1.5);
                printf("Guncel bakiye: %d TL\n", bakiye);
                printf("Devam etmek icin bir tusa basin...\n");
                getch();
            }
        }
    } else if (secim == 2) {
        printf("Lutfen EMIR NERGIZOGLU'nun musteri numarasini giriniz.\n");
        scanf("%d", &aktarma1);

        if (aktarma1 != musterino2) {
            printf("Musteri no hatali. Menuye yonlendiriliyorsunuz.\n");
            sleep(1.5);
            return;
        } else {
            printf("Musteri numarasi onaylandi. Eslestirme basarili. Lutfen bekleyiniz.\n");
            sleep(2);
            printf("Lutfen havale yapmak istediginiz miktari giriniz.\n");
            scanf("%d", &miktar);

            if (miktar > bakiye) {
                printf("Bakiyenizde yeteri kadar nakit bulunmamaktadir.\n");
                printf("Ana menuye yonlendiriliyorsunuz.\n");
                sleep(2);
                printf("Devam etmek icin bir tusa basin...\n");
                getch();
            } else {
                bakiye -= miktar;
                printf("Para gonderimi islemi basarili.\n");
                system("cls");
                printf("Havale islemi gerceklestirilmistir.\n");
                sleep(1.5);
                printf("Guncel bakiye: %d TL\n", bakiye);
                printf("Devam etmek icin bir tusa basin...\n");
                getch();
            }
        }
    } else if (secim == 3) {
        printf("Lutfen ISMAIL TOPUZ'un musteri numarasini giriniz.\n");
        scanf("%d", &aktarma1);

        if (aktarma1 != musterino3) {
            printf("Musteri no hatali. Menuye yonlendiriliyorsunuz.\n");
            sleep(1.5);
            return;
        } else {
            printf("Musteri numarasi onaylandi. Eslestirme basarili. Lutfen bekleyiniz.\n");
            sleep(2);
            printf("Lutfen havale yapmak istediginiz miktari giriniz.\n");
            scanf("%d", &miktar);

            if (miktar > bakiye) {
                printf("Bakiyenizde yeteri kadar nakit bulunmamaktadir.\n");
                printf("Ana menuye yonlendiriliyorsunuz.\n");
                sleep(2);
                printf("Devam etmek icin bir tusa basin...\n");
                getch();
            } else {
                bakiye -= miktar;
                printf("Para gonderimi islemi basarili.\n");
                system("cls");
                printf("Havale islemi gerceklestirilmistir.\n");
                sleep(1.5);
                printf("Guncel bakiye: %d TL\n", bakiye);
                printf("Devam etmek icin bir tusa basin...\n");
                getch();
            }
        }
    }
}



    // Havale miktarý ve bakiye kontrolü






void faturaOdeme()
{
    system("cls");
    int kisi;
    int gecicikisi;
    int miktar;
    miktar =rand() % 100 + 50;
    kisi = rand() % 10000 + 105;
    system("cls");
    printf("Fatura no'nuz %d'dir.",kisi);
    printf("\t\t\t\t\t\t\t\t\t\t\t24.09.2024\n");
    printf("\t\t\t\t\t\tFATURA ODEME EKRANI\n\n\n");
    int secim;
    printf("\t\t1-ELEKTRIK FATURA");
    printf("\t\t2-SU FATURA");
    printf("\t\t3-DOGALGAZ FATURA");
    printf("\t\t4-TELEFON FATURA");
    printf("Lutfen odeyeceginiz fatura turunu secin (1-4)\n");scanf("%d",&secim);
    system("cls");
    if(secim <1 || secim >4)
    {
        printf("Yanlis sayi sectiniz.\nMenuye yonlendiriliyorsunuz.\n");sleep(2);
        secim = menu();
        return 0;
    }
        printf("Lutfen fatura no'nuzu giriniz.\n");
        scanf("%d",&gecicikisi);

    if(gecicikisi != kisi)
    {
       printf("Girdiginiz fatura no sistemdekiyle uyusmuyor.\nAna menuye yonlendiriliyorsunuz.\n");
        sleep(2);
        secim = menu();  // Menüye dönülüyor
        return 0;
       }
       else if(gecicikisi ==kisi){
            printf("Fatura no dogrulandi.Odeyeceginiz tutar %d TL\n",miktar);
            printf("Lutfen odemek icin tutari giriniz.\n");
            scanf("%d",&miktar);
            bakiye-=miktar;
            printf("Odeme basarili\n");
       }
       printf("Lutfen bekleyiniz.\n"); sleep(3);

       system("cls");
       printf("\t\t\t\t\t\tFaturadan sonra guncel bakiye %d\n",bakiye);
       printf("Devam etmek icin bir tusa basin.\n");
       getch();
    }
int menu(){
    system("cls");
    printf("Kullanilabilir bakiyeniz %d TL",bakiye);
    printf("\t\t\t\t\t\t\t\t\t24.09.2024\n");

    int secim;
    printf("\t\t\t\t\t\tBANKAMATIK UYGULAMASI\n\n\n");
    printf("\t\t1-PARA CEKME");
    printf("\t\t2-PARA YATIRMA");
    printf("\t\t3-HAVALE/EFT");
    printf("\t\t4-FATURA ODEME");
    printf("\t\t5-CIKIS\n\n\n\n");
    printf("Lutfen secmek istediginiz islemi giriniz (1-5)\n");
    scanf("%d",&secim);
    return secim;
}



int main(){
    system("cls");
    srand(time(0));
    bakiye = rand() % 1000 + 1000;
    parola = rand() % 10 + 3;
    int girilenParola;
    printf("Mevcut parolaniz %d'dir.\n",parola);
    printf("Parolanizi unutmayiniz sisteme aktariliyorsunuz.\n");sleep(1);
    printf("Beyefendi lutfen bekleyin\n"); sleep(1);
    printf("Lutfen parolanizi giriniz.\n");
    scanf("%d",&girilenParola);
    if(parola !=girilenParola)
    {
        printf("Girdiginiz parola gecici sifrenizle eslesmemektedir.Lutfen tekrar deneyiniz.\n");
        return 0 ;
    }
    else{
        printf("Giris basarili sisteme aktariliyorsunuz.\n");
    }
    while(1)
    {
        int secim = menu();
        switch(secim){
            case 1 : paraCekme(); break;
            case 2 : paraYatirma(); break;
            case 3 : HavaleEFT(); break;
            case 4 : faturaOdeme(); break;
            case 5 : printf("Kartinizi unutmayin beyefendi.Programdan cikiliyor.\n"); return 0;
            default:
                printf("Hatali secim yaptiniz.Ana menuye yonlendiriliyorsunuz.\n");
                break;
                sleep(2);
        }

    }
}
