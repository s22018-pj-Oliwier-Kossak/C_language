#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);
int min(int x, int y);
int max(int x, int y);


int main(){
    int x = 0, y = 0;
    int choice = 0;
    
    
    while(choice != 8){
        printf("1. Add \n");
        printf("2. Substraction \n");
        printf("3. Multiplication \n");
        printf("4. Divison \n");
        printf("5. Module \n");
        printf("6. Min \n");
        printf("7. Max \n");
        printf("8. QUIT\n");
        printf("Select an action: ");
        scanf("%d",&choice);
        printf("Enter two numbers:\n");
        scanf("%d %d",&x,&y);

        switch (choice)
        {
            case 1:
                printf("%d",add(x,y));
                break;
            case 2:
                printf("%d",sub(x,y));
                break;
            case 3:
                printf("%d",mul(x,y));
                break;
            case 4:
                printf("%d",div(x,y));
                break;
            case 5:
                printf("%d",mod(x,y));
                break;
            case 6:
                printf("%d",min(x,y));
                break;
            case 7:
                printf("%d",max(x,y));
                break;
            
            default:
                break;
        }
        printf("\n");
        printf("\n");
    }
    
    
}

int add(int x, int y){
    int result = x + y;
    return result ;
}

int sub(int x, int y){
    int result = x - y;
    return result;
}

int mul(int x, int y){
    int result = x * y;
    return result ;
}

int div(int x, int y){
    int result = x / y;
    return result ;
}
int mod(int x, int y){
    int result = x % y;
    return result ;
}

int min(int x, int y){
    int result = x<y?x:y;
    return result ;
}

int max(int x, int y){
    int result = x>y?x:y;
    return result ;
}