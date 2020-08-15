
#include <stdio.h>
#include <stdlib.h>
#include "color.h"

int main(){

    printf("TEST COLORS:\n");
    printf("%s", c_color(c_red, "text red\n"));
    printf("%s", c_color(c_red_light, "text red light\n"));
    printf("%s", c_color(c_green, "text green\n"));
    printf("%s", c_color(c_green_light, "text green light\n"));
    printf("%s", c_color(c_yellow, "text yellow\n"));
    printf("%s", c_color(c_yellow_light, "text yellow light\n"));
    printf("%s", c_color(c_blue, "text blue\n"));
    printf("%s", c_color(c_blue_light, "text blue light\n"));
    printf("%s", c_color(c_magenta, "text magenta\n"));
    printf("%s", c_color(c_magenta_light, "text magenta light\n"));
    printf("%s", c_color(c_cyan, "text cyan\n"));
    printf("%s", c_color(c_cyan_light, "text cyan light\n"));
    
    printf("\n\n");

    printf("EXAMPLE USING\n");
    char * message = "message";
    int num = 555;

    printf(c_color(c_blue, "[%i] INFO: %s \n"), num, message);
    printf(c_color(c_red, "[%i] ERROR: %s \n"), num, message);
    printf(c_color(c_yellow_light, "[%i] WARNING: %s \n"), num, message);
    printf(c_color(c_cyan_light, "[%i] DEGUB: %s \n"), num, message);

    return 0;
}
