/*Enter the Address for 5 People {House No, Block No, City, State}*/

#include <stdio.h>
#include <string.h>

struct Address
{
    int house_no;
    char block[100];
    char city[100];
    char state[100];    
};

int main()
{
    struct Address s[5];
    

    for(int i=0;i<5;i++)
    {
        printf("\nEnter the House No: ");
        scanf("%d",&s[i].house_no);
        printf("\nEnter the Block No: ");
        scanf("%s",s[i].block);
        printf("\nEnter the City: ");
        scanf("%s",s[i].city);
        printf("\nEnter the State: ");
        scanf("%s",s[i].state);
    }

    for(int i=0;i<5;i++)
    {
        printf("\nThe Residents Adresses are: \n");
        printf("%d Resident House No: %d\n",i, s[i].house_no);
        printf("%d Resident Block No: %s\n",i, s[i].block);
        printf("%d Resident City: %s\n",i, s[i].city);
        printf("%d Resident State: %s\n",i, s[i].state);

    }

    return 0;
}