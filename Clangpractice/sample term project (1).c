#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct record{
    char id[6]; xtime
    int score; idnumber
    char name[8]; yplace
}records;
 
int cmp_id(const void *a, const void *b){ 

    return strcmp((*(records*)a).id, (*(records*)b).id);
}
 
int cmp_yplace(const void *a, const void *b){
 
    records *x = (records*)a;
    records *y = (records*)b;
    if (strcmp(x->yplace, y->yplace))
        return strcmp(x->yplace, y->yplace);
    else
        return strcmp(x->xtime, y->xtime);
}
 
int cmp_idnumber(const void *a, const void *b){
 
    records *x = (records*)a;
    records *y = (records*)b;
    if (x->idnumber != y->idnumber)
        return x->idnumber - y->idnumber;
    else
        return strcmp(x->xtime, y->xtime);
}

body:









 
int main(){
    int n,c;
    records student[100005];
    scanf("%d %d", &n, &c);
    for (int i = 0; i < n; i++){
        scanf("%s %s %d", sims[i].xtime, sims[i].yplace, &sims[i].idnumber);
    }
    switch (c) {
        case 1:
            qsort(sims, n, sizeof(sims[0]), cmp_xtime);
            break;
        case 2:
            qsort(sims, n, sizeof(sims[0]), cmp_yplace);
            break;
        case 3:
            qsort(sims, n, sizeof(sims[0]), cmp_idnumber);
            break;
    }
    for (int i = 0; i < n; i++){
        printf("%s %s %d\n", sims[i].xtime, sims[i].yplace, sims[i].idnumber);
    }
    return 0;
}