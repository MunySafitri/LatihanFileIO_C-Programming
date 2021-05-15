#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


typedef struct Point {
    int x,y;
}Points;

int main(int argc, char* argv[]){
    Points p1={
        .x =13,
        .y=-5
    };

    Points p2;

    FILE* in;
    FILE* out;

    fopen_s(&out,"point.bin","wb");
    if(out==NULL){
        return 1;
    }

    size_t elements_written = fwrite(&p1,sizeof(Point),1,out);
    fclose(out);
    if(elements_written == 0){
        return 2;
    }

    return 0;
}