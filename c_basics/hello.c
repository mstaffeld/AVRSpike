#include <stdio.h>


void driveDigits()
{
    unsigned char myLetter = 'A';
    unsigned char myNumber = 200;
    unsigned char myLetterHex = 0x7B;
    unsigned char myLetterBin = 0b00010001;
    char octalLetter = 057;

    printf("myLetter: %c\n", myLetter);
    printf("myNumber: %d\n", myNumber);
    printf("myLetterHex: %c\n", myLetterHex);
    printf("myLetterBin: %c\n", myLetterBin);
    printf("octalLetter: %c\n", octalLetter);
}


int main(void)
{
    printf("Basic elementary c tests/driver/debugger.\n\n");
   
    driveDigits();

    // convert hexidecimal to binary
    // convert binary to hexidecimal 


    // ADVANCED
    // shift bits
    // mock out avr
    // unit test or test drive avr libs 
}