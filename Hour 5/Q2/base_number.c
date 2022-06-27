#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
    // char code[50] = "1 3 3 5 14 20 21 18 5 _ 3 15 4 5";
    // char code[50] = "2 1 4 _ 3 1 20 @ # 469";
    // char code[50] = "1 2 3";
    char code[50];
    scanf("%[^\n]s",code);
    char code1[20][5];
    char dec_msg[20] = "";
    char temp[5] = "";
    int i, j = 0, ctr = 0;
    
    for(i=0; i<=strlen(code);i++){
        if(code[i] == ' ' || code[i] == '\0'){
            code1[ctr][j] = '\0';
            ctr++;
            j=0;
        }
        else{
            code1[ctr][j] = code[i];
            j++;
        }
    }

    for(int i = 0; i < ctr; i++){
        strcpy(temp, code1[i]);
        if(temp[0] == '_')
            strcat(dec_msg, " ");
        else if(temp[0] == '#')
            strcat(dec_msg, code1[i+1]);
        else if((code1[i-1][0] == '#') && (i > 1))
            continue;
        else if(isdigit(temp[0])){
            if(strlen(temp) > 1){
                char temp2 = (64 + (temp[0]-'0')*10 + (temp[1] - '0'));
                strncat(dec_msg, &temp2, 1);
            }
            else{
                char temp3 = (64 + temp[0] - '0');
                strncat(dec_msg, &temp3, 1);
            }
        }
        else
            strcat(dec_msg, temp);
    }
    printf("%s", dec_msg);
}