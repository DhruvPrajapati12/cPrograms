#include <stdio.h>
void main()
              {
                             FILE *fp1,*fp2,*fp3;
                             int i,c;
                             fp1=fopen("all.txt","w");
                             for(i=0;i<100;i++)
                                           {
                                                          fprintf(fp1,"%d\n",i+1);
                                           }
                             fclose(fp1);
                             fp1=fopen("all.txt","r");
                             fp2=fopen("odd.txt","w");
                             fp3=fopen("even.txt","w");
                             do
                             {
                                                          fscanf(fp1,"%d",&c);
                                                          if(c%2==0)
                                                          fprintf(fp3,"%d\n",c);
                                                          else
                                                          fprintf(fp2,"%d\n",c);
                                                          
                             }while(!feof(fp1));
                             
                             fclose(fp1);
                             fclose(fp2);
                             fclose(fp3);
              }

