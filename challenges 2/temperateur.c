#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    float TC, TF;
    printf("entrer la température en celsius: ");
    scanf("%f", &TC);
    TF = (TC * 1.8) + 32;
    printf("%.2f celsius= %.2f fahrenteit", TC, TF);
    return 0;
}
