#include <stdio.h>
#include <math.h>

void calculate_rectangle_information(double length, double width, double *area, double *perimeter, double *diagonal) {
    *area = length * width;
    *perimeter = 2*length + 2*width;
    *diagonal = pow(length*length + width*width, 1./2);
}

int main() {
    double length, width, area, perimeter, diagonal;

    printf("Enter length: ");
    scanf("%lf", &length);
    printf("Enter width: ");
    scanf("%lf", &width);

    calculate_rectangle_information(length, width, &area, &perimeter, &diagonal);

    printf("Area: %.2lf\n", area);
    printf("Perimeter: %.2lf\n", perimeter);
    printf("Diagonal: %.2lf\n", diagonal);
}
