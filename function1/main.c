#include <stdio.h>
#include <stdlib.h>

//Function Declarations
void printTriangleLayer(int startrows,int endrows, int totalHeight);
void printTrunk(int trunkHeight, int totalHeight);

int main() {
    int h = 14;

    //Function Calls
    printTriangleLayer(1,5, h);   // Top layer
    printTriangleLayer(3,9, h);   // Middle layer
    printTriangleLayer(5,14, h);  // Bottom layer
    printTrunk(5, h);           // Tree trunk

    return 0;
}

//Function Definitions

//This helps us to  Print the pyramid section of the tree.
void printTriangleLayer(int startrows,int endrows, int totalHeight) {
    for (int r = startrows; r <= endrows; r++) {
        // Creates the spaces on the side
        for (int s = 1; s <= totalHeight - r; s++) {
            printf(" ");
        }
        // Prints the stars
        for (int c = 1; c <= 2 * r - 1; c++) {
            printf("*");
        }
        printf("\n");
    }
}

// Prints the rectangular trunk at the bottom
void printTrunk(int trunkHeight,int totalHeight) {
    for (int r = 1; r <= trunkHeight; r++) {
        // Creates spaces (aligned with the center)
        for (int s = 1; s <= totalHeight - 2; s++) {
            printf(" ");
        }
        // Prints a 2-star wide trunk
        for (int c = 1; c <= 3; c++) {
            printf("#");
        }
        printf("\n");
    }
}


