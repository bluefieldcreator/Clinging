#include <stdio.h>
#include <string.h>

int main() {
    char* names[] = {"John", "Doe", "Jane", "Doe"};
    int ages[] = {25, 30, 35, 40};
    size_t array_1 = strlen(names);
    size_t array_2 = strlen(ages);
    for (int i = 0; i < (array_1 + 1); i++) {
        printf("%s is %d years old\n", names[i], ages[i]);
    }
    return 0;
}