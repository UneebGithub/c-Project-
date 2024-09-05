//you may do it with beep() function in windows header . (you have to mix beeps)

#include <windows.h> // WinApi header 
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main() 
{ 
    

 
    Beep(500, 400);
    Beep(560, 282);
    Beep(590, 282);
    Beep(600, 400);

    Beep(883, 220);
    Beep(699, 228);
    Beep(788, 286);
    Beep(700, 270);
    
    getch();

    return 0;
}

