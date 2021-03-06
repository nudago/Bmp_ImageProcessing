#ifndef __LOAD_IMAGE_H__
#define __LOAD_IMAGE_H__

void read_image();
void write_image();
void free_mem();
void cpy_input_To_temp();

void mirror();
void flip();
void crop(int x1, int x2, int y1, int y2);
void rotate();
void brightness(int v);
void contrast(int v);
#endif