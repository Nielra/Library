#include "ElviraLib.h"
#include "Pugovkina_Lib.h"

int main()
    {
    txCreateWindow (1100, 700);

    for (int t = 1; t <= 100; t++)
        {
        txClear();

        txBegin();

        Fon_Rectangle (RGB ( 32, 178, 170), RGB (144, 238, 144));

        for (int x = 0; x <= 1100; x += 100)

            {
            for (int y = 250; y <= 600; y += 50)

                {
                Flowers (x, y, RGB ( 60 + rand() % 80, 190 + rand() % 30, 200 + rand() %  40),
                               RGB (210 + rand() % 11, 210 + rand() % 11,   0 + rand() % 166));
                }
            }

        SolnceDraw (150, 100, 1, 1, pow (-1, t/10) * 2.5, 1, pow (-1, t/15), TX_YELLOW);

        DrawCloud (1300 - t/2, 30, 0.7, TX_WHITE);
        DrawCloud ( 100 - t/2, 10, 0.5, TX_WHITE);
        DrawCloud ( 600 - t/2, 40, 1.2, TX_WHITE);
        DrawCloud ( 200 - t/2, 10, 1,   TX_WHITE);

        DrawAirplan (t * 15, 30, 1, 1, TX_BLUE, TX_LIGHTGRAY);

        CloudDraw (1000 - t, 130, 1,   1.2, RGB (160, 217, 250));
        CloudDraw ( 500 - t, 100, 1.1, 0.5, RGB (160, 217, 250));
        CloudDraw ( 300 - t,  70, 0.8, 1.5, RGB (160, 217, 250));
        CloudDraw ( 750 - t,  80, 1.1, 0.5, RGB (160, 217, 250));

        DrawElka ( 800, 250, 1.3, 10, 20, 30, (pow (-1, t/15)) * 2, 20);
        DrawElka ( 800, 150, 1,   10, 20, 30, (pow (-1, t/15)) * 2, 20);
        DrawElka (1000, 150, 1,   10, 20, 30, (pow (-1, t/15)) * 2, 20);
        DrawElka ( 150, 250, 1.3, 10, 20, 30, (pow (-1, t/15)) * 2, 20);

        ElkaDraw (900, 170, 1,   1,   -2 * pow (-1, t/15), 0, TX_GREEN, TX_BROWN);
        ElkaDraw (700, 170, 1.5, 1.3, -2 * pow (-1, t/15), 0, TX_GREEN, TX_BROWN);
        ElkaDraw (250, 560, 1,   1,   -2 * pow (-1, t/15), 0, TX_GREEN, TX_BROWN);

        DrawBus (1000 - t * 10, 200, -10, 10, pow (-1, t), true, TX_YELLOW, TX_LIGHTGRAY);

        GerlDraw (250 + t, 500, 0.7, 0.7, -0.5, 30 * ((t/7) % 2 ), -(t/10) % 2 * 2 - 1, (t/10) % 2 * 2 - 1,
                  TX_YELLOW, RGB (rand()%207, rand()%159, rand()%255), TX_GREEN);

        //DomDraw_day (300, 450, 1.3, 1.3, 3, 3,
        //             TX_BROWN, TX_BLUE, RGB (134, 134, 134), TX_DARKGRAY, TX_YELLOW, t/10);

        KacheliDraw (600, 450, 1, 1, 1 - t/10 % 2, TX_DARKGRAY);

        GerlDraw (530, 400 - 15 * (t/10 % 2 * 2 - 1), 0.7, 0.7, -0.5, 0, -(t/10) % 2 * 2 - 1, (t/10) % 2 * 2 - 1,
                  TX_YELLOW, RGB (220, 20, 60), TX_GREEN);
        GerlDraw (670, 400 + 15 * (t/10 % 2 * 2 - 1), 0.7, 0.7, -0.5, 0, -(t/10) % 2 * 2 - 1, (t/10) % 2 * 2 - 1,
                  TX_YELLOW, RGB (220, 20, 60), TX_GREEN);

        DrawChick (630 - 10 * t, 280, 1, 1, 20 * (t % 2 * 2 - 1), 20 * (t % 2 * 2 - 1), t/8  % 2 * 10);

        txSleep (50);

        txEnd();
        }

    Titles (RGB (89, 184, 33), TX_WHITE, "Совмесное использование библиотек", "Пуговкиной Т. и Нафиковой Э.");

    return 0;
    }
