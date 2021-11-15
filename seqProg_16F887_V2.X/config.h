/* Microchip Technology Inc. and its subsidiaries.  You may use this software
 * and any derivatives exclusively with Microchip products.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
 * TERMS.
 */

/* Microchip Technology Inc. e suas subsidi?rias.
 * Voc? pode usar este software e quaisquer derivados
 * exclusivamente com produtos Microchip.

 * ESTE SOFTWARE ? FORNECIDO PELA MICROCHIP "TAL COMO EST?".
 * NENHUMA GARANTIA, EXPRESSA, IMPL?CITA OU ESTATUT?RIA,
 * SE APLICA A ESTE SOFTWARE, INCLUINDO QUALQUER GARANTIA IMPL?CITA
 * DE N?O INFRAC??O, COMERCIALIZA??O E ADEQUA??O A UM PROP?SITO ESPEC?FICO OU
 * SUA INTERA??O COM PRODUTOS MICROCHIP,
 * COMBINA??O COM QUALQUER OUTRO PRODUTO OU UTILIZA??O EM QUALQUER APLICA??O.
 *
 * EM NENHUM CASO A MICROCHIP SER? RESPONS?VEL POR QUALQUER PERDA INDIRETO,
 * ESPECIAL, PUNITIVA, INCIDENTAL OU CONSEQUENCIAL,DANOS, CUSTO OU
 * DESPESAS DE QUALQUER TIPO DE RELA??O COM O SOFTWARE, NO ENTANTO, CAUSADO,
 * MESMO QUE MICROCHIP TENHA SIDO AVISADA DA POSSIBILIDADE OU
 * DOS DANOS PREVIS?VEIS.
 * NA M?XIMA EXTENS?O PERMITIDA POR LEI,A RESPONSABILIDADE TOTAL DA MICROCHIP
 * EM TODAS AS REIVINDICA??ES DE QUALQUER FORMA RELATIVA A ESTE SOFTWARE
 * N?O EXCEDER? A QUANTIDADE DE TAXAS, SE HOUVER,
 * QUE VOC? PAGOU DIRETAMENTE ? MICROCHIP POR ESTE SOFTWARE.
 *
 * A MICROCHIP FORNECE ESTE SOFTWARE CONDICIONALMENTE COM SUA ACEITA??O
 * DESTES TERMOS.
?*/

/*
 * File:    config.h
 * Author:  José W R Pereira
 * Comments:Arquivo de configura??o do microcontrolador via diretivas de
 *          compila??o e defini??es (defines).
 * Revision history:
 *      1:  Cria??o do arquivo de configura??o.
 *      2:  Tradu??o dos termos de aceita??o de uso do MPLABX da Microchip;
 *          Coment?rio nas diretivas e defini??es (defines).
 */


#ifndef CONFIG_H
#define CONFIG_H

//#pragma config FOSC  = EXTRC_NOCLKOUT   // INTRC_NOCLKOUT   // Fonte de clock: oscilador interno
//#pragma config WDTE  = OFF              // Desabilita WatchDog Timer
//#pragma config MCLRE = OFF              // Desab. Master Clear via pino
//#pragma config LVP   = OFF              // Desab. grava??o em baixa tens?o
//
//#define _XTAL_FREQ     8000000          // Freq. clock interno: 4MHz(padrao), nao estava funcionando corretamente foi mudado para 8

#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (PWRT enabled)
#pragma config MCLRE = OFF      // RE3/MCLR pin function select bit (RE3/MCLR pin function is digital input, MCLR internally tied to VDD)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = OFF      // Brown Out Reset Selection bits (BOR disabled)
#pragma config IESO = OFF       // Internal External Switchover bit (Internal/External Switchover mode is disabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)

// CONFIG2
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

//// CONFIG1L
//    #pragma config PLLDIV = 5							// PLL Prescaler Selection bits (Divide by 5 (20 MHz oscillator input))
//    #pragma config CPUDIV = OSC1_PLL2						// System Clock Postscaler Selection bits ([Primary Oscillator Src: /1][96 MHz PLL Src: /2])
//    #pragma config USBDIV = 1							// USB Clock Selection bit (used in Full-Speed USB mode only; UCFG:FSEN = 1) (USB clock source comes directly from the primary oscillator block with no postscale)
//    // CONFIG1H
//    #pragma config FOSC = HS							// Oscillator Selection bits (HS oscillator (HS))
//    #pragma config FCMEN = OFF							// Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor disabled)
//    #pragma config IESO = OFF							// Internal/External Oscillator Switchover bit (Oscillator Switchover mode disabled)
//    // CONFIG2L
//    #pragma config PWRT = ON							// Power-up Timer Enable bit (PWRT enabled)
//    #pragma config BOR = OFF							// Brown-out Reset Enable bits (Brown-out Reset disabled in hardware and software)
//    #pragma config BORV = 3							// Brown-out Reset Voltage bits (Minimum setting 2.05V)
//    #pragma config VREGEN = OFF							// USB Voltage Regulator Enable bit (USB voltage regulator disabled)
//    // CONFIG2H
//    #pragma config WDT = OFF							// Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
//    #pragma config WDTPS = 32768						// Watchdog Timer Postscale Select bits (1:32768)
//    // CONFIG3H
//    #pragma config CCP2MX = ON							// CCP2 MUX bit (CCP2 input/output is multiplexed with RC1)
//    #pragma config PBADEN = OFF							// PORTB A/D Enable bit (PORTB<4:0> pins are configured as digital I/O on Reset)
//    #pragma config LPT1OSC = OFF						// Low-Power Timer 1 Oscillator Enable bit (Timer1 configured for higher power operation)
//    #pragma config MCLRE = ON							// MCLR Pin Enable bit (MCLR pin enabled; RE3 input pin disabled)
//    // CONFIG4L
//    #pragma config STVREN = OFF							// Stack Full/Underflow Reset Enable bit (Stack full/underflow will cause Reset)
//    #pragma config LVP = OFF							// Single-Supply ICSP Enable bit (Single-Supply ICSP enabled)
//    #pragma config ICPRT = OFF							// Dedicated In-Circuit Debug/Programming Port (ICPORT) Enable bit (ICPORT disabled)
//    #pragma config XINST = OFF							// Extended Instruction Set Enable bit (Instruction set extension and Indexed Addressing mode disabled (Legacy mode))
//    // CONFIG5L
//    #pragma config CP0 = OFF							// Code Protection bit (Block 0 (000800-001FFFh) is not code-protected)
//    #pragma config CP1 = OFF							// Code Protection bit (Block 1 (002000-003FFFh) is not code-protected)
//    #pragma config CP2 = OFF							// Code Protection bit (Block 2 (004000-005FFFh) is not code-protected)
//    #pragma config CP3 = OFF							// Code Protection bit (Block 3 (006000-007FFFh) is not code-protected)
//    // CONFIG5H
//    #pragma config CPB = OFF							// Boot Block Code Protection bit (Boot block (000000-0007FFh) is not code-protected)
//    #pragma config CPD = OFF							// Data EEPROM Code Protection bit (Data EEPROM is not code-protected)
//    // CONFIG6L
//    #pragma config WRT0 = OFF							// Write Protection bit (Block 0 (000800-001FFFh) is not write-protected)
//    #pragma config WRT1 = OFF							// Write Protection bit (Block 1 (002000-003FFFh) is not write-protected)
//    #pragma config WRT2 = OFF							// Write Protection bit (Block 2 (004000-005FFFh) is not write-protected)
//    #pragma config WRT3 = OFF							// Write Protection bit (Block 3 (006000-007FFFh) is not write-protected)
//    // CONFIG6H
//    #pragma config WRTC = OFF							// Configuration Register Write Protection bit (Configuration registers (300000-3000FFh) are not write-protected)
//    #pragma config WRTB = OFF							// Boot Block Write Protection bit (Boot block (000000-0007FFh) is not write-protected)
//    #pragma config WRTD = OFF							// Data EEPROM Write Protection bit (Data EEPROM is not write-protected)
//    // CONFIG7L
//    #pragma config EBTR0 = OFF							// Table Read Protection bit (Block 0 (000800-001FFFh) is not protected from table reads executed in other blocks)
//    #pragma config EBTR1 = OFF							// Table Read Protection bit (Block 1 (002000-003FFFh) is not protected from table reads executed in other blocks)
//    #pragma config EBTR2 = OFF							// Table Read Protection bit (Block 2 (004000-005FFFh) is not protected from table reads executed in other blocks)
//    #pragma config EBTR3 = OFF							// Table Read Protection bit (Block 3 (006000-007FFFh) is not protected from table reads executed in other blocks)
//    // CONFIG7H
//    #pragma config EBTRB = OFF							// Boot Block Table Read Protection bit (Boot block (000000-0007FFh) is not protected from table reads executed in other blocks)

#define _XTAL_FREQ     20000000

#endif                                  // alterado tambem para frequencia de clock externa
