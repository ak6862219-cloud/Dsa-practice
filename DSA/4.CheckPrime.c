//2. WAP check prime or not 
 #include <stdio.h>

int main() {
    
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    if(a<=1){
        printf("Not a prime");
    }
    int c=0;
    for(int i =2; i<a;i++){
        c++;
    }
    if(c == 0){
        printf("Not a prime");
    }else{
        printf("prime");
    }

    return 0;
}