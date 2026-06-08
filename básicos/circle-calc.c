#include <stdio.h>
#include <math.h>

int main()
{
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.141592;

    printf("Escribir un radio: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    printf("Área del círculo: %.4lfcm\n", area);
    printf("Area de superficie de la esfera: %.4fcm\n", surfaceArea);
    printf("Volumen de la esfera; %.4fcm\n", volume);
}