#include <stdio.h>

int main() {
    int scores[5] = {85, 92, 78, 90, 88};
    printf("--- Array Practice in C ---\n");
    for(int i = 0; i < 5; i++) {
        printf("Index %d: Value %d\n", i, scores[i]);
    }
    return 0;
}