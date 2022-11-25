//
//  exo4.c
//  
//
//  Created by Hania Rezk on 18/11/2022.
//
#include <stdio.h>
#include<stdlib.h>
void saveimage(int h, int l, int vmax, char *nomfichier, int matrix[][700]){
    FILE* f=fopen(nomfichier, "w");
    fprintf(f,"%s\n", "P2");
    fprintf(f,"%d ",l);
    fprintf(f,"%d\n", h);
    fprintf(f,"%d\n", vmax);
    for (int i=0; i<l; i++){
      for (int j=0; j<h; j++){
           fprintf(f,"%d ", matrix[i][j]);
       }
    }
    fclose(f);
}


int main(int argc, char *argv[]){
    char c[3];
    int largeur=700;
    int hauteur=700;
    int valeurmax;
    int matrix[largeur][hauteur];
        FILE* f=fopen(argv[1],"r");
        fscanf(f,"%s",c);
        fscanf(f,"%d",&largeur);
        fscanf(f,"%d",&hauteur);
        fscanf(f,"%d",&valeurmax);
    for (int i=0; i<largeur; i++){
        for (int j=0; j<hauteur ; j++){
            fscanf(f,"%d",&matrix[i][j]);
        }
    }
        fclose(f);
        printf("%d\n", largeur);
        printf("%d\n", hauteur);
        printf("%d\n", valeurmax);
    for (int i=0; i<largeur; i++){
        for (int j=0; j<hauteur ; j++){
            printf("%d  ", matrix[i][j]);
        }

    }
    saveimage(hauteur, largeur, valeurmax, "hello7.pgm", matrix);
            
    return 0;
}
