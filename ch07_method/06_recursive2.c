#include <stdio.h>


void fruit(int count);


void fruit(int count) {  
    printf("apple");

    if(count == 3) {
        return;
    }

        fruit(count + 1);  
}

int main() {
    fruit(1);
}