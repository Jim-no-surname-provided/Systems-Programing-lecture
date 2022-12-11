#include <stdio.h>
#include <string.h>

int strInsert(char str1[], const char str2[], int pos);

int main() {
    char name[100] = "Hans!",
        s1[] = "hello ",
        s2[] = "my friend ";
    printf("'%s' inserted before '%s':\n", s1, name);
    strInsert(name, s1,0);
    puts(name);

    printf("'%s' inserted at position 6 in '%s'\n", s2, name);
    strInsert(name, s2,6);
    puts(name); 
    return 0;
}

int strInsert(char str1[], const char str2[], int pos) {

    if pos

    /* TODO: your code goes here */
}
