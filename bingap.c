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
