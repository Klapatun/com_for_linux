#ifndef __COM_H
#define __COM_H

#include <stdbool.h>
#include <termios.h>

/*----------------------------------------------------------------------------
 Открыть COM порт
 COM_name: путь к устройству, например: /dev/ttyS0 или  /dev/ttyUSB0 - для USB
 speed: скорость, например: B9600, B57600, B115200 
 ----------------------------------------------------------------------------*/
bool openPort(const char *COM_name,speed_t speed);

/*----------------------------------------------------------------------------
 Прочитать данные из COM порта
 buff - буфер для принятых данных
 size - количество запрашиваемых байт
 ----------------------------------------------------------------------------*/
int readData(unsigned char *buff,int size);

/*----------------------------------------------------------------------------
 Отправить в COM порт данные
 buff - буфер данных для отправки
 size - количество отправляемых байт
 ----------------------------------------------------------------------------*/
int sendData(unsigned char* buff,int len);

/*----------------------------------------------------------------------------
 Закрыть COM порт
 ----------------------------------------------------------------------------*/
void closeCom(void);

/*----------------------------------------------------------------------------
 Установить RTS
 ----------------------------------------------------------------------------*/
void setRTS();

/*----------------------------------------------------------------------------
Очистить RTS
 ----------------------------------------------------------------------------*/
void clrRTS();




#endif /*__COM_H*/