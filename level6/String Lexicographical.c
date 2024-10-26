#include<stdio.h>
#include<string.h>

int main()
{

    char a[100],b[100];
    scanf("%s %s",a,b);


    // we can use infinite loop

    int i = 0;

    // this loop always true
    while(1)
    {

        if(a[i] == '\0' && b[i] == '\0')
        {

            printf("Same\n");
            break;
        }
        else if(a[i] == '\0')
        {

            printf("A is small\n");
            break;


        }
        else
        {

            printf("B is small\n");
            break;

        }

        if(a[i] == b[i])
        {

            i++;

        }
        else if(a[i] < b[i])
        {

            printf("A is small\n");
            break;


        }
        else
        {

            printf("B is small\n");
            break;


        }

    }



    // using the function

    int val = strcmp(a,b);

    /*if(val > 0){

        printf("B Small\n");

    }else if(v<0){

        printf("A Small\n");
    }else{

        printf("Same\n");
    }
*/
    printf("%d ",val);

}



