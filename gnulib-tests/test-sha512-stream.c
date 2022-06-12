/*
 * Copyright (C) 2018-2022 Free Software Foundation, Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

#include "sha512.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "macros.h"

#define TESTFILE "test-sha512.data"
#include "test-digest.h"

int
main (void)
{
  /* Test sha384_stream.  */
  test_digest_on_files (sha384_stream, "sha384_stream", 48,
                        "\x38\xb0\x60\xa7\x51\xac\x96\x38\x4c\xd9\x32\x7e\xb1\xb1\xe3\x6a\x21\xfd\xb7\x11\x14\xbe\x07\x43\x4c\x0c\xc7\xbf\x63\xf6\xe1\xda\x27\x4e\xde\xbf\xe7\x6f\x65\xfb\xd5\x1a\xd2\xf1\x48\x98\xb9\x5b",
                        "\xd5\x1d\x28\xd0\x14\x1e\x56\xf6\x92\x95\x2e\xa1\x48\x61\x89\x8e\x2b\x41\x7b\x92\x28\x31\xe0\xf4\xbc\xdb\xc3\x26\xa7\xfe\x1e\x9d\x95\x63\x18\x2e\x83\xd3\xa8\xaf\x66\xf6\x85\x36\xe0\xd4\x2b\x88",
                        "\xab\x32\x29\xa1\xc8\x43\xce\x38\x85\x93\xb3\xa6\x7f\x5a\x36\xdc\xda\xf2\xac\x33\x22\x80\xee\xbc\x5b\x1b\x70\x8b\x9b\x96\x4b\xc1\x75\x60\x00\xae\xdc\xfd\x60\x70\x24\x7f\x0b\x8b\x3a\x89\xd3\xbb");

  /* Test sha512_stream.  */
  test_digest_on_files (sha512_stream, "sha512_stream", 64,
                        "\xcf\x83\xe1\x35\x7e\xef\xb8\xbd\xf1\x54\x28\x50\xd6\x6d\x80\x07\xd6\x20\xe4\x05\x0b\x57\x15\xdc\x83\xf4\xa9\x21\xd3\x6c\xe9\xce\x47\xd0\xd1\x3c\x5d\x85\xf2\xb0\xff\x83\x18\xd2\x87\x7e\xec\x2f\x63\xb9\x31\xbd\x47\x41\x7a\x81\xa5\x38\x32\x7a\xf9\x27\xda\x3e",
                        "\x02\x0d\xa0\xf4\xd8\xa4\xc8\xbf\xbc\x98\x27\x40\x27\x74\x00\x61\xd7\xdf\x52\xee\x07\x09\x1e\xd6\x59\x5a\x08\x3e\x0f\x45\x32\x7b\xbe\x59\x42\x43\x12\xd8\x6f\x21\x8b\x74\xed\x2e\x25\x50\x7a\xba\xf5\xc7\xa5\xfc\xf4\xca\xfc\xf9\x53\x8b\x70\x58\x08\xfd\x55\xec",
                        "\x38\x34\x58\xf3\xde\x68\x70\x33\x0c\xa4\xd4\x71\x4d\x0f\x41\xc5\xed\xc9\xf4\x67\x3e\x19\x0f\x87\x2b\x53\x72\x00\xa8\x35\x73\xf7\x0b\xf1\xf2\x0d\x9a\xa8\xd6\x08\x65\x2f\xe2\x28\xbd\x2d\x0c\xd5\xd6\xd4\xd3\xb2\x84\x3e\x32\x32\x5d\x62\x54\x7b\x39\xfd\x47\x04");

  return 0;
}
