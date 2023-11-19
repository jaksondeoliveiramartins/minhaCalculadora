#include <cs50.h>
#include <stdio.h>

int main(){
    string nome;
    nome = get_string ("Digite seu nome.");
    printf("Hello, %s !" , nome);


}
// comando para compilar a extenção=> gcc -o hello hello.c cs50.c 
// visualizar a extenção = ./hello