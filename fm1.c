#include<stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("file_data.txt","w+");

    fprintf(fp,"Welcome to skill qode, Decode your skill hear...\n");

    fputs("Your are entering lurning c languge now...\n",fp);

    fputs("We are enjoying every thing...\n",fp);

    fclose(fp);

    return 0;
}