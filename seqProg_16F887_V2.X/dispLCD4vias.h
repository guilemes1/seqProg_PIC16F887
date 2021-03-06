#ifndef DISPLCD8VIAS_H
#define DISPLCD8VIAS_H

#define LCD_ROWS        4
#define LCD_COLS        20

void dispLCD_instReg( unsigned char i );
void dispLCD_dataReg( unsigned char d );
void dispLCD_lincol( unsigned char lin, unsigned char col);
void dispLCD_init( void );
void dispLCD( unsigned char lin, unsigned char col, const char * str );
void dispLCD_num( unsigned char lin, unsigned char col, int num, unsigned char tam );
void dispLCD_clr( void );
void dispLCD_str( const char * str );

#endif
