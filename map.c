#include "common.h"


#define HEIGHT 11
#define WIDTH 11
static uint8_t map[WIDTH][HEIGHT];

void init_map() {
	for (uint8_t i = 0; i < WIDTH; i++) {
		for (uint8_t j = 0; j < HEIGHT; j ++) {
			//fence = 2
			if (i == 0 || i == WIDTH - 1 || j == 0 || j == HEIGHT - 1)
				map[i][j] = 2;
			else
				map[i][j] = 0;
		}
	}
	// player start from (1,1)
	map[1][1] = 1;
}

void paint_map() {
	for (uint8_t j = 0; j < HEIGHT; j++) {
		for (uint8_t i = 0; i < WIDTH; i++) {
			switch(map[i][j]) {
				case 0: putchar(' '); break;
				case 1: putchar('&'); break;
				case 2: putchar('*'); break;
			}
			if (i == WIDTH - 1) putchar('\n');
		}
	}
}
