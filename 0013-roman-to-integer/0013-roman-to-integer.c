

int romanToInt(char * s){
    int sum = 0;
    int value[100];
    value['I'] = 1;
    value['V'] = 5;
    value['X'] = 10;
    value['L'] = 50;
    value['C'] = 100;
    value['D'] = 500;
    value['M'] = 1000;
    value['\0'] = 0;
        
    for (int i=0; s[i] != '\0'; i++) {
        if (value[s[i]] < value[s[i+1]])
            sum -= value[s[i]];
        else
            sum += value[s[i]];
    }
    return sum;
}
