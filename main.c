/* @file main.c
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

#include <stdio.h>

extern int binary_gap(int N);

int main()
{
    const int num_elements = 10;
    int input_array[10] = { 0, 1, 5, 8, 10, 457, 9, 7, 40, 12546 };
    int longest_seq[10] = { 0 };

    for (int index = 0; index < num_elements; index++) {
        longest_seq[index] = binary_gap(input_array[index]);
        printf("Longest Sequence of %d is : %d\n", input_array[index], longest_seq[index]);
    }

    return 0;
}
