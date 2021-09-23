#include <stdio.h>
#include <stdlib.h>
int main()
{

  // file= sourece.txt
  // file1= Destination.txt

    FILE *file,*file1;
    char ch[1000];
 
    int number=0;

    file = fopen("Source.txt", "r");
    file1=fopen("Destination.txt","w");


    if (file == NULL)
    {
        printf("File is not exist");
    }
    else
    {
        while (!feof(file))
        {
              ch[number]=fgetc(file);
            //  printf("The file Text is: %c",ch[number]);
             number++;

        }

       
        for (int  i = 0; i < number-1 ; i++)
        {
             fputc(ch[i],file1);
        }
     

    
        printf("Texts are successfully copy"); 
       
       

      fclose(file);
      fclose(file1);


    }

    return 0;
}
