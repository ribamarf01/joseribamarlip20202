#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef enum {LIP, Compiladores, Paralela} Disciplina;
typedef enum {CC, ES, EC, RC, DD} Curso;
typedef enum {NAO, SIM} Consolidado;
typedef union {
    float media;
    float notas[3];
} Avaliacao;

typedef struct {
    char nome[40];
    Disciplina disciplina;
    Curso curso;
    Consolidado consolidado;
    Avaliacao avaliacao;
} Estudante;

bool comparaEstudante(Estudante a, Estudante b);

int main(int argc, char *argv[]) {
    Estudante a = { .nome = "Joao Marcelo", 
                    .disciplina = Paralela, 
                    .curso = CC , 
                    .avaliacao.media = 7.0 , 
                    .consolidado = SIM };
    Estudante b = { .nome = "Joao Marcelo", 
                    .disciplina = Paralela, 
                    .curso = CC , 
                    .avaliacao.notas = {7.0, 8.0, 6.0} , 
                    .consolidado = NAO };	
                            
    printf("%s %d %d %.2f %d\n", a.nome, 
                                a.disciplina, 
                                a.curso, 
                                a.avaliacao.media, 
                                a.consolidado);
    printf("%s %d %d %.2f %d\n", b.nome, 
                                b.disciplina, 
                                b.curso, 
                                (b.avaliacao.notas[0] + 
                                b.avaliacao.notas[1] + 
                                b.avaliacao.notas[2])/3.0, 
                                b.consolidado) ;
                                
    if (comparaEstudante(a, b)) {
        printf("a e b iguais.\n");
    } else {
        printf("a e b diferentes.\n");
    }
                                
    Estudante c = { .nome = "Maria do Carmo", 
                    .disciplina = Compiladores, 
                    .curso = ES , 
                    .avaliacao.media = 8.0 , 
                    .consolidado = SIM };
    Estudante d = { .nome = "Francisco de Assis", 
                    .disciplina = LIP, 
                    .curso = EC , 
                    .avaliacao.notas = {2.0, 2.0, 6.0} , 
                    .consolidado = NAO };	
                            
    printf("%s %d %d %.2f %d\n", c.nome, 
                                c.disciplina, 
                                c.curso, 
                                c.avaliacao.media, 
                                c.consolidado);
    printf("%s %d %d %.2f %d\n", d.nome, 
                                d.disciplina, 
                                d.curso, 
                                (d.avaliacao.notas[0] + 
                                d.avaliacao.notas[1] + 
                                d.avaliacao.notas[2])/3.0, 
                                d.consolidado) ;
                            
    if (comparaEstudante(c, d)) {
        printf("c e d iguais.\n");
    } else {
        printf("c e d diferentes.\n");
    }
    return 0;
}

bool comparaEstudante(Estudante a, Estudante b) {

    if(strcmp(a.nome, b.nome) != 0) return false;
    if(a.disciplina != b.disciplina) return false;
    if(a.curso != b.curso) return false; 
    //if(a.consolidado != b.consolidado) return false;
    if(  a.avaliacao.media == b.avaliacao.media ||
         a.avaliacao.media == ((b.avaliacao.notas[0] + b.avaliacao.notas[1] + b.avaliacao.notas[2]) / 3) ||
         ((a.avaliacao.notas[0] + a.avaliacao.notas[1] + a.avaliacao.notas[2]) / 3) == ((b.avaliacao.notas[0] + b.avaliacao.notas[1] + b.avaliacao.notas[2]) / 3) || 
         ((a.avaliacao.notas[0] + a.avaliacao.notas[1] + a.avaliacao.notas[2]) / 3) == b.avaliacao.media) return true;

    return true;

}