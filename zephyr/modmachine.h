#ifndef __MICROPY_INCLUDED_ZEPHYR_MODMACHINE_H__
#define __MICROPY_INCLUDED_ZEPHYR_MODMACHINE_H__

#include "py/obj.h"

extern const mp_obj_type_t machine_pin_type;

MP_DECLARE_CONST_FUN_OBJ_0(machine_info_obj);

typedef struct _machine_pin_obj_t {
    mp_obj_base_t base;
    struct device *port;
    uint32_t pin;
} machine_pin_obj_t;

#endif // __MICROPY_INCLUDED_ZEPHYR_MODMACHINE_H__
