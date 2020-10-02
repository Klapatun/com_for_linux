#include "stdlib.h"
#include "com.h"


int main() {

    bool res = openPort("/dev/ttyUSB0",B9600);
    if(!res)
    {
        printf("Невозможно открыть COM порт\n");
        return 0;
    }
    unsigned char buff[8] = {0,1,2,3,4,5,6,7};
    sendData(buff,8);

    int s = readData(buff,4);
    if(s < 4)
    {
        printf("Нет ответа\n");
        return 0;
    }
    
    return 0;
}
