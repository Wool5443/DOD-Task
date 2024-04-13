#include <TXLib.h>

static const int WIDTH  = 800;
static const int HEIGHT = 600;

void DrawMan(int x, int y);

int main()
{
    txCreateWindow(WIDTH, HEIGHT);
    txSetFillColor(TX_WHITE);
    txFloodFill(0, 0);

    DrawMan(300, 300);

    return 0;
}

void DrawMan(int x, int y)
{
    txSetColor    (TX_BLACK);
    txSetFillColor(TX_BLACK);

    txLine(385, 450 - 42, 385, 450 - 84);

    txLine(385, 450 - 42, 385 - 30, 450);
    txLine(385, 450 - 42, 385 + 30, 450);

    txLine(385, 450 - 78, 385 - 30, 450 - 48);
    txLine(385, 450 - 78, 385 + 50, 450 - 84);

    txCircle(385, 450 - 120 + 18, 18);
}
