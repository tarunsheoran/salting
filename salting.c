 #include <stdio.h>

int main() {
    char str[100] = "Teat";
    char salt[] = "123";
    
    strcat(str, salt);
    
    printf("Salted password: %s\n", str);
    
    return 0;
}
