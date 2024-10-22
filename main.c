#include "main.h"
#include "types/rgba.h"
#include "terminalRender/terminalRender.c"
#include "mangroveRender/mangroveRender.c"

const unsigned int WINDOW_WIDTH = 10;
const unsigned int WINDOW_HEIGHT = 10;

int main() {
    RGBA trData[] = mangroveRender();
    terminalRender(trData, WINDOW_WIDTH);
    return 0;
}
