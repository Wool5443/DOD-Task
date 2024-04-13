#include <TXLib.h>

static const int WIDTH  = 800;
static const int HEIGHT = 600;

void DrawMan(int x, int y);

int main()
{
    txCreateWindow(WIDTH, HEIGHT);

    for (int i = 0; i < 50; i++)
    {
        txSetFillColor(TX_WHITE);
        txRectangle(0, 0, WIDTH, HEIGHT);

        DrawMan(100 + i * 10, 500);
        txSleep(50);
    }

    return 0;
}

void DrawMan(int x, int y)
{
    txSetColor    (TX_BLACK);
    txSetFillColor(TX_BLACK);

    txLine(x, y - 42, x, y - 84);

    txLine(x, y - 42, x - 30, y);
    txLine(x, y - 42, x + 30, y);

    txLine(x, y - 78, x - 30, y - 48);
    txLine(x, y - 78, x + 50, y - 84);

    txCircle(x, y - 120 + 18, 18);
}
