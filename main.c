#include <stdio.h>
#include <gb/gb.h>
#include <gb/font.h>

void main(){
    font_t min_font;
    font_init();
    //ibm_font = font_load(font_ibm);  /* 96 tiles */
    //italic_font = font_load(font_italic);   /* 93 tiles */
    min_font = font_load(font_min); // 36 tile
    font_set(min_font);
    printf("Hello World!");
    
}