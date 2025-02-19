/* -*- mode: C -*-  */
/*
   IGraph library.
   Copyright (C) 2006-2021  The igraph development team

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc.,  51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301 USA

*/

#ifndef PYTHON_IGRAPH_PREAMBLE_H
#define PYTHON_IGRAPH_PREAMBLE_H

#ifndef PY_IGRAPH_ALLOW_ENTIRE_PYTHON_API
#  ifndef Py_LIMITED_API
#    define Py_LIMITED_API 0x03090000
#  endif
#endif

#define PY_SSIZE_T_CLEAN
#include <Python.h>

#endif /* PYTHON_IGRAPH_PREAMBLE_H */
