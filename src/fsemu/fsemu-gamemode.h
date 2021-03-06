#ifndef FSEMU_GAMEMODE_H_
#define FSEMU_GAMEMODE_H_

#include "fsemu/fsemu-common.h"

#ifdef __cplusplus
extern "C" {
#endif

void fsemu_gamemode_init(int flags);
void fsemu_gamemode_suspend(void);
void fsemu_gamemode_resume(void);
void fsemu_gamemode_check_linux_cpu_governor(void);

#endif  // FSEMU_GAMEMODE_H_
