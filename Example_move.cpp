#include "ElviraLib.h"

int main()
    {
    txCreateWindow (1300, 650);

    for (int t = 1; t <= 100; t++)
        {
        txClear();

        txSetColor (RGB (144, 238, 144));
        txSetFillColor (RGB (144, 238, 144));
        txRectangle (0, 150, 1300, 650);

        txSetColor (RGB ( 32, 178, 170));
        txSetFillColor (RGB ( 32, 178, 170));
        txRectangle (0,   0, 1300, 150);

        DrawCloud (500 - t/2, 10, 2, TX_WHITE);

        DrawSun (50 + t/10, 60, 30 - t/10, 5 + t/10);

        DrawCat (500 + t * 2, 300, 1.2, 30 * (t/10 % 2), 50 * (t/10 % 2 * 2 - 1), 20 * (t/8 % 2),
                 20 * (t/8 % 2), 2 * (t/10 % 2 * 2 - 1), 2 * (t/8 % 2 * 2 - 1),
                 2 * (t/7 % 2 * 2 - 1), TX_GRAY);

        DrawChick ( 800 - t * 2, 500 + t/2, 0.9              , 0.9           ,
                   20 * (t/10 % 2 * 2 - 1), t/5 % 2 * 20, t/10 % 2 * 10);

        DrawChick (1000 + t * 3, 500 - t  , -(2.5 - t * 0.01), 2.5 - t * 0.01,
                   20 * (t/10 % 2 * 2 - 1), t/5 % 2 * 20, t/8  % 2 * 10);

        DrawAirplan (0 + t * 10, 30, 1, 1, TX_BLUE, TX_LIGHTGRAY);

        DrawBus (100 + t * 5, 200, 10, 10, pow (-1, t), true, TX_YELLOW, TX_LIGHTGRAY);

        DrawGirl (400, 200 + t * 3, 1, 2 * pow (-1, t/7), t/10 % 2 * 2 + 1, 0, 1, 30 * ((t/2) % 2 * 2 - 1), 0, 5, RGB (250, 128, 114));

        DrawHaus (100, 300, 0.9, 0.7, 10, 50, 10, 10, TX_BLUE, TX_GREEN, TX_YELLOW);

        DrawElka (800, 100, 1.3, 10, 20, 30, (pow (-1, t/15)) * 2, 20);

        txSleep (50);
        }

    return 0;
    }
