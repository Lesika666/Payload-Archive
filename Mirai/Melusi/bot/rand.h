/*                         Melusi By @melsui 63#9325
                        Leak Or Rip is Prohibited!
[+]=======================================================================[+]
*/
#pragma once

#include <stdint.h>

#define PHI 0x9e3779b9

void rand_init(void);
uint32_t rand_next(void);
void rand_str(char *, int);
void rand_alpha_str(uint8_t *, int);