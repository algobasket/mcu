/*

 Copyright (c) 2015 Douglas J. Bakkum

 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the "Software"),
 to deal in the Software without restriction, including without limitation
 the rights to use, copy, modify, merge, publish, distribute, sublicense,
 and/or sell copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.

*/


#include <stdint.h>
#include <string.h>

#include "commander.h"


void delay_ms(int delay) 
{ 
    (void)delay; 
}


int sd_format(void)
{
    commander_fill_report("backup", "Formatting ignored for non-embedded testing.", ERROR);
    return 1;
}


void sd_backup(const char *f, int f_len, const char *t, int t_len)
{
    (void)f;
    (void)f_len;
    (void)t;
    (void)t_len;
    commander_fill_report("backup", "Ignored for non-embedded testing.", ERROR);
}


char *sd_load(const char *f, int f_len)
{
    (void)f;
    (void)f_len;
	commander_fill_report("load", "Ignored for non-embedded testing.", ERROR);
    return 0;
}


void sd_list(void)
{
    commander_fill_report("backup", "No files to list for non-embedded testing.", ERROR);
    return;
}


uint8_t touch_button_press(int long_touch)
{
    (void) long_touch;
    commander_fill_report("touchbutton", "touched (hard coded)", SUCCESS);
    return 0;
}


void touch_button_parameters(uint16_t timeout, uint16_t threshold)
{
    (void)timeout;
    (void)threshold;
    commander_fill_report("touchbutton", "touched (hard coded)", SUCCESS);
}


uint8_t flash_read_unique_id(uint32_t *serial, uint32_t len)
{
    memset(serial, 0, len);
    return 0; // success
}
