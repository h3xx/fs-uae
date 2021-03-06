#ifndef FSEMU_TITLEBAR_H_
#define FSEMU_TITLEBAR_H_

#include "fsemu/fsemu-common.h"
#include "fsemu/fsemu-mouse.h"
#include "fsemu/fsemu-render.h"

#ifdef __cplusplus
extern "C" {
#endif

void fsemu_titlebar_init(void);

void fsemu_titlebar_update(void);

// void fsemu_titlebar_set_size(int w, int h);
void fsemu_titlebar_set_width(int w);

#ifdef FSEMU_INTERNAL

#define fsemu_titlebar_log(format, ...) \
    fsemu_log("[FSEMU] [TITLE] " format, ##__VA_ARGS__)

bool fsemu_titlebar_handle_mouse(fsemu_mouse_event_t *event);

#endif  // FSEMU_INTERNAL

#ifdef __cplusplus
}
#endif

#endif  // FSEMU_TITLEBAR_H_
