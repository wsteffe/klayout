
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2017 Matthias Koefferlein

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
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

#include "utHead.h"
#include "bdCommon.h"

BD_PUBLIC int strm2txt (int argc, char *argv[]);

TEST(1)
{
  std::string input = ut::testsrc ();
  input += "/testdata/gds/t10.gds";

  std::string au = ut::testsrc ();
  au += "/testdata/bd/strm2txt_au.txt";

  std::string output = this->tmp_file ();

  char *argv[] = { "x", const_cast<char *> (input.c_str ()), const_cast<char *> (output.c_str ()) };

  EXPECT_EQ (strm2txt (sizeof (argv) / sizeof (argv[0]), argv), 0);

  this->compare_text_files (output, au);
}