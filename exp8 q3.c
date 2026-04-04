//a function swapDistance() for the structure defined in question no.2, to swap the content of two Distance variables. 
#include <stdio.h>

struct Distance {
    int km, m, cm;
};
void swapdistance(struct Distance *d1,struct Distance *d2);
main() {
    struct Distance d[5];
    int max_idx = 0;
    long max_cm = -1;
    int i;
    for(i = 0; i < 5; i++) 
	{
        printf("Enter km, m, cm for distance %d: ", i + 1);
        scanf("%d %d %d", &d[i].km, &d[i].m, &d[i].cm);
        
        long total_cm = (long)d[i].km * 100000 + d[i].m * 100 + d[i].cm;
        if(total_cm > max_cm) {
            max_cm = total_cm;
            max_idx = i;
        }
    }

    printf("\nLongest Distance: %d km, %d m, %d cm\n", d[max_idx].km, d[max_idx].m, d[max_idx].cm);
    return 0;
}
void swapdistance(struct Distance *d1,struct Distance *d2)
{
	struct Distance temp=*d1;
	*d1=*d2;
	*d2=temp;
}

