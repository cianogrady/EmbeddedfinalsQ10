#include "mbed.h"

DigitalIn button(PC_13);
DigitalOut led1(LED1);
DigitalOut led2(LED2);

int main() {
    // set state
led1 = 1; // on
led2 = 0;  //off 

int flag = 0;

while(true) {

    if(button == 0) {
        if(flag == 0) {

            flag = 1;
        led1 = !led1;
        led2 = !led2;

        wait_us(200000);
        }
    }
    else {
        flag = 0;

    }
}
}





