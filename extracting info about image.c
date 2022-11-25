//
//  exo3.c
//  
//
//  Created by Hania Rezk on 18/11/2022.
//

#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    char c[1];
    int d;
    int z;
    FILE* f=fopen(argv[1],"r");
    fscanf(f,"%s",c);
    fscanf(f,"%d",&d);
    fscanf(f,"%d",&z);
    fclose(f);
    printf("%d\n", d);
    printf("%d\n", z);
    return 0;
}
