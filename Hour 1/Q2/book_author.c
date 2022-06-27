#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char batch[20];
    scanf("%s", batch);
    int i, j, unique = 0, count, flag;
    for(i = 0; i < strlen(batch); i++)
        batch[i] = tolower(batch[i]);
    for(i = 0; i < strlen(batch); i++){
        flag = 1;
        count = 0;
        for(j = 0; j < strlen(batch); j++){
            if(batch[i] == batch[j])
                count++;
            if(count > 1){
                flag = 0;
                break;
            }
        }
        if(flag)
            unique++;
    }
    printf("%d",unique);
    return 0;
}
