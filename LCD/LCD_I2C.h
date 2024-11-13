#ifndef I2C_H
#define I2C_H
#include "MKL25Z4.h"

void LCD_Init(void);
void LCD_Clear(void);
void LCD_Print(char * data);
void LCD_SetCursor(void);
void LCD_Command(uint8_t command);
void LCD_Write(uint8_t data);
void LCD_ScrllDisplayRight(void);
void LCD_ScrllDisplayLeft(void);

#endif
