/* 
 * $Id$
 *
 * Equivalent of <stdio.h> - standard buffered input/output.
 *
 * Created by Mateusz Loskot, mloskot@taxussi.com.pl
 *
 * Copyright (c) 2006 Taxus SI Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation 
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom 
 * the Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
 * THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * MIT License:
 * http://opensource.org/licenses/mit-license.php
 *
 * Contact:
 * Taxus SI Ltd.
 * http://www.taxussi.com.pl
 *
 */
#ifndef _WCE_STDIO_H
#define _WCE_STDIO_H    1

#if !defined(_WIN32_WCE)
# error "Only Winddows CE target is supported!"
#endif


#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */


/* Functions declarations */

int wce_rename(const char *oldfile, const char *newfile);
int wce_unlink(const char *filename);
void wce_rewind(FILE *stream);


#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif /* #ifndef _WCE_STDIO_H */
