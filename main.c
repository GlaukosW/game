#include<stdio.h>
#include<stdint.h>
#include<time.h>
#include<conio.h>


int main()
{
	init_map();
	paint_map();
	return 0;
}

void init_point()
{
	point.x = 1;
	point.y = 1;
	point.dir = 'r';
}

void get_pos(key) 
{
	point.dir = key == 'n' ? point.dir : key;
	switch(point.dir)
	{
		case 'u': point.y -= 1; break;
		case 'd': point.y += 1; break;
		case 'l': point.x -= 1; break;
		case 'r': point.x += 1; break;
	}
}

