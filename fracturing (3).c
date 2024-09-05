#include <stdio.h>
#include <math.h>

// Define PI as a preprocessor directive
#define PI 3.14159

// Function prototypes
int main(int argc, char **argv);
double calculate_distance();
double calculate_perimeter();
double calculate_area();
double calculate_width();
double calculate_height();

// Implementation of main
int main(int argc, char **argv) {
    // Call each function in sequence and store their difficulty ratings
    double distance = calculate_distance(); // Get the distance between two points
    double perimeter_difficulty = calculate_perimeter(); // Calculate and get the difficulty for perimeter
    double area_difficulty = calculate_area(); // Calculate and get the difficulty for area
    double width_difficulty = calculate_width(); // Calculate and get the difficulty for width
    double height_difficulty = calculate_height(); // Calculate and get the difficulty for height

    // Print difficulty ratings
    printf("Difficulty levels:\n");
    printf("Perimeter function difficulty: %.1f\n", perimeter_difficulty);
    printf("Area function difficulty: %.1f\n", area_difficulty);
    printf("Width function difficulty: %.1f\n", width_difficulty);
    printf("Height function difficulty: %.1f\n", height_difficulty);


    return 0;
}

// Function to calculate the distance between two points
double calculate_distance() {
    double x1, y1, x2, y2, distance;

    // input#1
    printf("Enter coordinates for Point #1 (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    // input #2
    printf("Enter coordinates for Point #2 (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate the distance using the distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the entered points and the calculated distance
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance; // Return the calculated distance
}

// Function to calculate the perimeter
double calculate_perimeter() {
    double distance = calculate_distance(); // Get the distance between two points
    double perimeter = 2 * (distance + distance); 

    // Output the calculated perimeter
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    // Return the difficulty level of calculating the perimeter
    return 4.0;  
}

// Function to calculate the area
double calculate_area() {
    double distance = calculate_distance(); // Get the distance between two points
    double area = pow(distance, 2); 

    // Output the calculated area
    printf("The area of the city encompassed by your request is %.2f\n", area);

    // Return the difficulty level of calculating the area
    return 3.0;  
}

// Function to calculate the width
double calculate_width() {
    double width = calculate_distance(); // Get the distance between two points as width

    // Output the calculated width
    printf("The width of the city encompassed by your request is %.2f\n", width);

    // Return the difficulty level of calculating the width
    return 3.0;  
}

// Function to calculate the height
double calculate_height() {
    double height = calculate_distance(); // Get the distance between two points as height

    // Output the calculated height
    printf("The height of the city encompassed by your request is %.2f\n", height);

    // Return the difficulty level of calculating the height
    return 3.0;  
}