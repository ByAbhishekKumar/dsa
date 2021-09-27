int strToInt(char x[]){
    int i=0;
    while(*x){

            i = i<<3 + i<<1 + *x - '0';

        x++;
    }
    return i;
}