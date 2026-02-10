#include <stdio.h>
int main() {
    int c,i;
    int freq[128]={0};
    while((c=getchar())!=EOF){
        if(c>=0 && c<128)
            freq[c]++;
    }
    for(i=0; i<128; i++){
        if(freq[i]>0){
            printf("%c",i);
            for(int j=0; j<freq[i]; j++){
                putchar('*');
            }
            printf("%d\n",freq[i]);
        }
    }
    return 0;
}