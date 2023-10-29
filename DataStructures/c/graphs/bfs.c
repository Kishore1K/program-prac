// Breath first Search

#include<stdio.h>
int a[10][10], visited[10], i,j , queue[10] , f=-1, r=-1, n;
void bfs(int v){

    int u;
    f=0;
    queue[++r]=v;
    printf("%d \t",v );
    visited[v]=1;

    while(f<=r){
        v= queue[f++];
        for(u=0; u<n; u++){
            if(visited[u]==0 && (A[v][u]==1)){
                queue[++r]=u;
                printf("%d", u);
                visited[u]=1;
            }
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

    bfs(source);
}