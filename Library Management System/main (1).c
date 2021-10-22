//Library Management System//
//password: "Enter" //

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


int password();

void addbook();

void viewbook();

void editbook();

void deletebook();

void editpassword();

struct book

{

    char date[10];
    char stname[30];
    char author[30];
    char id[25];

} ;


int main()

{

    int ch;

    printf("\n\n\t***********************************\n");

    printf("\t*WELCOME TO LIBRARY MANAGEMENT SYSTEM*\n");

    printf("\t***********************************");


   while(1)


        {

                printf("\n\n\t\tMAIN MENU:");

                printf("\n\n\tADD BOOK\t[1]");

                printf("\n\tVIEW BOOK LIST\t[2]");

                printf("\n\tEDIT BOOK\t[3]");

                printf("\n\tDELETE BOOK\t[4]");

                printf("\n\tEDIT PASSWORD\t[5]");

                printf("\n\tEXIT\t\t[6]");

                printf("\n\n\tENTER YOUR CHOICE:");

                scanf("%d",&ch);


            switch(ch)

                    {

                            case 1:

                            addbook();

                            break;


                            case 2:

                            viewbook();

                            break;


                            case 3:

                            editbook();

                            break;


                            case 4:

                            deletebook();

                            break;


                            case 5:

                            editpassword();

                            break;


                            case 6:

                            printf("\n\n\t\tTHANK YOU FOR USING THE SOFTWARE BY:\n\n\tMRITTIKA SEN GUPTA\n\n\tMORIOM AKTER...");

                            getch();

                            exit(0);


                            default:

                            printf("\nYOU ENTERED WRONG CHOICE..");

                            printf("\nPRESS ANY KEY TO TRY AGAIN");

                            getch();

                            break;

                    }

                system("cls");

        }

            return 0;

}

void addbook( )

{

                system("cls");

                FILE *fp ;

                char another = 'Y' ,date[10];

                struct book e ;

                char filename[15];

                int choice;

                printf("\n\n\t\t***************************\n");

                printf("\t\t* WELCOME TO THE ADD PORTION *");

                printf("\n\t\t***************************\n\n");

                printf("ENTER THE NAME OF YOUR BOOK:");

                fflush(stdin);

                gets(filename);

                fp = fopen (filename, "ab+" ) ;

                if ( fp == NULL )

                {

                fp=fopen(filename,"wb+");

                if(fp==NULL)

                {

                    printf("\nSYSTEM ERROR...");

                    printf("\nPRESS ANY KEY TO EXIT");

                    getch();

                    return ;

                }

                }



                while ( another == 'Y'|| another=='y' )

                {

                    choice=0;

                    fflush(stdin);

                printf ( "\n\tENTER DATE:");

                scanf("%s",date);

                rewind(fp);

                while(fread(&e,sizeof(e),1,fp)==1)

                {

                    if(strcmp(e.date,date)==0)

                    {

                        printf("\n\tTHE RECORD ALREADY EXISTS.\n");

                        choice=1;

                    }

                }

                    if(choice==0)

                    {



                        printf("\tENTER STNAME:");

                        fflush(stdin);

                        gets(e.stname);

                        fflush(stdin);

                        printf("\tENTER AUTHOR:");

                        gets(e.author);

                        fflush(stdin);

                        printf("\tENTER ID:");

                        gets(e.id);

                        fflush(stdin);


                        fwrite ( &e, sizeof ( e ), 1, fp ) ;

                        printf("\nYOUR BOOK IS ADDED...\n");

                    }

                        printf ( "\n\tADD ANOTHER BOOK...(Y/N)\n " ) ;



                        fflush ( stdin ) ;

                        another = getchar( ) ;

                }


                fclose ( fp ) ;

                printf("\n\n\tPRESS ANY KEY TO EXIT...");

                getch();

    }


void viewbook( )

{

        FILE *fpte ;

        system("cls");

        struct  book student ;

        char date[10],choice,filename[14];

        int ch;

        printf("\n\n\t\t*******************************\n");

        printf("\t\t* HERE IS THE VIEWING BOOK PORTION *");

        printf("\n\t\t*******************************\n\n");

        choice=password();

        if(choice!=0)

            {

                return ;

            }

        do

            {

                    printf("\n\tENTER THE DATE OF BOOK TO BE VIEWED:");

                    fflush(stdin);

                    gets(filename);


                    fpte = fopen ( filename, "rb" ) ;

                    if ( fpte == NULL )

                            {

                                puts ( "\nTHE BOOK DOES NOT EXIST...\n" ) ;

                                printf("PRESS ANY KEY TO EXIT...");

                                getch();

                                return ;

                            }

                            system("cls");

                printf("\n\tHOW WOULD YOU LIKE TO VIEW:\n");

                printf("\n\t1.BY BOOK NAME.");

                printf("\n\t2.BY AUTHOR NAME.");

                printf("\n\t\tENTER YOUR CHOICE:");

                scanf("%d",&ch);

                switch(ch)

                {

                    case 1:

                            printf("\nTHE BOOK NAME FOR %s IS:",filename);

                         while ( fread ( &student, sizeof ( student ), 1, fpte ) == 1 )

                         {

                            printf("\n");

                            printf("\nDATE: %s",student.date);

                            printf("\nSTNAME: %s",student.stname);

                            printf("\nSTID: %s",student.id);


                            printf("\nAUTHOR: %s",student.author);



                            printf("\n");

                         }

                         break;


                    case 2:

                            fflush(stdin);

                            printf("\nENTER DATE:");

                            gets(date);

                            while ( fread ( &student, sizeof ( student), 1, fpte ) == 1 )


                            {

                                if(strcmp(student.date,date)==0)

                                {

                                    printf("\nYOUR BOOK IS:");

                                    printf("\nDATE: %s",student.date);

                                    printf("\nSTNAME: %s",student.stname);

                                    printf("\nSTID: %s",student.id);

                                    printf("\nAUTHOR: %s",student.author);



                                }

                            }

                            break;


                    default: printf("\nYOU TYPED SOMETHING ELSE...\n");

                             break;

                }


               printf("\n\nWOULD YOU LIKE TO CONTINUE VIEWING...(Y/N):");

               fflush(stdin);

            scanf("%c",&choice);

        }while(choice=='Y'||choice=='y');

            fclose ( fpte ) ;

            return ;

}

void editbook()

{

        system("cls");

        FILE *fpte ;

        struct book student ;

        char date[10],choice,filename[14];

        int num,count=0;

        printf("\n\n\t\t*******************************\n");

        printf("\t\t* WELCOME TO THE EDITING PORTION *");

        printf("\n\t\t*******************************\n\n");

        choice=password();

        if(choice!=0)

            {

                return ;

            }

        do

            {

                    printf("\n\tENTER THE DATE OF BOOK TO BE EDITED:[yyyy-mm-dd]:");

                    fflush(stdin);

                    gets(filename);

                    printf("\n\tENTER DATE:");

                    gets(date);

                    fpte = fopen ( filename, "rb+" ) ;

                    if ( fpte == NULL )

                            {

                                printf( "\nBOOK DOES NOT EXISTS:" ) ;

                                printf("\nPRESS ANY KEY TO GO BACK");

                                getch();

                                return;

                            }

                    while ( fread ( &student, sizeof ( student ), 1, fpte ) == 1 )

                    {

                        if(strcmp(student.date,date)==0)

                        {

                            printf("\nYOUR OLD RECORD WAS AS:");

                            printf("\nDATE: %s",student.date);

                            printf("\nSTNAME: %s",student.stname);

                            printf("\nSTID: %s",student.id);

                            printf("\nAUTHOR: %s",student.author);





                            printf("\n\n\t\tWHAT WOULD YOU LIKE TO EDIT..");

                                printf("\n1.DATE.");

                                printf("\n2.STNAME.");

                                printf("\n3.ID.");

                                printf("\n4.AUTHOR.");



                                printf("\n6.WHOLE BOOK.");

                                printf("\n7.GO BACK TO MAIN MENU.");

                                do

                                {

                                        printf("\n\tENTER YOUR CHOICE:");

                                        fflush(stdin);

                                        scanf("%d",&num);

                                        fflush(stdin);

                                        switch(num)

                                        {

                                            case 1: printf("\nENTER THE NEW DATA:");

                                                    printf("\nNEW DATE");

                                                    gets(student.date);

                                                    break;


                                            case 2: printf("\nENTER THE NEW DATA:");

                                                    printf("\nNEW STNAME:");

                                                    gets(student.stname);

                                                    break;


                                            case 3: printf("\nENTER THE NEW DATA:");

                                                    printf("\nNEW ID:");

                                                    gets(student.id);

                                                    break;


                                            case 4: printf("\nENTER THE NEW DATA:");

                                                    printf("\nAUTHOR:");

                                                    gets(student.author);

                                                    break;





                                            case 5:  printf("\nENTER THE NEW DATA:");

                                                     printf("\nNEW DATE:");

                                                     gets(student.date);

                                                     printf("\nNEW STNAME:");

                                                     gets(student.stname);

                                                     printf("\nNEW AUTHOR:");

                                                     gets(student.author);

                                                     printf("\nSTID:");

                                                     gets(student.id);



                                                     break;


                                            case 6: printf("\nPRESS ANY KEY TO GO BACK...\n");

                                                    getch();

                                                    return ;

                                                    break;


                                            default: printf("\nYOU TYPED SOMETHING ELSE...TRY AGAIN\n");

                                                     break;

                                        }


                                }while(num<1||num>8);

                            fseek(fpte,-sizeof(student),SEEK_CUR);

                            fwrite(&student,sizeof(student),1,fpte);

                            fseek(fpte,-sizeof(student),SEEK_CUR);

                            fread(&student,sizeof(student),1,fpte);

                            choice=5;

                            break;

                        }

                    }

                    if(choice==5)

                    {

                    system("cls");

                    printf("\n\t\tEDITING COMPLETED...\n");

                    printf("--------------------\n");

                    printf("THE NEW RECORD IS:\n");

                    printf("--------------------\n");

                    printf("\nDATE: %s",student.date);

                    printf("\nSTNAME: %s",student.stname);

                    printf("\nAUTHOR %s",student.author);

                    printf("\nSTID: %s",student.id);



                    fclose(fpte);

                    printf("\n\n\tWOULD YOU LIKE TO EDIT ANOTHER BOOK.(Y/N)");

                    scanf("%c",&choice);

                    count++;

                    }

                    else

                    {

                        printf("\nTHE BOOK DOES NOT EXIST::\n");

                        printf("\nWOULD YOU LIKE TO TRY AGAIN...(Y/N)");

                        scanf("%c",&choice);

                    }


            }while(choice=='Y'||choice=='y');

            fclose ( fpte ) ;


            if(count==1)

            printf("\n%d FILE IS EDITED...\n",count);

            else if(count>1)

            printf("\n%d FILES ARE EDITED..\n",count);

            else

            printf("\nNO FILES EDITED...\n");

            printf("\tPRESS ENTER TO EXIT EDITING MENU.");

            getch();

}

int password()

{

        char pass[15]={0},check[15]={0},ch;

        FILE *fpp;

        int i=0,j;

        printf("::FOR SECURITY PURPOSE::");

        printf("::ONLY THREE TRIALS ARE ALLOWED::");

        for(j=0;j<3;j++)

        {

                        i=0;

                        printf("\n\n\tENTER THE PASSWORD:");

                        pass[0]=getch();

                        while(pass[i]!='\r')

                        {

                            if(pass[i]=='\b')

                            {

                                i--;

                                printf("\b");

                                printf(" ");

                                printf("\b");

                                pass[i]=getch();

                            }

                            else

                            {

                                printf("*");

                                i++;

                                pass[i]=getch();

                            }

                        }

                        pass[i]='\0';

                        fpp=fopen("SE","r");

                        if (fpp==NULL)

                        {

                            printf("\nERROR WITH THE SYSTEM FILE...[FILE MISSING]\n");

                            getch();

                            return 1;

                        }

                        else

                        i=0;

                        while(1)

                        {

                            ch=fgetc(fpp);

                            if(ch==EOF)

                            {

                                check[i]='\0';

                                break;

                            }

                            check[i]=ch-5;

                            i++;

                        }

                        if(strcmp(pass,check)==0)

                        {

                            printf("\n\n\tACCESS GRANTED...\n");

                            return 0;

                        }

                        else

                        {

                            printf("\n\n\tWRONG PASSWORD..\n\n\tACCESS DENIED...\n");

                        }

        }

        printf("\n\n\t::YOU ENTERED WRONG PASSWORD::YOU ARE NOT ALLOWED TO ACCESS ANY FILE::\n\n\tPRESS ANY KEY TO GO BACK...");

        getch();

        return 1;

}

void editpassword()

{

    system("cls");

    printf("\n");

    char pass[15]={0},confirm[15]={0},ch;

    int choice,i,check;

    FILE *fp;

    fp=fopen("SE","rb");

    if(fp==NULL)

    {

        fp=fopen("SE","wb");

        if(fp==NULL)

        {

            printf("SYSTEM ERROR...");

            getch();

            return ;

        }

        fclose(fp);

        printf("\nSYSTEM RESTORED...\nYOUR PASSWORD IS 'ENTER'\n PRESS ENTER TO CHANGE PASSWORD\n\n");

        getch();

    }

        fclose(fp);

        check=password();

    if(check==1)

    {

        return ;

    }

    do

    {

        if(check==0)

                    {

                        i=0;

                        choice=0;

                        printf("\n\n\tENTER THE NEW PASSWORD:");

                        fflush(stdin);

                        pass[0]=getch();

                        while(pass[i]!='\r')

                        {

                            if(pass[i]=='\b')

                            {

                                i--;

                                printf("\b");

                                printf(" ");

                                printf("\b");

                                pass[i]=getch();

                            }

                            else

                            {

                                printf("*");

                                i++;

                                pass[i]=getch();

                            }

                        }

                        pass[i]='\0';

                        i=0;

                        printf("\n\tCONFIRM PASSWORD:");

                        confirm[0]=getch();

                        while(confirm[i]!='\r')

                        {

                            if(confirm[i]=='\b')

                            {

                                i--;

                                printf("\b");

                                printf(" ");

                                printf("\b");

                                confirm[i]=getch();

                            }

                            else

                            {

                                printf("*");

                                i++;

                                confirm[i]=getch();

                            }

                        }

                        confirm[i]='\0';

                        if(strcmp(pass,confirm)==0)

                        {

                            fp=fopen("SE","wb");

                            if(fp==NULL)

                            {

                                printf("\n\t\tSYSTEM ERROR");

                                getch();

                                return ;

                            }

                            i=0;

                            while(pass[i]!='\0')

                            {

                                ch=pass[i];

                                putc(ch+5,fp);

                                i++;

                            }

                            putc(EOF,fp);

                            fclose(fp);

                        }

                        else

                        {

                            printf("\n\tTHE NEW PASSWORD DOES NOT MATCH.");

                            choice=1;


                        }


                    }

}while(choice==1);


    printf("\n\n\tPASSWORD CHANGED...\n\n\tPRESS ANY KEY TO GO BACK...");

    getch();

}


void deletebook( )

{

                system("cls");

                FILE *fp,*fptr ;

                struct book file ;

                char filename[15],another = 'Y' ,date[10];;

                int choice,check;

                printf("\n\n\t\t*************************\n");

                printf("\t\t* WELCOME TO DELETE MENU*");

                printf("\n\t\t*************************\n\n");

                check = password();

                    if(check==1)

                    {

                        return ;

                    }


                while ( another == 'Y' )

                {

                printf("\n\n\tHOW WOULD YOU LIKE TO DELETE.");

                printf("\n\n\t#DELETE WHOLE BOOK\t\t\t[1]");

                printf("\n\t#DELETE A PARTICULAR BOOK BY NAME\t[2]");


                do

                {

                        printf("\n\t\tENTER YOU CHOICE:");

                        scanf("%d",&choice);


                    switch(choice)

                        {

                            case 1:

                            printf("\n\tENTER THE NAME OF BOOK TO BE DELETED:");

                            fflush(stdin);

                            gets(filename);

                            fp = fopen (filename, "wb" ) ;

                            if ( fp == NULL )

                            {

                                printf("\nTHE FILE DOES NOT EXISTS");

                                printf("\nPRESS ANY KEY TO GO BACK.");

                                getch();

                                return ;

                            }

                            fclose(fp);

                            remove(filename);

                            printf("\nDELETED SUCCESFULLY...");

                            break;


                            case 2:

                            printf("\n\tENTER THE NAME OF BOOK:");

                            fflush(stdin);

                            gets(filename);

                            fp = fopen (filename, "rb" ) ;

                            if ( fp == NULL )

                            {

                                printf("\nTHE FILE DOES NOT EXISTS");

                                printf("\nPRESS ANY KEY TO GO BACK.");

                                getch();

                                return ;

                            }

                            fptr=fopen("temp","wb");

                            if(fptr==NULL)

                            {

                                printf("\nSYSTEM ERROR");

                                printf("\nPRESS ANY KEY TO GO BACK");

                                getch();

                                return ;

                            }

                            printf("\n\tENTER THE DATE OF BOOK TO BE DELETED:[hh:mm]:");

                            fflush(stdin);

                            gets(date);

                            while(fread(&file,sizeof(file),1,fp)==1)

                            {

                                if(strcmp(file.date,date)!=0)

                                fwrite(&file,sizeof(file),1,fptr);

                            }


                            fclose(fp);

                            fclose(fptr);

                            remove(filename);

                            rename("temp",filename);

                            printf("\nDELETED SUCCESFULLY...");

                            break;


                    default:

                            printf("\n\tYOU ENTERED WRONG CHOICE");

                            break;

                    }

                }while(choice<1||choice>2);



                    printf("\n\tDO YOU LIKE TO DELETE ANOTHER BOOK.(Y/N):");

                    fflush(stdin);

                    scanf("%c",&another);

                }

                printf("\n\n\tPRESS ANY KEY TO EXIT...");

                getch();

}
