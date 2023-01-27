// C Program WAP add two distances entered by user

#include <stdio.h>

int main() {
    int dist1Feet, dist2Feet;
    float dist1Inch, dist2Inch, sumInch;
    printf("1st distance\nEnter feet: ");
    scanf("%d", &dist1Feet);
    printf("Enter inch: ");
    scanf("%f", &dist1Inch);
    printf("2nd distance\nEnter feet: ");
    scanf("%d", &dist2Feet);
    printf("Enter inch: ");
    scanf("%f", &dist2Inch);
    sumInch = dist1Feet*12 + dist1Inch + dist2Feet*12 + dist2Inch;
    printf("Sum of distances = %d\' - %.1f\"\n", (int)(sumInch/12), sumInch - (int)(sumInch/12)*12);
    return 0;
}

