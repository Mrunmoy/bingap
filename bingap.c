/* @file bingap.c
 * @author Mrunmoy Samal
 * @date 26 01 2019
 * @brief Fill in brief description here.
 *
 *  LICENSE:-
 *  The MIT License (MIT)
 *  Copyright (c) 2018 Mrunmoy Samal
 *
 *  Permission is hereby granted, free of charge, to any person
 *  obtaining a copy of this software and associated documentation
 *  files (the "Software"), to deal in the Software without
 *  restriction, including without limitation the rights to use,
 *  copy, modify, merge, publish, distribute, sublicense, and/or
 *  sell copies of the Software, and to permit persons to whom
 *  the Software is furnished to do so, subject to the following
 *  conditions:
 *
 *  The above copyright notice and this permission notice shall
 *  be included in all copies or substantial portions of the
 *  Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 *  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 *  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
 *  OR OTHER DEALINGS IN THE SOFTWARE.
 */

int binary_gap(int N) {
    int max = 0;
    int found = 0;
    int bin_gap = 0;
    // as long as the number has any 1's
    while (N) {
        if (N & 0x01) {
            found = 1; // find 'a' 1
            if (max < bin_gap) {
                // we may or may not have found a 1 before
                // it doesn't matter - why ? look at the comment in the else section

                // save the max gap
                max = bin_gap;
            }
            // found a 1, reset bin_gap, so we can count again when we find a 0
            bin_gap = 0;
        } else {
            // if found = 0
            // so bin_gap would be counting nothing
            // if found = 1
            // bin_gap will count 0s between 1s
            bin_gap += found;
        }
        N >>= 1;
    }
    return max;
}

