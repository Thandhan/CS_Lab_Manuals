#line 1 "STEPPER MOTOR.C"
#line 1 "CM-ARM7.H"
#line 1 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"
 
 
 
 
 
 
 
 




 
#line 57 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 




 
#line 90 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 




 





 





 


 



 





 


 


 


 
#line 148 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 
#line 167 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 
#line 184 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 
#line 201 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 
#line 218 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 
#line 227 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 
#line 236 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 






 
#line 254 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 
#line 282 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 
#line 296 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 
#line 310 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

 


 


 





 
#line 363 "C:\\Keil\\ARM\\INC\\Philips\\LPC214x.H"

#line 2 "CM-ARM7.H"
#line 1 "C:\\Keil\\ARM\\RV31\\INC\\STRING.H"
 
 
 
 




 








 











#line 37 "C:\\Keil\\ARM\\RV31\\INC\\STRING.H"


  
  typedef unsigned int size_t;








extern __declspec(__nothrow) void *memcpy(void * __restrict  ,
                    const void * __restrict  , size_t  ) __attribute__((__nonnull__(1,2)));
   




 
extern __declspec(__nothrow) void *memmove(void *  ,
                    const void *  , size_t  ) __attribute__((__nonnull__(1,2)));
   







 
extern __declspec(__nothrow) char *strcpy(char * __restrict  , const char * __restrict  ) __attribute__((__nonnull__(1,2)));
   




 
extern __declspec(__nothrow) char *strncpy(char * __restrict  , const char * __restrict  , size_t  ) __attribute__((__nonnull__(1,2)));
   





 

extern __declspec(__nothrow) char *strcat(char * __restrict  , const char * __restrict  ) __attribute__((__nonnull__(1,2)));
   




 
extern __declspec(__nothrow) char *strncat(char * __restrict  , const char * __restrict  , size_t  ) __attribute__((__nonnull__(1,2)));
   






 






 

extern __declspec(__nothrow) int memcmp(const void *  , const void *  , size_t  ) __attribute__((__nonnull__(1,2)));
   





 
extern __declspec(__nothrow) int strcmp(const char *  , const char *  ) __attribute__((__nonnull__(1,2)));
   




 
extern __declspec(__nothrow) int strncmp(const char *  , const char *  , size_t  ) __attribute__((__nonnull__(1,2)));
   






 
extern __declspec(__nothrow) int strcasecmp(const char *  , const char *  ) __attribute__((__nonnull__(1,2)));
   





 
extern __declspec(__nothrow) int strncasecmp(const char *  , const char *  , size_t  ) __attribute__((__nonnull__(1,2)));
   






 
extern __declspec(__nothrow) int strcoll(const char *  , const char *  ) __attribute__((__nonnull__(1,2)));
   







 

extern __declspec(__nothrow) size_t strxfrm(char * __restrict  , const char * __restrict  , size_t  ) __attribute__((__nonnull__(2)));
   













 


#line 184 "C:\\Keil\\ARM\\RV31\\INC\\STRING.H"
extern __declspec(__nothrow) void *memchr(const void *  , int  , size_t  ) __attribute__((__nonnull__(1)));

   





 

#line 200 "C:\\Keil\\ARM\\RV31\\INC\\STRING.H"
extern __declspec(__nothrow) char *strchr(const char *  , int  ) __attribute__((__nonnull__(1)));

   




 

extern __declspec(__nothrow) size_t strcspn(const char *  , const char *  ) __attribute__((__nonnull__(1,2)));
   




 

#line 223 "C:\\Keil\\ARM\\RV31\\INC\\STRING.H"
extern __declspec(__nothrow) char *strpbrk(const char *  , const char *  ) __attribute__((__nonnull__(1,2)));

   




 

#line 238 "C:\\Keil\\ARM\\RV31\\INC\\STRING.H"
extern __declspec(__nothrow) char *strrchr(const char *  , int  ) __attribute__((__nonnull__(1)));

   





 

extern __declspec(__nothrow) size_t strspn(const char *  , const char *  ) __attribute__((__nonnull__(1,2)));
   



 

#line 261 "C:\\Keil\\ARM\\RV31\\INC\\STRING.H"
extern __declspec(__nothrow) char *strstr(const char *  , const char *  ) __attribute__((__nonnull__(1,2)));

   





 

extern __declspec(__nothrow) char *strtok(char * __restrict  , const char * __restrict  ) __attribute__((__nonnull__(2)));
extern __declspec(__nothrow) char *_strtok_r(char *  , const char *  , char **  ) __attribute__((__nonnull__(2,3)));

extern __declspec(__nothrow) char *strtok_r(char *  , const char *  , char **  ) __attribute__((__nonnull__(2,3)));

   

































 

extern __declspec(__nothrow) void *memset(void *  , int  , size_t  ) __attribute__((__nonnull__(1)));
   



 
extern __declspec(__nothrow) char *strerror(int  );
   





 
extern __declspec(__nothrow) size_t strlen(const char *  ) __attribute__((__nonnull__(1)));
   



 

extern __declspec(__nothrow) size_t strlcpy(char *  , const char *  , size_t  ) __attribute__((__nonnull__(1,2)));
   
















 

extern __declspec(__nothrow) size_t strlcat(char *  , const char *  , size_t  ) __attribute__((__nonnull__(1,2)));
   






















 

extern __declspec(__nothrow) void _membitcpybl(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
extern __declspec(__nothrow) void _membitcpybb(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
extern __declspec(__nothrow) void _membitcpyhl(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
extern __declspec(__nothrow) void _membitcpyhb(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
extern __declspec(__nothrow) void _membitcpywl(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
extern __declspec(__nothrow) void _membitcpywb(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
extern __declspec(__nothrow) void _membitmovebl(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
extern __declspec(__nothrow) void _membitmovebb(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
extern __declspec(__nothrow) void _membitmovehl(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
extern __declspec(__nothrow) void _membitmovehb(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
extern __declspec(__nothrow) void _membitmovewl(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
extern __declspec(__nothrow) void _membitmovewb(void *  , const void *  , int  , int  , size_t  ) __attribute__((__nonnull__(1,2)));
    














































 







#line 493 "C:\\Keil\\ARM\\RV31\\INC\\STRING.H"



 
#line 3 "CM-ARM7.H"












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

#line 2 "STEPPER MOTOR.C"

int main()
{
  INITIALIZE_MODULE        (2);
  CLOCK_WISE_DIRECTION     (200,10);
  ANTI_CLOCK_WISE_DIRECTION(200,10);
}
