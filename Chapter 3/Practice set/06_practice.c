// 97 - 122 = a - z

# include <stdio.h>

int main(){
    char ch ; 
    printf("Enter the character : ");
    scanf("%c", &ch);

    if(ch <= 122 && ch >= 97){
        printf("The given character is lower case");
    }
    else{
        printf("The given character is not lower case");
    }
return 0;
}
