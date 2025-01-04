#include<stdio.h>

int function_1(int input){
    int a=input+1;
    int b=a*a;

    return a+b;
}

int function_2(int input){
    int a=input;

    a++;
    a+=5;
    a-=6;
    a*=7;
    a/=8;
    a--;

    return a;
}

int function_3(int input){
    int a=input;

    while(1){
        a++;
        if(a/input == 3 && a%input == input/2)
            break;
        else
            continue;
    }

    return a;
}

int function_4(int input){
    const char apple[6]={'A','P','P','L','E','\0'};
    char string[input+1];
    int a=0;

    for(int i=0;i<input;i++){
        string[i]=apple[i%5];
    }
    for(int i=0;i<input;i++){
        if(string[i]=='P')
            a++;
    }

    return a;
}

int function_5(int input){
    int a=input;
    int *pointer=&a;

    *pointer = *pointer + input;

    return a;
}

int printPassword(int input){
    printf("%d",function_1(input));
    printf("%d",function_2(input));
    printf("%d",function_3(input));
    printf("%d",function_4(input));
    printf("%d",function_5(input));
}

