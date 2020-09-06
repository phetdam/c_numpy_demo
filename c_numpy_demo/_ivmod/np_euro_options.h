/**
 * @file np_euro_options.h
 * @brief Declarations for functions defined in np_euro_options.c
 */

#ifndef NP_EURO_OPTIONS_H

#ifndef PY_SSIZE_T_CLEAN
#define PY_SSIZE_T_CLEAN
#endif

#include "Python.h"

PyObject *_implied_vol_np(PyObject *self, PyObject *args);
PyObject *_black_price_np(PyObject *self, PyObject *args);
PyObject *_bachelier_price_np(PyObject *self, PyObject *args);

#endif /* NP_EURO_OPTIONS_H */