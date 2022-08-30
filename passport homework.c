//Wap to enter informatioin of 10 persons with their names age and address who are applying  for passport in  passport department and display according to requirement below
// -> using array
// display record acc. to teir names
// display highest age of perso
// display average age of a person
// wap to enter  5 student's info which has namea marks and roll number using structure and display the result.
 #include<stdio.h>
 #include<string.h>
 struct passport
 {
    char nm[50];
    int ag;
    char ad[100];
 };
 int main()
 {
    struct passport h[100];
    int i, n=3;
    for(i=1; i<=n; i++)
    {
        printf("Enter your name: ");
        scanf("%s",&h[i].nm);
        printf("Enter your age: ");
        scanf("%d",&h[i].ag);
        printf("Enter your address: ");
        scanf("%s",&h[i].ad);
        printf("\n");
    }
    struct passport temp;
    int j;
    
        for(i=1; i<=n-1; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(strcmp(h[i].nm,h[j].nm)>0)
                {
                    temp=h[i];
                    h[i]=h[j];
                    h[j]=temp;
                }
            }
        }
        for(i=1; i<=n; i++)
        {
            printf(" THE OUTPUT IS:\nYour name is %s\n your age is %d\n your address is %s\n\n",h[i].nm,h[i].ag, h[i].ad);
        }

        int high=h[1].ag;
        for (  i = 1; i <=n; i++)
        {
            if(h[i].ag > high)
            {
                high=h[i].ag;
            }
        }
        printf("The highest age is:%d ",high);


        float avg=0;
        for(i=1; i<=n; i++)
        {
            avg= avg+h[i].ag;
        }
        avg=avg/n;
        printf("The average age is:%f",avg);

return 0;
 }