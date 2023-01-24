// #include<stdio.h>

int main(){
    float a = 0.723 , c;
    float b = a * 2; 
    int i=0;
    char str[100];
    while (b != 1)
    {
        if(b > 1)
        {
            str[i] = 1 + '0';
            c = b - 1;
        }  else if (b < 1)
        {
            str[i] = 0 + '0';
            c = 1 - b;
        }
        if (b == 1){

        }
        b = c * 2;
        i++;
    }
    str[i] = 1 + '0';
    printf("%s", str);
}