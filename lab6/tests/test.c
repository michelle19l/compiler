int f(int a,int b)
{
    printf("%d",a);
    int i=a*2+b;
    printf("%d",i);
    return i;
}
int main()
{
    int a=1;
    a=f(1,2);
    printf("%d",a);
}

