#include<stdio.h>
#include<string.h>
#define MAX 10
#define INF 9999
#define NIL -1

int adjacent[MAX][MAX],weight[MAX][MAX],parent[MAX],distance[MAX],nov, INT S[MAX];


void enqueue(int item)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow \n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear = rear + 1;
        queue[rear] = item;
    }
}


void DIJKSTRA(weight[i],[j], int source){
    INITIALIZE_SIGLE_SOURCE(int source);
    S = 0;
    for(i=0;i<nov;i++){

    }

    while(!isEmpty())
    {
        u = EXTRACT_MIN(Q);
        for(i=0;i<nov;i++){
            S = S+u;
            for(i=0;i<nov;i++){
                RELAX(int u, int v, weight[i][j]);
            }
        }
    }
}


void INITIALIZE_SIGLE_SOURCE(int source){
    int i, v;
    for(i=0;i<nov;i++){
        distance[i] = INF;
        parent[i]=NIL;
    }
    source=0;
}


void RELAX(int u,int v, weight[i][j]){
    for(i=0;i<nov;i++){
        if (distance[u]>distance[v]+weight[i][j]){
            distance[v]=distance[u]+weight[i][j];
            parent[i] = u;
        }
    }
}

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



    //Weight Input
    printf("Enter the Weight between Vertex: ");
    scanf("%d",&nov);

    printf("Enter Weight Between Two Vertex \n");
    for(i=0;i<nov;i++)
    {
        for(j=0;j<nov;j++)
        {
            printf("Weight between %d and %d : ",i,j);
            scanf("%d",&weight[i][j]);
        }
    }

    for(i=0;i<nov;i++)
    {
        for(j=0;j<nov;j++)
        {
            printf("%d\t", weight[i][j]);
        }
        printf("\n");
    }

    DIJKSTRA(weight[i],[j], int source);
    printinfo();

    return 0;
}


void printinfo()
{
    int i;
    printf("\n========= Distance =============");
    for(i=0;i<nov;i++)
    {
        printf("%d\t",distance[i]);
    }
    printf("========= Parents =============");
    for(i=0;i<nov;i++)
    {
        printf("%d\t",parent[i]);
    }
}
