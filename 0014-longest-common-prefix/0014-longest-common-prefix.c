

char * longestCommonPrefix(char ** strs, int strsSize){
   
   // printf("%c\n", strs[2][1]);
  //  printf("%s\n", *(strs+1));
  //  printf("%c\n", *(strs[2]+3));
   // printf("%d\n", strsSize);
    int j = 0;
    int min = 0;
    int i = 0;
    int si = 0;
    int min1 = 0;

    for (i=0;i<strsSize;i++) {
        j = 0;
        while (*(strs[i]+j) != '\0') {
            j++;
        }
        if (i==0)
            min = j;
        if (j < min)
            min = j;
    } 
    

    for (i=0;i<min;i++) {
        for (j=1;j<strsSize;j++) {
            if (strs[0][i]!=strs[j][i]){
                si--;
                min = 0;
                break;
            }

        }
    si++;
    }
    
    char* s = calloc(si+1,sizeof(char));
    s[si] = '\0';
    for(int i = 0 ; i < si ; i++)
        s[i] = strs[0][i];

    return s;
}