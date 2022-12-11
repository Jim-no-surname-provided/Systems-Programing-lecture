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
    
    int len_str1 = strlen(str1);
    int len_str2 = strlen(str2);

    int len_arr_str1 = sizeof(str1)/sizeof(str1[0]);

    if(pos < 0 ||
        pos > len_str1 + 1 ||
        len_str1 + len_str2 > len_arr_str1) return -1;
    

    // Make space
    char *it1 = str1 + len_str1 - 1;
    
    for(int i = len_str1 - pos; i != 0; i--){
        *(it1 + len_str2) = *it1;
        it--;
    }

    // Copy
    char *it2 = str2;

    while ((*it2) != '\0'){
        *it1 = *it2;

        it1++;
        it2++;
    }
}