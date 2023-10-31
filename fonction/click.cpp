#include <iostream>
#include <windows.h>
#include "../include/variable.hpp"

void click(int x, int y, int click)
{
    SetCursorPos(x, y);
    if (click == GAUCHE){
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    }
    else if (click == DROITE){
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
    }
}

