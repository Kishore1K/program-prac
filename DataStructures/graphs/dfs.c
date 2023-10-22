#include<stdio.h>
int a[10][10], visited[10], n;

void dfs(int v){
    int u;
    printf("%d", v);
    visited[v]=1;
    for(u=0;  u<n; u++ ){
        if(visited[u]==0 && (a[v][u]==1)){
            dfs(u);
        }
    }
}

int main(){
    printf("Enter the number of Vertices\n");
    scanf("%d", &n);
    printf("Enter the Nodes\n");
    for(int i=0, i<n; i++){
        for(int j=0;j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered The matrix\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++){
        visited[i]=0;
    }
    int source;
    printf("Enter the source\n");
    scanf("%d", &source);

    dfs(source);
}