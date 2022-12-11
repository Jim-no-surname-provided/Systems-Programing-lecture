/** point3D.h
 * structures and function prototypes
 */
#ifndef POINT3D_H

#define POINT3D_H
#include <stdio.h>

typedef struct Point3D { double x, y, z; } Point3D_t;

/* TODO: implement the body of this function in the .c-file */
Point3D_t sumP3D(const Point3D_t *p1, const Point3D_t *p2);

/* TODO: implement the body of this function in the .c-file */
char *toStringP3D(const Point3D_t *p);

#endif // POINT3D_H
