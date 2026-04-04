//a structure Distance to store distance in kilometer, meter & centimeter. Create an array of Distance type to store 5 Distance variables. Find the longest distance using pointers.
#include <stdio.h>

struct Distance {
    int km, m, cm;
};

main() {
    struct Distance d[5];
    struct Distance *ptr = d;
    int max_idx = 0;
    long max_cm = -1;
    int i;
    for(i = 0; i < 5; i++) 
	{
        printf("Enter km, m, cm for distance %d: ", i + 1);
        scanf("%d %d %d", &(ptr + i)->km, &(ptr + i)->m, &(ptr + i)->cm);
        
        long total_cm = (long)(ptr + i)->km * 100000 + (ptr + i)->m * 100 + (ptr + i)->cm;
        if(total_cm > max_cm) {
            max_cm = total_cm;
            max_idx = i;
        }
    }

    printf("\nLongest Distance: %d km, %d m, %d cm\n", d[max_idx].km, d[max_idx].m, d[max_idx].cm);
    return 0;
}
