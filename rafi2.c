#include<stdio.h>
#include<string.h>

int main()
{
    loop1:
     system("COLOR 17");
    int search, gend, male_age, female_age;
    float male_height,male_weight,female_height,female_weight,bmi;

     printf("---------------------------------------------------------------------------------------------------------------------");
    printf("\t\t\t\t\t\t\tPLAN YOUR DIET\n ");
    printf("---------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");



            printf("Type '1' for Male or Type '2' for Female. \n");
            printf("Enter Your Choice: ");
            scanf("%d", &gend);

            switch(gend)
            {
                case 1:
                        printf("You Entered the Diet Manual for Male.\n");
                        printf("Enter an Age: ");
                        scanf("%d", &male_age);


                        if((male_age >= 10) && (male_age <=25 ))
                        {
                            printf("Enter a height: ");
                            scanf("%f", & male_height);


                                     printf("Enter a weight: ");
                                     scanf("%f", &male_weight);
                                     printf("\n\n\n");




                                          bmi=male_weight/(male_height* male_height);

                                              if (bmi<=1.85)
                                              {
                                                  printf("UNDER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data1();
                                                  }
                                              }

                                              else if (bmi<=2.49)
                                              {
                                                  printf("NORMAL");
                                                  printf("\n\n\n");
                                                  {
                                                      data2();
                                                  }

                                              }
                                              else if (bmi<=2.99)
                                              {
                                                  printf("OVER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data3();
                                                  }
                                              }
                                              else
                                              {
                                                  printf("OBESITY");
                                                  printf("\n\n\n");
                                                  {
                                                      data4();
                                                  }
                                              }
                                              break;





                        }
                         else if((male_age >= 26) && (male_age <=40 ))
                        {
                            printf("Enter a height: ");
                            scanf("%f", & male_height);


                                     printf("Enter a weight: ");
                                     scanf("%f", &male_weight);
                                     printf("\n\n\n");




                                          bmi=male_weight/(male_height* male_height);

                                              if (bmi<=1.85)
                                              {
                                                  printf("UNDER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data5();
                                                  }
                                              }

                                              else if (bmi<=2.49)
                                              {
                                                  printf("NORMAL");
                                                  printf("\n\n\n");
                                                  {
                                                      data6 ();
                                                  }

                                              }
                                              else if (bmi<=2.99)
                                              {
                                                  printf("OVER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data7();
                                                  }
                                              }
                                              else
                                              {
                                                  printf("OBESITY");
                                                  printf("\n\n\n");
                                                  {
                                                      data8 ();

                                                  }
                                              }
                                              break;
                        }
                        else if ((male_age >= 41) && (male_age <=60 ))
                        {
                            printf("Enter a height: ");
                            scanf("%f", & male_height);


                                     printf("Enter a weight: ");
                                     scanf("%f", &male_weight);
                                     printf("\n\n\n");




                                          bmi=male_weight/(male_height* male_height);

                                              if (bmi<=1.85)
                                              {
                                                  printf("UNDER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data9();
                                                  }
                                              }

                                              else if (bmi<=2.49)
                                              {
                                                  printf("NORMAL");
                                                  printf("\n\n\n");
                                                  {
                                                      data10 ();
                                                  }

                                              }
                                              else if (bmi<=2.99)
                                              {
                                                  printf("OVER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data11();
                                                  }
                                              }
                                              else
                                              {
                                                  printf("OBESITY");
                                                  printf("\n\n\n");
                                                  {
                                                      data12();
                                                  }
                                              }
                                              break;

                              }
                              else
                              {
                                  printf ("It is an error search '%d' search again...... \n\n",male_age);
                              }
                              break;


                case 2:
                        printf("You Entered the Diet Manual for Female.\n");
                        printf("Enter an Age: ");
                        scanf("%d", &female_age);


                        if((female_age >= 10) && (female_age <=25 ))
                        {
                            printf("Enter a height: ");
                            scanf("%f", & female_height);


                                     printf("Enter a weight: ");
                                     scanf("%f", &female_weight);
                                     printf("\n\n\n");




                                          bmi=female_weight/(female_height* female_height);

                                              if (bmi<=1.85)
                                              {
                                                  printf("UNDER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data13();
                                                  }
                                              }

                                              else if (bmi<=2.49)
                                              {
                                                  printf("NORMAL");
                                                  printf("\n\n\n");
                                                  {
                                                      data14();
                                                  }

                                              }
                                              else if (bmi<=2.99)
                                              {
                                                  printf("OVER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data15();
                                                  }
                                              }
                                              else
                                              {
                                                  printf("OBESITY");
                                                  printf("\n\n\n");
                                                  {
                                                      data16();
                                                  }
                                              }
                                              break;




                        }
                         else if((female_age >= 26) && (female_age <=40 ))
                        {
                            printf("Enter a height: ");
                            scanf("%f", & female_height);


                                     printf("Enter a weight: ");
                                     scanf("%f", &female_weight);
                                     printf("\n\n\n");




                                          bmi=female_weight/(female_height* female_height);

                                              if (bmi<=1.85)
                                              {
                                                  printf("UNDER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data17();
                                                  }
                                              }

                                              else if (bmi<=2.49)
                                              {
                                                  printf("NORMAL");
                                                  printf("\n\n\n");
                                                  {
                                                      data18 ();
                                                  }

                                              }
                                              else if (bmi<=2.99)
                                              {
                                                  printf("OVER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data19();
                                                  }
                                              }
                                              else
                                              {
                                                  printf("OBESITY");
                                                  printf("\n\n\n");
                                                  {
                                                      data20 ();

                                                  }
                                              }
                                              break;
                        }
                        else if ((female_age >= 41) && (female_age <=60 ))
                        {
                            printf("Enter a height: ");
                            scanf("%f", & female_height);


                                     printf("Enter a weight: ");
                                     scanf("%f", &female_weight);
                                     printf("\n\n\n");




                                          bmi=female_weight/(female_height* female_height);

                                              if (bmi<=1.85)
                                              {
                                                  printf("UNDER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data21();
                                                  }
                                              }

                                              else if (bmi<=2.49)
                                              {
                                                  printf("NORMAL");
                                                  printf("\n\n\n");
                                                  {
                                                      data22 ();
                                                  }

                                              }
                                              else if (bmi<=2.99)
                                              {
                                                  printf("OVER WEIGHT");
                                                  printf("\n\n\n");
                                                  {
                                                      data23();
                                                  }
                                              }
                                              else
                                              {
                                                  printf("OBESITY");
                                                  printf("\n\n\n");
                                                  {
                                                      data24();
                                                  }
                                              }
                                              break;
                          }
                          else
                              {
                                  printf ("It is an error search '%d' search again...... \n\n",female_age);
                              }
                              break;

                default:
                    {
                          printf("\n\tYour Choice '%d' Is not a Valid Search. \n\tEnter Your Choice between 1 to 2. \n\n", gend);
                          break;
                    }
                    break;
            }




             system("COLOR F1");


                loop2:
          printf("\n");

    char ch;
    printf("\tDo You Want to Search Again?\n\tType 'Y/y' for 'Yes' or Type 'N/n' for 'No' \n\tEnter Your Choice: ");
    scanf("%s", &ch);
    switch(ch)
    {
        case 'y':
        case 'Y':
            goto loop1;
            break;

        case 'n':
        case 'N':
            exit(0);
            break;
        default:
            printf("\n\tInvalid Input!!!\n\tYour Choice '%c' isn't Correct.\n\n", ch);
            goto loop2;
            break;
    }

    system("pause");







    return 0;

}

void data1()
{
    FILE * fp;
    char x[100];
    fp = fopen("01. data1.txt", "r");

   while(!feof(fp))
    {
        fgets(x, 100, fp);
        puts(x);
    }
    fclose(fp);
}

void data2()
{
    FILE * fp;
    char x[100];
    fp = fopen("02. data2.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 100, fp);
        puts(x);
    }
    fclose(fp);
}

void data3()
{
    FILE * fp;
    char x[100];
    fp = fopen("03. data3.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 100, fp);
        puts(x);
    }
    fclose(fp);
}

void data4()
{
    FILE * fp;
    char x[50];
    fp = fopen("04. data4.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data5()
{
    FILE * fp;
    char x[50];
    fp = fopen("05. data5.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data6()
{
    FILE * fp;
    char x[50];
    fp = fopen("06. data6.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data7()
{
    FILE * fp;
    char x[50];
    fp = fopen("07. data7.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data8()
{
    FILE * fp;
    char x[50];
    fp = fopen("08. data8.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}
void data9()
{
    FILE * fp;
    char x[50];
    fp = fopen("09. data9.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data10()
{
    FILE * fp;
    char x[50];
    fp = fopen("10. data10.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data11()
{
    FILE * fp;
    char x[50];
    fp = fopen("11. data11.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data12()
{
    FILE * fp;
    char x[50];
    fp = fopen("12. data12.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data13()
{
    FILE * fp;
    char x[100];
    fp = fopen("13. data13.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 100, fp);
        puts(x);
    }
    fclose(fp);
}

void data14()
{
    FILE * fp;
    char x[100];
    fp = fopen("14. data14.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 100, fp);
        puts(x);
    }
    fclose(fp);
}

void data15()
{
    FILE * fp;
    char x[100];
    fp = fopen("15. data15.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 100, fp);
        puts(x);
    }
    fclose(fp);
}

void data16()
{
    FILE * fp;
    char x[50];
    fp = fopen("16. data16.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data17()
{
    FILE * fp;
    char x[50];
    fp = fopen("17. data17.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data18()
{
    FILE * fp;
    char x[50];
    fp = fopen("18. data18.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data19()
{
    FILE * fp;
    char x[50];
    fp = fopen("19. data19.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data20()
{
    FILE * fp;
    char x[50];
    fp = fopen("20. data20.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}
void data21()
{
    FILE * fp;
    char x[50];
    fp = fopen("21. data21.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data22()
{
    FILE * fp;
    char x[50];
    fp = fopen("22. data22.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data23()
{
    FILE * fp;
    char x[50];
    fp = fopen("23. data23.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

void data24()
{
    FILE * fp;
    char x[50];
    fp = fopen("24. data24.txt", "r");

    while(!feof(fp))
    {
        fgets(x, 50, fp);
        puts(x);
    }
    fclose(fp);
}

















