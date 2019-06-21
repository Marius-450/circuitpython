/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Dan Halbert for Adafruit Industries
 * Copyright (c) 2018 Artur Pacholec
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_SHARED_BINDINGS_BLEIO_CENTRAL_H
#define MICROPY_INCLUDED_SHARED_BINDINGS_BLEIO_CENTRAL_H

#include "common-hal/bleio/Central.h"
#include "common-hal/bleio/Service.h"

extern const mp_obj_type_t bleio_central_type;

extern void common_hal_bleio_central_construct(bleio_central_obj_t *self, bleio_address_obj_t *address);
extern void common_hal_bleio_central_connect(bleio_central_obj_t *self, mp_float_t timeout);
extern void common_hal_bleio_central_disconnect(bleio_central_obj_t *self);
extern mp_obj_t common_hal_bleio_central_get_remote_services(bleio_central_obj_t *self);

#endif // MICROPY_INCLUDED_SHARED_BINDINGS_BLEIO_CENTRAL_H
