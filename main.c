/*
 * Write a program that helps the user to compute trigonometric functions.  The program:
 * Must ask the user for the desired angle in degrees.
 * Convert the degrees to radians, so it can be used in the trigonometric predefined functions.
 * Must show the different trigonometric functions of such angle: sine, cosine, tangent, secant, cosecant, cotangent.
 * Name: Óscar Rubén Gómez Ríos
 * Mail: A01411750@itesm.mx
 * Matricule Number: A01411750
 */

#include <stdio.h>
#include<ctype.h>
#include<math.h>

int funtion;
double angle,r;

void seno();
void coseno();
void tangente();
void csc();
void sec();
void cot();

int main() {
    printf("What trigonometric function would you like to perform?\n\n1)Seno\n2)Coseno\n3)Tangente\n4)Cosecante\n5)Secante\n6)Cotangente\n\n: Enter the number that corresponds to the function \n");
    scanf("%i",&funtion);
    switch (funtion){
        case 1:
            seno();
            break;
        case 2:
            coseno();
            break;
        case 3:
            tangente();
            break;
        case 4:
            csc();
            break;
        case 5:
            sec();
            break;
        case 6:
            cot();
            break;

    }

    return 0;
}

void seno(){
    printf("Enter the angle value of any of your sine in degrees: ");
    scanf("%lf",&angle);
    angle=angle*(M_PI/180);
    r=sin(angle);
    printf("\nThe sine of your introduced angle is: %lf\n",r);
}

void coseno(){
    printf("Enter the value of the angle you want your cosine to: ");
    scanf("%lf",&angle);
    angle=angle*(M_PI/180);
    r=cos(angle);
    printf("\nThe sine of your entered angle is: %lf\n",r);
}

void tangente(){
    printf( "Enter the value of the angle whose tangent you want: ");
    scanf("%lf",&angle);
    angle=angle*(M_PI/180);
    r=tan(angle);
    printf("\nThe sine of your introduced angle is: %lf\n",r);
}

void csc(){
    printf("Enter the value of the angle from which you want your cosecant: ");
    scanf("%lf",&angle);
    angle=angle*(M_PI/180);
    r=1/sin(angle);
    printf("\nThe sine of your introduced angle is: %lf\n",r);
}

void sec(){
    printf("Enter the angle value of any of your secant: ");
    scanf("%lf",&angle);
    angle=angle*(M_PI/180);
    r=1/cos(angle);
    printf("\nThe sine of your entered angle is: %lf\n",r);
}

void cot(){
    printf("Enter the value of the angle of any of its cotangents: ");
    scanf("%lf",&angle);
    angle=angle*(M_PI/180);
    r=1/tan(angle);
    printf("\nThe sine of your entered angle is: %lf\n",r);
}
