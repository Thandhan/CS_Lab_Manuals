#include <LPC214x.H>
#include <STRING.H>	

#define LCD_DISPLAY 1
#define STEPPER_MOTOR 2
#define TEMPERATURE_SENSOR 3
#define POWER_MANAGEMENT_SYSTEM 4 

#define LEFT        0x18
#define RIGHT       0x1C
#define STABLE      0x06
#define FIRST_LINE  0x80
#define SECOND_LINE 0xC0

extern void DELAY_1M(unsigned int);
extern void DELAY_1S(unsigned int);

extern void INIT_ADC(void);
extern int  READ_ADC(void);
extern int  TEMPERATURE_VALUE(void);	

extern void LCD_INIT(void);
extern void LCD_DATA(unsigned char);
extern void LCD_CMD(unsigned int);
extern void DISPLAY_MESSAGE(unsigned char ADDRESS,char *MSG); 
extern void SHIFT_MESSAGE(unsigned int, unsigned int);

extern void INIT_PLL(void);

extern void INITIALIZE_MODULE(unsigned char);

extern void DISPLAY_TEMPERATURE(unsigned int);

extern void POWER_SAVING_SYSTEM(unsigned int);

extern void CLOCK_WISE_DIRECTION(unsigned int, unsigned int);
extern void ANTI_CLOCK_WISE_DIRECTION(unsigned int, unsigned int);

