#include "LCD_I2C.h"
#include "I2C.h"
#include "MKL25Z4.h"

#define I2C_W 0
#define I2C_R 1
#define Clean 0x01
#define LCD_Adress 0x27
#define LCD_On 0x0E
#define Display_Left 0x18
#define Display_Right 0x1C
#define Cursor_Left  0x10
#define Cursor_Right 0x14
#define DDRAM_Adress 0xC0
#define MSB 0x2C
#define LSB 0X20

void LCD_Init(void){
    void I2C_Start(void LCD_On);
    void I2C_WriteByte(uint8_t 0x06);
    uint8_t I2C_ReadByte(uint8_t 0x06);
}
void LCD_Clear(void){
    void LCD_Command(uint8_t Clean);
    void I2C_Stop(void);
}
void LCD_Print(char * data){
    while (* data){
        LCD_Write (* data++);
    }
}
void LCD_SetCursor(void){
    void LCD_Command(uint8_t DDRAM_Adress);
    void LCD_Command(uint8_t Cursor_Right);
    void LCD_Command(uint8_t Cursor_Left);
}
void LCD_Command(uint8_t command){
    void I2C_WriteByte(uint8_t MSB);
    void I2C_WriteByte(uint8_t LSB);
}
void LCD_Write(uint8_t data){
    uint8_t I2C_WriteByte(uint8_t data);
}
void LCD_ScrllDisplayRight(void){
    void LCD_Command(uint8_t Display_Right);
}
void LCD_ScrllDisplayLeft(void){
    void LCD_Command(uint8_t Display_Left);
}
