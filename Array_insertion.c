#include<stdio.h>
#include<conio.h>
# define Max 100
int insert_begin(int a[], int *n);
int insert_end(int a[],int *n);
int display(int a[],int *n);
int insert_pos(int a[], int *n);

int main()
{
   int n,i,a[Max],cho;
    printf("Enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         printf("Enter the %d th element:",i);
         scanf("%d",&a[i]);
    }
    do
    {
	    printf("---------choose options to arrays insertions");
	    printf("\nInsertion Options:\n");
	    printf("1. Insert at Beginning\n");
	    printf("2. Insert at Position\n");
	    printf("3. Insert at End\n");
	    printf("Enter your choice: ");
	    scanf("%d", &cho);
	    switch (cho)
		{
	        case 1:
	            insert_begin(a, &n);
	            break;
	        case 2:
	            insert_pos(a, &n);
	            break;
	        case 3:
	            insert_end(a, &n);
	            break;
	        default:
	            printf("Invalid choice!\n");
	            display(a,&n);
	            return 1;
	    }
	}while(cho!=1 || cho!=2 || cho!=3 || cho!=4 || cho!=5);
}
    


int insert_begin(int a[], int *n)
{
	int i,ele;
	printf("\nEnter the element to insert at begin:");
	scanf("%d",&ele);
	for(i=*n;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=ele;
	(*n)++;
	
}


int insert_end(int a[],int *n)
{
	int i,ele;
	printf("\nEnter the element to insert at end:");
	scanf("%d",&ele);
	a[*n]=ele;
    (*n)++; 
	
}

int insert_pos(int a[], int *n)
{
	int i,pos,ele;
	printf("Enter the position to insert:");
	scanf("%d",&pos);
	printf("Enter the element to insert at given position:");
	scanf("%d",&ele);
	for(i=*n;i>pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=ele;
	(*n)++;	
}


int display(int a[],int *n)
{
	int i;
	for (i=0;i<*n;i++)
	{
		printf("%d",a[i]);
	}
}






