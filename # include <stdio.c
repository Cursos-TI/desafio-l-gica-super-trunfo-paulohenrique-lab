# include <stdio.h>

int main() {

int a = 10, b = 5;

// &&(e) , ||(ou), !(negação) - segue a tabela verdade!
if( a > 0 || b > 0){
    printf("Os dois números são positivos\n");
} else {
    printf("Os dois numeros são negativos!\n");
}

if (a > 0 && b > 0) {
    printf("Os números são positivos!\n");
} else {
    printf("Então, pelo menos um número é negativo!\n");
}

if (!a){
    printf("A variável é negativa!");
} else {
    prinf("A variável é positiva!");
}


















return 0;


}








