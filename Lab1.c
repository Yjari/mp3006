/* Lab 1 first file - ID number 815008450 */
#include <p18f452.h>
/* Set configuration bits for use with ICD2 */
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF
int counter;
void main (void)
{
    TRISB=0;
    for(counter=0;counter<16;counter++)
    {
        PORTB=counter;
    
    }
    counter=0;
}
