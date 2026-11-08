#include <stdint.h>
#include <fonts/norad_font.h>
#include <fonts/numbers_font.h>
#include <fonts/uppercase_font.h>
#include <fonts/lowercase_font.h>

void disp_norad(char * norad_str){
    // string will always be exactly 5 characters long
    // called once per satellite

    // get array to send to led

    // calculate meta (x, y, width, height)

    // send to display function
}


void disp_company(char * company_str){
    // string will be variable length
    // todo: test a static preset display string vs cutting off company str
    // called once per satellite

    // determine which letters to send

    // get array to send to led per letter

    // calculate meta (x, y, width, height)

    // send to display function
}

void disp_init(){
    // init display and write lat:, lon:, etc. to matrix

    // write lat, lon, and units
}

void disp_lat(int lat){
    // todo: handle fixed point or something idk
    static int prev_lat = 0;

    // determine the differences in numbers, specific handling determined by floating vs fixed point

    // only update the numbers that are changing

}

void disp_lon(int lon){
    // todo: handle fixed point or something idk
    static int prev_lon = 0;

    // determine the differences in numbers, specific handling determined by floating vs fixed point

    // only update the numbers that are changing

}

void disp_alt(int alt){
    // todo: handle fixed point or something idk
    static int prev_alt = 0;

    // determine the differences in numbers, specific handling determined by floating vs fixed point

    // only update the numbers that are changing

}

void disp_vel(int vel){
    // todo: handle fixed point or something idk
    static int prev_vel = 0;
    
    // determine the differences in numbers, specific handling determined by floating vs fixed point

    // only update the numbers that are changing

}