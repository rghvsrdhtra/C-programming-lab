#include <stdio.h>

int main() {
    
    int choice;
    float radius, side, length, width;

    printf("Choose a shape:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 3) {
        printf("Invalid choice. Exiting the program.\n");
        return 1;
    }

    if (choice == 1) {
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);

        float circleArea = 3.14 * radius * radius;
        float circlePerimeter = 2 * 3.14 * radius;

        printf("\nCircle\n");
        printf("Area: %.2f\n", circleArea);
        printf("Perimeter: %.2f\n", circlePerimeter);
    } else if (choice == 2) {
        printf("Enter the side of the square: ");
        scanf("%f", &side);

        float squareArea = side * side;
        float squarePerimeter = 4 * side;

        printf("\nSquare\n");
        printf("Area: %.2f\n", squareArea);
        printf("Perimeter: %.2f\n", squarePerimeter);
    } else if (choice == 3) {
        printf("Enter the length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &width);

        float rectangleArea = length * width;
        float rectanglePerimeter = 2 * (length + width);

        printf("\nRectangle\n");
        printf("Area: %.2f\n", rectangleArea);
        printf("Perimeter: %.2f\n", rectanglePerimeter);
    }

    return 0;
}
