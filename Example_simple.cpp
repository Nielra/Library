#include "ElviraLib.h"

int main()
    {
    txCreateWindow (1300, 650);

    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 1300, 650);

    DrawSun (100, 100, 30, 25);

    DrawHaus (100, 300, 0.9, 0.7, 10, 50, 10, 10, TX_BLUE, TX_GREEN, TX_YELLOW);

    DrawGirl (500, 200, 1.2, 1, 3, 0, 1, 20, 0, 4, TX_YELLOW);

    DrawCat (400, 400, 1, 30, 10, 10, 20, 2, 1, -1, TX_GRAY);

    DrawChick ( 800, 500,    2,   2, -20, 20,  6);
    DrawChick (1000, 500, -2.5, 2.5,  30, 20, 10);

    DrawCloud (100, 10, 2, TX_GRAY);

    DrawAirplan (500, 30, 1, 1, TX_BLUE, TX_LIGHTGRAY);

    DrawBus (1100, 200, -10, 10, 0, true, RGB (222, 184, 135), RGB (240, 230, 140));

    return 0;
    }
