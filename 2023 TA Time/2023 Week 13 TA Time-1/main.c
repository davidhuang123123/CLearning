#include <stdio.h>
#include <stdlib.h>
int k,n;
int arr[15];

void printarr(){
    for(int i=1;i<k;i++) printf("%d ",arr[i]);
    printf("%d\n",arr[k]);
}

void findseq(int len,int startIndex){
    if(len==k+1){
        printarr();
        return;
    }
    for(int i=startIndex;i<=n;i++){
        arr[len]=i;
        findseq();
    }
}
int main()
{
    scanf("%d %d",&k,&n);
    findseq(1,1);
    return 0;
}
