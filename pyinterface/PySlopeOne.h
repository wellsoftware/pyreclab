#ifndef __PY_SLOPE_ONE_H__
#define __PY_SLOPE_ONE_H__

#include "pyinterface.h"


PyObject* SlopeOne_new( PyTypeObject* type, PyObject* args, PyObject* kwdict );

static
PyMethodDef SlopeOne_methods[] =
{
   { "train",   (PyCFunction)Recommender_train,   METH_VARARGS,               "train model" },
   { "test",    (PyCFunction)Recommender_test,    METH_VARARGS|METH_KEYWORDS, "test model" },
   { "predict", (PyCFunction)Recommender_predict, METH_VARARGS,               "predict user's rating for an item" },
   { NULL }
};

static PyTypeObject SlopeOneType =
{
#if PY_MAJOR_VERSION >= 3
   PyVarObject_HEAD_INIT(NULL, 0)
#else
   PyObject_HEAD_INIT( NULL )
   0,                                        /* ob_size */
#endif
   "pylibrec.SlopeOne",                       /* tp_name */
   sizeof(Recommender),                      /* tp_basicsize */
   0,                                        /* tp_itemsize */
   (destructor)Recommender_dealloc,          /* tp_dealloc */
   0,                                        /* tp_print */
   0,                                        /* tp_getattr */
   0,                                        /* tp_setattr */
   0,                                        /* tp_compare */
   0,                                        /* tp_repr */
   0,                                        /* tp_as_number */
   0,                                        /* tp_as_sequence */
   0,                                        /* tp_as_mapping */
   0,                                        /* tp_hash */
   0,                                        /* tp_call */
   0,                                        /* tp_str */
   0,                                        /* tp_getattro */
   0,                                        /* tp_setattro */
   0,                                        /* tp_as_buffer */
   Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /* tp_flags */
   "SlopeOne objects",                        /* tp_doc */
   0,                                        /* tp_traverse */
   0,                                        /* tp_clear */
   0,                                        /* tp_richcompare */
   0,                                        /* tp_weaklistoffset */
   0,                                        /* tp_iter */
   0,                                        /* tp_iternext */
   SlopeOne_methods,                          /* tp_methods */
   0,                                        /* tp_members */
   0,                                        /* tp_getset */
   0,                                        /* tp_base */
   0,                                        /* tp_dict */
   0,                                        /* tp_descr_get */
   0,                                        /* tp_descr_set */
   0,                                        /* tp_dictoffset */
   0,                                        /* tp_init */
   0,                                        /* tp_alloc */
   SlopeOne_new,                              /* tp_new */
};


#endif // __PY_SLOPE_ONE_H__

