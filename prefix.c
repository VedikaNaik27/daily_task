//prefix
#include <stdio.h>

#define SIZE 10

int hash(int key) {
    return key % SIZE;
}

int main() {
    int hashmap[SIZE] = {0};

    hashmap[hash(5)] = 100;
    hashmap[hash(15)] = 200;

    printf("%d\n", hashmap[hash(5)]);

    return 0;
}