// The largest number is moved to the end
for (i=0; i<N-1; i++) {
    for (j=0; j<N-i-1; j++) {
        if (a[j]>a[j+1]) {
            t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
        }
    }
}
