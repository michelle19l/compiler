/*
I'm level 1 test.
*/
// void main() { 

//     int a, s;
//     a = 1;
//     s = 0;
//     char ch;
//     scanf("%c", &ch);
//     printf("%c", ch);
//     while(a>0 && a<=10 || a%100==10) {
//         a -= 1;
//         a = 10;
//         s += a;
//         if(s > -10) {
//         printf("result is: %d\n", s);
//         int b;
//         b = 10;
//         int i;
//         for(i=0; i<b; i+=1) {
//         printf("Have fun: %d\n", i);
//         } 
//         }
//     } 
// }
// No more compilation error.

// #include<stdio.h>
int f(int a,int b)
{
    if(a==0)
        {return b;}
    
    return f(a-1,b-1);
}
int s(){
    int a;
    a = 0;
    int b;
    b = 0;
    while (a < 100) {
    if (a == 5) {
        b = 25;
    }else {
        if (a == 10) {
        b = 42;  
        }else {
            b = a * 2;
        }
    }
    a = a + 1;
    } 
    printf("%d\n",a);
    printf("%d\n\n",b); 
    return 0;
}
int h(){
    int a;
    int b;
    b=3;
    a=b;
    printf("%d\n",a);
    printf("%d\n\n",b);
    return 0;
}
int main()
{
    int a=3;
    int b=10;
    int c=f(a,b);
    printf("%d\n",c);
    s();
    h();
    int m=0x123;
    int t=0123;
    printf("%d\n%d\n",m,t);
    return 0;
}