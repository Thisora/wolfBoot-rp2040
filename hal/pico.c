/* pico.c
 *
 * Author: Raemy Mathis
 * Date:   10.10.2022
 * 
 */

#include <stdint.h>
#include <string.h>
#include <target.h>
#include "image.h"


/*Can be used for exemple to init direct-xip*/
void hal_init(void)
{
    return;
}

/* Called before boot */
void hal_prepare_boot(void)
{
}


int RAMFUNCTION hal_flash_write(uint32_t address, const uint8_t *data, int len)
{
    return 0; // success
}

void RAMFUNCTION hal_flash_unlock(void)
{
    /* Flash not locker */
}

void RAMFUNCTION hal_flash_lock(void)
{
    /* No flash lock*/
}

/* Unused */
int RAMFUNCTION hal_flash_erase(uint32_t address, int len)
{
    return 0;
}
