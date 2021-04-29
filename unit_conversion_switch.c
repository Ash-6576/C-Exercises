#include <stdio.h>

int main()
{
    char input;
    float kmstomiles = 0.6213710;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.3937010;
    float poundtokgs = 0.4535920;
    float inchestometers = 0.0254000;
    float second, in, first, out;

    
        printf("\n\n\nConversion Selection menu\n");
        printf("\t\t\t1.Kilometer to Miles\n\t\t\t2.Inches to foot\n\t\t\t3.Centimeter to inches\n\t\t\t4.Pound to Kilograms\n\t\t\t5. Inches to Meters.\n");
        printf("Press 'q' to quit\n");
        printf("Enter the valid option number  :");
        scanf("%c", &input);
        switch (input)
        {
        
        case '1':
            printf("Enter the number :\n");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf("%.2f Kms is equal to %.2f Miles\n\n\n", first, second);
            break;
            printf("Enter the number :\n");
            scanf("%f", &first);
            out = in*kmstomiles;
            printf("%.2f km --> %.2f miles\n", first, (first*kmstomiles));
            break;
        case '2':
            printf("Enter the number :\n");
            scanf("%f", &in);
            printf("%.2f inches --> %.2f foot\n", in, (in * inchestofoot));
            break;
        case '3':
            printf("Enter the number :\n");
            scanf("%f", &in);
            printf("%.2f cm --> %.2f inches\n", in, (in * cmstoinches));
            break;
        case '4':
            printf("Enter the number :\n");
            scanf("%f", &in);
            printf("%.2f lbs --> %.2f kgs\n", in, (in * poundtokgs));
            break;
        case '5':
            printf("Enter the number :\n");
            scanf("%f", &in);
            printf("%.2f inches --> %.2f m\n", in, (in * inchestometers));
            break;
        case 'q':
            printf("...quitting the program...");
            break;
        
        default:
            printf("No/Wrong...Input\n");
            break;
        }
    
    return 0;
}