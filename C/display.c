/******
Demo for ssd1306 i2c driver for  Raspberry Pi 
******/
#include <stdio.h>
#include "ssd1306_i2c.h"
#include "time.h"
#include <unistd.h>



int main(void) 
{
    unsigned char symbol=3;
    ssd1306_begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);      //LCD Screen initialization
    if(i2cd<0)
    {
        printf("I2C device failed to open\r\n");
        return 0;
    }
    usleep(150*1000);                                                  //Short delay Ensure the normal response of the lower function
    FirstGetIpAddress();                        //Get IP address
    while(1)
    {
        if(LCD_Display(symbol) < 0) {
            symbol=0;  
        }
        else {
            //symbol++;
            sleep(1);
            sleep(1);
            sleep(1);
        } 
    }
    return 0;
}
