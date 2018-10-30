#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///nama : hilmi biya ulhaq
/// hilmi memang pro sangad ea

int main()
{
    int inputan,konversi;
    float hasil;
    char pilihan[1];

    puts("================================================================================");
    puts("\t\t\tNAMA = KUN AMRIN AMANU");
    puts("\t\t\tNIM  = A11.2017.10333");
    puts("================================================================================");

    printf("\nMasukan Angka = ");
    scanf("%d",&inputan);

    printf("Dari suhu apa ke apa ?");
    printf("\n1. Celcius -> Reamur");
    printf("\n2. Celcius -> Kelvin");
    printf("\n3. Celcius -> Farenheit");
    printf("\n4. Reamur -> Celcius");
    printf("\n5. Reamur -> Kelvin");
    printf("\n6. Reamur -> Farenheit");
    printf("\n7. Farenheit -> Celcius");
    printf("\n8. Farenheit -> Kelvin");
    printf("\n9. Farenheit -> Reamur");
    printf("\n10. Kelvin-> Celcius");
    printf("\n11. Kelvin -> Farenheit");
    printf("\n12. Kelvin -> Reamur");
    printf("\n\nSilahkan Masukan Nomor Pilihan = ");
    scanf("%d",&konversi);
    switch(konversi)
    {
        case 1:
        hasil=inputan*4/5;
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°R\t||",hasil);
        printf("\n==================================\n");
        break;
        case 2:
        hasil=inputan+273;
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°K\t||",hasil);
        printf("\n==================================\n");
        break;
        case 3:
        hasil=(inputan*9/5)+32;
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°F\t||",hasil);
        printf("\n==================================\n");
        break;
        case 4:
        hasil=5/4*inputan;
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°C\t||",hasil);
        printf("\n==================================\n");
        break;
        case 5:
        hasil=inputan*1.25+273;
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°K\t||",hasil);
        printf("\n==================================\n");
        break;
        case 6:
        hasil=inputan*1.25+32;
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°F\t||",hasil);
        printf("\n==================================\n");
        break;
        case 7:
        hasil=(inputan-32)*1.8;
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°C\t||",hasil);
        printf("\n==================================\n");
        break;
        case 8:
        hasil=(inputan+459.67)*5/9;
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°K\t||",hasil);
        printf("\n==================================\n");
        break;
        case 9:
        hasil=4/9*(inputan-32);
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°R\t||",hasil);
        printf("\n==================================\n");
        break;
        case 10:
        hasil=inputan-273;
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°C\t||",hasil);
        printf("\n==================================\n");
        break;
        case 11:
        hasil=9/5*(inputan-273)+32;
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°F\t||",hasil);
        printf("\n==================================\n");
        break;
        case 12:
        hasil=4/5*(inputan-273);
        printf("==================================\n");
        printf("||\tHasilnya = %.2f°R\t||",hasil);
        printf("\n==================================\n");
        break;

    }
    return 0;
}
