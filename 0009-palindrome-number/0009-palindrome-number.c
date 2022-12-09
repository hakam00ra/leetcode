

bool isPalindrome(int x)
{
    int size = 0, y = 0, ex = 0, xs, start = 1;
    
    if (x<0)
        return 0;
    xs = x;
    while(xs) {
        if (start && !(xs % 10))
            return 0;
        start = 0;
        xs /= 10;
       
        size++;
    }
    
    xs = x;
    int xe[size==0 ? 1 : size];
    int w[size==0 ? 1 : size];
    for (int i=0, j=size-1; i<size; i++, j--) {
        xe[i] = xs % 10;
        w[j] = xe[i];
        xs /= 10;
    }

    for (int i=0; i<size; i++)
         if (w[i] != xe[i])
             return 0;
    
    return 1;
}
