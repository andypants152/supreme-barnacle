#include <stdio.h>
#include <gb/gb.h>
#include <gb/font.h>

typedef enum {
    HELLO,
    SPLASH

} screen_t;

screen_t Hello(){
    font_t min_font;
    font_init();
    //ibm_font = font_load(font_ibm);  /* 96 tiles */
    //italic_font = font_load(font_italic);   /* 93 tiles */
    min_font = font_load(font_min); // 36 tile
    font_set(min_font);
    printf("\nHello World  \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n PRESS START TO\n Swap Phrase");
    waitpad(J_START);
    return SPLASH;
    
}

screen_t Splash(){
  font_t min_font;
    font_init();
    //ibm_font = font_load(font_ibm);  /* 96 tiles */
    //italic_font = font_load(font_italic);   /* 93 tiles */
    min_font = font_load(font_min); // 36 tile
    font_set(min_font);
    printf("\nBonne Nuit \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n PRESS START TO\n Swap Phrase");
    waitpad(J_START);
    return HELLO;
}

void main(){
    screen_t current_screen = HELLO;
    
    while(1){
        if (current_screen == HELLO){
            current_screen = Hello();
        }
        else if (current_screen == SPLASH){
            current_screen = Splash();
        }
    }
}