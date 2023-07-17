void print_all_unique(int A[],int size)
{
    int i,j;
    sort(A,size);
    i=0;
    j=1;

    while(i<=size-2)
    {
        printf("%d ",A[i]);
        while(A[i]==A[j])
            j++;
        i=j;
        j=j+1;
    }
}