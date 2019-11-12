#include<stdio.h>
#include<stdlib.h>

int cost[10][10],i,j,k,n,stk[10],top,v,visit[10],visited[10];
int main()
{
    int m;
    printf("Enter no of vertices: ");
    scanf("%d",&n);
    printf("Enter no of edges:");
    scanf("%d",&m);
    printf("\n EDGES \n");
    for(k=1; k<=m; k++)
    {
        scanf("%d %d",&i,&j);
        cost[i][j]=1;
    }
    printf("Enter initial vertex to traverse from: ");
    scanf("%d",&v);
    printf("DFS ORDER OF VISITED VERTICES: ");
    printf("%d ",v);
    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=n; j>=1; j--)
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                stk[top]=j;
                top++;
            }
        v=stk[--top];
        printf("%d ",v);
        k++;
        visit[v]=0;
        visited[v]=1;
    }
}