#include <stdio.h>
#include <stdlib.h>

int main()
{
 float nano_m,mikro_m,mili_m,santi_m,desi_m,metre,deka_m,hekto_m,kilo_m;

    printf("uzunlugu metre cinsinden giriniz\n");
    scanf("%f",&metre);

    nano_m = metre * 1000000000.0;
    mikro_m = metre * 1000000.0;
    mili_m = metre * 1000.0;
    santi_m = metre * 100.0;
    desi_m = metre * 10.0;
    deka_m = metre / 10.0;
    hekto_m = metre / 100.0;
    kilo_m = metre / 1000.0;

    printf("nanometre cinsinden uzunluk=%.2f\n",nano_m);
    printf("mikrometre cinsinden uzunluk=%.2f\n",mikro_m);
    printf("milimetre cinsinden uzunluk=%.2f\n",mili_m);
    printf("santimetre cinsinden uzunluk=%.2f\n",santi_m);
    printf("desimetre cinsinden uzunluk=%.2f\n",desi_m);
    printf("dekametre cinsinden uzunluk=%.2f\n",deka_m);
    printf("hektometre cinsinden uzunluk=%.2f\n",hekto_m);
    printf("kilometre cinsinden uzunluk=%.2f\n",kilo_m);


    return 0;
}
