#include <stdio.h>
#include <stdint.h>

struct point_info{
    int x,y;
    char dir;
}point;

void init_map();
void paint_map();