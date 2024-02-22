/* Test of single character case mapping functions.
   Copyright (C) 2007-2023 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

#include "unicase.h"

#include <string.h>

#include "macros.h"

/* Pair of Unicode characters.  */
typedef struct { ucs4_t ch; ucs4_t value; } pair_t;

/* Characters and their mapping values, ignoring no-op mappings, in increasing
   order.  */
static const pair_t mapping[] =
  {
