#include <Python.h>

int set_long(PyLongObject* o, long new_value, size_t digit) {
    o->ob_digit[digit] = new_value;
    return 0;
}
