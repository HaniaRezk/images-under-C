//
#include <stdio.h>
#include<stdlib.h>
/*void saveimage(int h, int l, int vmax, char *nomfichier, int matrix[][l]){
    FILE* f=fopen(nomfichier, "w");
    fprintf(f,"%s\n", "P2");
    fprintf(f,"%d ",l);
    fprintf(f,"%d\n", h);
    fprintf(f,"%d\n", vmax);
    for (int i=1; i<l-1; i++){
      for (int j=1; j<h-1; j++){
          fprintf(f,"%d ", (matrix[i-1][j-1]+matrix[i-1][j]+matrix[i][j-1]+matrix[i+1][j+1])/4);
          }
       }
    fclose(f);
    }
*/
void saveimage(int h, int l, int vmax, char *nomfichier, int matrix[][700]){
    FILE* f=fopen(nomfichier, "w");
    fprintf(f,"%s\n", "P2");
    fprintf(f,"%d ",l);
    fprintf(f,"%d\n", h);
    fprintf(f,"%d\n", vmax);
    for (int i=1; i<l-1; i++){
      for (int j=1; j<h-1; j++){
          fprintf(f,"%d ", (matrix[i][j+1]+matrix[i-1][j]+matrix[i][j-1]+matrix[i+1][j])/4);
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
        for (int j=0; j<hauteur; j++){
            printf("%d  ", matrix[i][j]);
        }
    }
    char *c1=argv[1];
    int j=0;
    for (int i=0; c1[i]!='\0'; i++){
        j+=1;
    }
    char nom[j+4];
    for (int i=0; i<j-4; i++){
        nom[i]=c1[i];
    }
    nom[j-4]='-';
    nom[j-3]='i';
    nom[j-2]='n';
    nom[j-1]='v';
    nom[j]='.';
    nom[j+1]='p';
    nom[j+2]='g';
    nom[j+3]='m';

    
    
   // printf("%s", nom);

    saveimage(hauteur, largeur, valeurmax, nom , matrix);
            
    return 0;
}

