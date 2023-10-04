#include <math.h>
#include <stdio.h>
float calculateSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);
}
int main() {
    float data[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Standard Deviation = %f", calculateSD(data));
    return 0;
}



