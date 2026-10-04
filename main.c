#include "bflb_mtimer.h"
#include "board.h"

int main(void)
{
    board_init();

    while (1) {
        printf("Hello World from BL602 MCU via GitHub Actions!\r\n");
        bflb_mtimer_delay_ms(1000);
    }
}
