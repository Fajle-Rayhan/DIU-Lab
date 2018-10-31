#include<stdio.h>
#include<string.h>
#define MAX 10
#define INF 9999
#define NIL -1
int adjacent[MAX][MAX],nov,weight[MAX][MAX],parent[MAX],distance[MAX];

int main()
{
    int i,j;
    printf("Enter Number of Vertex: ");
    scanf("%d",&nov);

    printf("Enter 1 if it is adjacent to next or enter 0 \n");
    for(i=0;i<nov;i++)
    {
        for(j=0;j<nov;j++)
        {
            printf("Adjacency between %d and %d : ",i,j);
            scanf("%d",&adjacent[i][j]);
        }
    }

    for(i=0;i<nov;i++)
    {
        for(j=0;j<nov;j++)
        {
            printf("%d\t", adjacent[i][j]);
        }
        printf("\n");
    }
}
