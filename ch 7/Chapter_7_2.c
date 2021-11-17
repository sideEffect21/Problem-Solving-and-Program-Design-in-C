#include <stdio.h>
#include <math.h>

int get_corners(FILE *input, double x[], double y[], int max_size);
void output_corners(FILE *output, double x[], double y[], int array_size);
double polygon_area(double x[], double y[], int size);

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    double x[30];
    double y[30];
    
    int array_size;
    double area;

    array_size = get_corners(input, x, y, 20);

    output_corners(output, x, y, array_size);

    area = polygon_area(x, y, array_size);

    printf("Area of the polygon is %.3lf\n", area);

    fclose(input);
    fclose(output);

    return 0;
}

int get_corners(FILE *input, double x[], double y[], int max_size) {
    int array_size = 0;
    int i = 0;

    while(i < max_size) {
        if (fscanf(input, "%lf %lf", &x[i], &y[i]) == EOF) break;
        i++;
        array_size++;
    }

    return array_size;
}

void output_corners(FILE *output, double x[], double y[], int array_size) {
    int i;
    for (i = 0; i < array_size; i++) {
        fprintf(output, "%.3lf\t%.3lf\n", x[i], y[i]);
    }
}

double polygon_area(double x[], double y[], int size) {
    double area = 0;

    int i;
    for (i = 0; i < (size - 1); i++) {
        area += ((x[i + 1] + x[i]) * (y[i + 1] - y[i])) / 2;
    }

    if (area < 0) area = -area;

    return area;
}