#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <windows.h>
 
char op;
float num1, num2;
 
void Add();
void Subtract();
void Multiply();
void Divide();
void AddV2();
void SubtractV2();
void MultiplyV2();
void DivideV2();
 
int main()//Easiest ****ing thing evar...
{
    system("title CMD Calculator y0 - Start");
    printf("XeClutch's Calculator\n\nChoose an Operation...\n\n");
    printf("[+] Addition\n[A] Rounded to nearest hundredth (decimal)\n\n");
    printf("[-] Subtraction [-]\n[B] Rounded to nearest hundredth (decimal)\n\n");
    printf("[*] Multiplication [*]\n[C] Rounded to nearest hundredth (decimal)\n\n");
    printf("[/] Division [/]\n[D] Rounded to nearest hundredth (decimal)\n\n");
    scanf("%c", &op);
    if(op == '+')
    {
        Add();
    }
    else if(op == '-')
    {
        Subtract();
    }
    else if(op == '*')
    {
        Multiply();
    }
    else if(op == '/')
    {
        Divide();
    }
    else if(op == 'A')
    {
        AddV2();
    }
    else if(op == 'B')
    {
        SubtractV2();
    }
    else if(op == 'C')
    {
        MultiplyV2();
    }
    else if(op == 'D')
    {

    }
    else
    {
        printf("Invalid Operation...\n");
        system("pause");
    }
}
 
void Add()
{
    system("title CMD Calculator y0 - Addition");
    printf("Enter Numbers...\n");
    scanf("%f", &num1);
    printf("+\n");
    scanf("%f", &num2);
    printf("_____________\n%f\n", num1 + num2);
    system("pause");
}
 
void Subtract()
{
    system("title CMD Calculator y0 - Subtraction");
    printf("Enter Numbers...\n");
    scanf("%f", &num1);
    printf("-\n");
    scanf("%f", &num2);
    printf("_____________\n%f\n", num1 - num2);
    system("pause");
}
 
void Multiply()
{
    system("title CMD Calculator y0 - Multiplcation");
    printf("Enter Numbers...\n");
    scanf("%f", &num1);
    printf("*\n");
    scanf("%f", &num2);
    printf("_____________\n%f\n", num1 * num2);
    system("pause");
}
 
void Divide()
{
    system("title CMD Calculator y0 - Division");
    printf("Enter Numbers...\n");
    scanf("%f", &num1);
    printf("/\n");
    scanf("%f", &num2);
    printf("_____________\n%f\n", num1 / num2);
    system("pause");
}
 
void AddV2()
{
    system("title CMD Calculator y0 - Addition V2");
    printf("Enter Numbers...\n");
    scanf("%f", &num1);
    printf("+\n");
    scanf("%f", &num2);
    printf("_____________\n%.2f\n", num1 + num2);
    system("pause");
}
 
void SubtractV2()
{
    system("title CMD Calculator y0 - Subtraction V2");
    printf("Enter Numbers...\n");
    scanf("%f", &num1);
    printf("-\n");
    scanf("%f", &num2);
    printf("_____________\n%.2f\n", num1 - num2);
    system("pause");
}
 
void MultiplyV2()
{
    system("title CMD Calculator y0 - Multiplcation V2");
    printf("Enter Numbers...\n");
    scanf("%f", &num1);
    printf("*\n");
    scanf("%f", &num2);
    printf("_____________\n%.2f\n", num1 * num2);
    system("pause");
}
 
void DivisionV2()
{
    system("title CMD Calculator y0 - Division V2");
    printf("Enter Numbers...\n");
    scanf("%f", &num1);
    printf("/\n");
    scanf("%f", &num2);
    printf("_____________\n%.2f\n", num1 / num2);
    system("pause");
}
