#include <stdio.h>
main()
{
    int fahr;
    /*
        int lower,upper,step;//are the values for fahrenheit
    
    lower=0;
    upper=1000;
    step=20;

    fahr=lower;
    
    while(fahr<=upper){
        celsius=(fahr-32)*5/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr=fahr+step;
    }*/
    printf("Temperature Conversion From Fahrenheit to Celcius\n");
    printf("Fahrenheit\tCelcius\n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

}
