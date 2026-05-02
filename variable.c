#include <stdio.h>
#include <stdbool.h>

int main(){

    // this is a uasge of variable

// int variable
    int num = 3 ;
    int num2 = 4 ;
    int num3 = 8 ;
    printf("The number is %d \n", num);
    printf("The number is %d \n", num2);
    printf("The number is %d \n", num3);

    // float variable
    float fnum = 3.48;
    float fnum2 = 34.8;
    float fnum3 = 0.348;  
    printf("my fav float is %f \n", fnum);
    printf("my fav float is %.1f \n", fnum2);
    // %.xf removes extra zeros("00") x = any number u want after .
    printf("my fav float is %.4f \n", fnum3);

    // for pricision
    double pi = 3.141569875645975;
    printf("the value of pi is %.15lf \n", pi);

    // char variable (only a charectar)
    char letter = 'n';
    char symbol = '!';

    printf("The letter is %c \n", letter);
    printf("The symbol is %c \n", symbol);

// string variable (for a sentence)

    

    // char crush[] = "Nawshine Jahan";




    // char text[] = "she was beautiful";

    // printf("the text is %s \n", text);


    // to write boolean type u need to add #include <stdbool.h>
  

    bool lov = true;

    printf("do i like her = %d \n", lov);

    if(lov){
        printf("You like her");

    }
    else{
        printf("You don't like her");
    }


// summery
// float = single-precision decimal number (4 bytes)

// double = double-precision decimal number (8 bytes)

// char = single character (1 byte)

// char[] = array of characters (size varies)

// bool = true or false (1 byte, requires <stdbool.h>)



    return 0;
}