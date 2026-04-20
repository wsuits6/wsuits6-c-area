#include <stdio.h>

int main() {
    //read lenght (l)
    int l;

    //take lenght values
    printf("[+] Enter Lenght Values: ");
    scanf("%d", &l);

    //process and store in variable
    int area =  l * l;

    //printout the value
    printf("Area  is %d", &area );

    return 0;
}
