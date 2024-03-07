
int main(){
    ImprimirN(5);
    return 0;
}

void ImprimirN(int n)
{
    if(n>0){
        printf("%d\n", n);
        ImprimirN(n-1);
        printf("%d\n",n);
    }
}