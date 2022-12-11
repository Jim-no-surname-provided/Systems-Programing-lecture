#include <stdio.h>
#include <string.h> // for strcpy

#include "point3D-template.h" // structure types and prototypes
int main() {
    struct Point3D p1 = { -1, 0, 1}, p2 = { -0.5 , 2.7, -1.2 }, p3;
    char p1Str[32], p2Str[32];

    printf("\n\t *** operations for 3D points ***\n\n");

    strcpy( p1Str, toStringP3D(&p1));
    strcpy( p2Str, toStringP3D(&p2));

    printf("1. point: %s\n2. point: %s\n", p1Str, p2Str);

    p3 = sumP3D( &p1, &p2);
    printf("the sum is: %s\n", toStringP3D(&p3));


}

Point3D_t sumP3D(const Point3D_t *p1, const Point3D_t *p2){
    Point3D_t  r = {
        p1->x + p2->x,
        p1->y + p2->y,
        p1->z + p2->z
    };
    return r;
}

char *toStringP3D(const Point3D_t *p){
    static char s[32];
    sprintf(s, "(%lf, %lf, %lf)",
        p->x,
        p->y,
        p->z);
    return s;
}


