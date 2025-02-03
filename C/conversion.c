#include <stdio.h>
int main()
{
    int c;
    printf("Enter the case :");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("km to miles\n");
        float km, miles;
        printf("Enter km :");
        scanf("%f", &km);
        miles = km * 0.621371;
        printf("%f", miles);
        break;
    case 2:
        printf("inches to foot\n");
        float inches, foot;
        printf("Enter inches :");
        scanf("%f", &inches);
        foot = inches * 0.0833333;
        printf("%f", foot);
        break;
    case 3:
        printf("cms To Inches\n");
        float cm, inch;
        printf("Enter cm :");
        scanf("%f", &cm);
        inch = cm * 0.393701;
        printf("%f", inch);
        break;
    case 4:
        printf("Pound To Kgs\n");
        float pound, kgs;
        printf("Enter Pound :");
        scanf("%f", &pound);
        kgs = pound * 0.453592;
        printf("%f", kgs);
        break;
    case 5:
        printf("Inches To Meter\n");
        float in, meter;
        printf("Enter inches :");
        scanf("%f", &in);
        meter = in * 0.0254;
        printf("%f", meter);
        break;
    default:
        printf("No Cases matched");
        break;
    }

    return 0;
}
