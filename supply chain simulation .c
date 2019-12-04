#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<windows.h>



typedef struct medicine
{
    char medicine_name[30];
    int piece_of_medicine;
    struct medicine *next;
} medi;

typedef struct Login
{
    char username[30];
    char password[20];
} login;

login data;
int self,row,column;
FILE *f1,*f2;
long long int medicine_file=0,collect=0,check=0,check1=0,price=0;


void input(medi *pointer)

{
    system("color F9");

    while(pointer)
    {
        if(strcmp(pointer->medicine_name,"napa")==0)
        {
            f1=fopen("C:\\check_napa.in","a+");
            fscanf(f1,"%lld",&check);

            if(check>pointer->piece_of_medicine)
            {
                check=check-pointer->piece_of_medicine;
                check1=check;
                fclose(f1);

                f1=fopen("C:\\check_napa.in","w");
                check=check1;
                fprintf(f1,"%lld",check);
                fclose(f1);

                f1=fopen("C:\\input_napa.in","a+");
                fscanf(f1,"%lld",&medicine_file);
                medicine_file=medicine_file+pointer->piece_of_medicine;
                collect=medicine_file;
                fclose(f1);

                f1=fopen("C:\\input_napa.in","w");
                medicine_file=collect;
                fprintf(f1,"%lld",medicine_file);
                fclose(f1);

                f1=fopen("C:\\location_napa_change_location.in","r");
                if(f1)
                {
                    fscanf(f1,"%d %d %d",&self,&row,&column);
                    printf("\nNapa is in  Self No: %d   Row No: %d   Column: %d\nTotal Price: %d\n",self,row,column,1*pointer->piece_of_medicine);
                    price=price+(1*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }

                else
                {
                    printf("\n\aPlease Go to settings and give a location for napa.\nTotal Price: %d\n",1*pointer->piece_of_medicine);
                    price=price+(1*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }
            }

            else if(check==pointer->piece_of_medicine)
            {
                check=check-pointer->piece_of_medicine;
                check1=check;
                fclose(f1);

                f1=fopen("C:\\check_napa.in","w");
                check=check1;
                fprintf(f1,"%lld",check);
                fclose(f1);

                f1=fopen("C:\\input_napa.in","a+");
                fscanf(f1,"%lld",&medicine_file);
                medicine_file=medicine_file+pointer->piece_of_medicine;
                collect=medicine_file;
                fclose(f1);

                f1=fopen("C:\\input_napa.in","w");
                medicine_file=collect;
                fprintf(f1,"%lld",medicine_file);
                fclose(f1);
                f1=fopen("C:\\location_napa_change_location.in","r");
                if(f1)
                {
                    fscanf(f1,"%d %d %d",&self,&row,&column);
                    printf("\nnapa is in  Self No: %d   Row No: %d   Column: %d\nTotal Price: %d\n\n\n\t\t\aWARNING! napa will be empty! Please Order it!",self,row,column,1*pointer->piece_of_medicine);
                    price=price+(1*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }

                else
                {
                    printf("\n\aPlease Go to settings and give a location for napa.\nTotal Price: %d\n\n\n\t\t\aWARNING! napa will be empty! Please Order it!",1*pointer->piece_of_medicine);
                    price=price+(1*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }
            }

            else
            {
                f1=fopen("C:\\check_napa.in","a+");
                fscanf(f1,"%lld",&check);
                printf("\n\n\a\t\tWARNING! Napa is short! You have %lld pieces! Please order!\n\n",check);
                fclose(f1);
                Sleep(1000);
            }

        }


        else if(strcmp(pointer->medicine_name,"maxpro")==0)
        {
            f1=fopen("C:\\check_maxpro.in","a+");
            fscanf(f1,"%lld",&check);

            if(check>pointer->piece_of_medicine)
            {
                check=check-pointer->piece_of_medicine;
                check1=check;
                fclose(f1);

                f1=fopen("C:\\check_maxpro.in","w");
                check=check1;
                fprintf(f1,"%lld",check);
                fclose(f1);

                f1=fopen("C:\\input_maxpro.in","a+");
                fscanf(f1,"%lld",&medicine_file);
                medicine_file=medicine_file+pointer->piece_of_medicine;
                collect=medicine_file;
                fclose(f1);

                f1=fopen("C:\\input_maxpro.in","w");
                medicine_file=collect;
                fprintf(f1,"%lld",medicine_file);
                fclose(f1);

                f1=fopen("C:\\location_maxpro_change_location.in","r");
                if(f1)
                {
                    fscanf(f1,"%d %d %d",&self,&row,&column);
                    printf("\nmaxpro is in  Self No: %d   Row No: %d   Column: %d\nTotal Price: %d\n",self,row,column,7*pointer->piece_of_medicine);
                    price=price+(7*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }

                else
                {
                    printf("\n\aPlease Go to settings and give a location for maxpro.\nTotal Price: %d\n",7*pointer->piece_of_medicine);
                    price=price+(7*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }
            }

            else if(check==pointer->piece_of_medicine)
            {
                check=check-pointer->piece_of_medicine;
                check1=check;
                fclose(f1);

                f1=fopen("C:\\check_maxpro.in","w");
                check=check1;
                fprintf(f1,"%lld",check);
                fclose(f1);

                f1=fopen("C:\\input_maxpro.in","a+");
                fscanf(f1,"%lld",&medicine_file);
                medicine_file=medicine_file+pointer->piece_of_medicine;
                collect=medicine_file;
                fclose(f1);

                f1=fopen("C:\\input_maxpro.in","w");
                medicine_file=collect;
                fprintf(f1,"%lld",medicine_file);
                fclose(f1);
                f1=fopen("C:\\location_maxpro_change_location.in","r");
                if(f1)
                {
                    fscanf(f1,"%d %d %d",&self,&row,&column);
                    printf("\nmaxpro is in  Self No: %d   Row No: %d   Column: %d\nTotal Price: %d\n\n\n\t\t\aWARNING! Maxpro will be empty! Please Order it!",self,row,column,7*pointer->piece_of_medicine);
                    price=price+(7*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }

                else
                {
                    printf("\n\aPlease Go to settings and give a location for maxpro.\nTotal Price: %d\n\n\n\t\t\aWARNING! Maxpro will be empty! Please Order it!",7*pointer->piece_of_medicine);
                    price=price+(7*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }

            }

            else
            {
                f1=fopen("C:\\check_maxpro.in","a+");
                fscanf(f1,"%lld",&check);
                printf("\n\n\a\t\tWARNING! Maxpro is short! You have %lld pieces! Please order\n\n!",check);
                fclose(f1);
                Sleep(1000);
            }

        }


        else if(strcmp(pointer->medicine_name,"monas4")==0)
        {
            f1=fopen("C:\\check_monas4.in","a+");
            fscanf(f1,"%lld",&check);

            if(check>pointer->piece_of_medicine)
            {
                check=check-pointer->piece_of_medicine;
                check1=check;
                fclose(f1);

                f1=fopen("C:\\check_monas4.in","w");
                check=check1;
                fprintf(f1,"%lld",check);
                fclose(f1);

                f1=fopen("C:\\input_monas4.in","a+");
                fscanf(f1,"%lld",&medicine_file);
                medicine_file=medicine_file+pointer->piece_of_medicine;
                collect=medicine_file;
                fclose(f1);

                f1=fopen("C:\\input_monas4.in","w");
                medicine_file=collect;
                fprintf(f1,"%lld",medicine_file);
                fclose(f1);

                f1=fopen("C:\\location_monas4_change_location.in","r");
                if(f1)
                {
                    fscanf(f1,"%d %d %d",&self,&row,&column);
                    printf("\nmonas4 is in  Self No: %d   Row No: %d   Column: %d\nTotal Price: %d\n",self,row,column,6*pointer->piece_of_medicine);
                    price=price+(6*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }

                else
                {
                    printf("\n\aPlease Go to settings and give a location for monas4.\nTotal Price: %d\n",6*pointer->piece_of_medicine);
                    price=price+(6*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }
            }

            else if(check==pointer->piece_of_medicine)
            {
                check=check-pointer->piece_of_medicine;
                check1=check;
                fclose(f1);

                f1=fopen("C:\\check_monas4.in","w");
                check=check1;
                fprintf(f1,"%lld",check);
                fclose(f1);

                f1=fopen("C:\\input_monas4.in","a+");
                fscanf(f1,"%lld",&medicine_file);
                medicine_file=medicine_file+pointer->piece_of_medicine;
                collect=medicine_file;
                fclose(f1);

                f1=fopen("C:\\input_monas4.in","w");
                medicine_file=collect;
                fprintf(f1,"%lld",medicine_file);
                fclose(f1);
                f1=fopen("C:\\location_monas4_change_location.in","r");
                if(f1)
                {
                    fscanf(f1,"%d %d %d",&self,&row,&column);
                    printf("\nmonas4 is in  Self No: %d   Row No: %d   Column: %d\nTotal Price: %d\n\n\n\t\t\aWARNING! monas4 will be empty! Please Order it!",self,row,column,6*pointer->piece_of_medicine);
                    price=price+(6*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }

                else
                {
                    printf("\n\aPlease Go to settings and give a location for monas4.\nTotal Price: %d\n\n\n\t\t\aWARNING! monas4 will be empty! Please Order it!",6*pointer->piece_of_medicine);
                    price=price+(6*pointer->piece_of_medicine);
                    fclose(f1);
                    Sleep(1000);
                }
            }

            else
            {
                f1=fopen("C:\\check_monas4.in","a+");
                fscanf(f1,"%lld",&check);
                printf("\n\n\a\t\tWARNING! Monas-4 is short! You have %lld pieces! Please order!\n\n",check);
                fclose(f1);
                Sleep(1000);
            }

        }

        pointer=pointer->next;

    }

    printf("\n\nTotal price: %lld",price);
    getch();
    price=0;
    return;
}


void order(medi *pointer)
{
    system("color F9");
    while(pointer)
    {
        if(strcmp(pointer->medicine_name,"napa")==0)
        {

            f1=fopen("C:\\check_napa.in","a+");
            fscanf(f1,"%lld",&check);
            check=check+(pointer->piece_of_medicine*400);
            check1=check;
            fclose(f1);
            f1=fopen("C:\\check_napa.in","w");
            check=check1;
            fprintf(f1,"%lld",check);
            fclose(f1);
            f1=fopen("C:\\order_napa.in","w");
            fprintf(f1,"%lld",pointer->piece_of_medicine);

            fclose(f1);
        }


        else if(strcmp(pointer->medicine_name,"maxpro")==0)
        {

            f1=fopen("C:\\check_maxpro.in","a+");
            fscanf(f1,"%lld",&check);
            check=check+(pointer->piece_of_medicine*400);
            check1=check;
            fclose(f1);
            f1=fopen("C:\\check_maxpro.in","w");
            check=check1;
            fprintf(f1,"%lld",check);
            fclose(f1);
            f1=fopen("C:\\order_maxpro.in","w");
            fprintf(f1,"%lld",pointer->piece_of_medicine);
            fclose(f1);

        }


        else if(strcmp(pointer->medicine_name,"monas4")==0)
        {

            f1=fopen("C:\\check_monas4.in","a+");
            fscanf(f1,"%lld",&check);
            check=check+(pointer->piece_of_medicine*400);
            check1=check;
            fclose(f1);
            f1=fopen("C:\\check_monas4.in","w");
            check=check1;
            fprintf(f1,"%lld",check);
            fclose(f1);
            f1=fopen("C:\\order_monas4.in","w");
            fprintf(f1,"%lld",pointer->piece_of_medicine);
            fclose(f1);
        }

        pointer=pointer->next;

    }
    return;

}

void medicine_location()
{
    system("color F9");

    char change_location[30];      //change_location.in is the variable for the medicine which we want to change the location
    printf("\nEnter Medicine Name: ");
    scanf("%s",&change_location);
    system("cls");

    if(strcmp(change_location,"napa")==0)
    {
        printf("\nEnter Self Number: ");
        scanf("%d",&self);
        printf("\n Enter Row number: ");
        scanf("%d",&row);
        printf("\n Enter Column Number: ");
        scanf("%d",&column);
        f1=fopen("C:\\location_napa_change_location.in","w");
        fprintf(f1,"%d %d %d",self, row, column);
        fclose(f1);
        system("cls");
        printf("\n\n\n\t\t\t\t\tDone!");
        Sleep(1000);
        system("cls");
    }

    else if(strcmp(change_location,"maxpro")==0)
    {
        printf("\nEnter Self Number: ");
        scanf("%d",&self);
        printf("\n Enter Row number: ");
        scanf("%d",&row);
        printf("\n Enter Column Number: ");
        scanf("%d",&column);
        f1=fopen("C:\\location_maxpro_change_location.in","w");
        fprintf(f1,"%d %d %d",self, row, column);
        fclose(f1);
        system("cls");
        printf("\n\n\n\t\t\t\t\tDone!");
        Sleep(1000);
        system("cls");
    }

    else if(strcmp(change_location,"monas4")==0)
    {
        printf("\nEnter Self Number: ");
        scanf("%d",&self);
        printf("\n Enter Row number: ");
        scanf("%d",&row);
        printf("\n Enter Column Number: ");
        scanf("%d",&column);
        f1=fopen("C:\\location_monas4_change_location.in","w");
        fprintf(f1,"%d %d %d",self, row, column);
        fclose(f1);
        system("cls");
        printf("\n\n\n\t\t\t\t\tDone!");
        Sleep(1000);
        system("cls");
    }

    else
    {
        printf("\n\aSorry! %s is not in our service.",change_location);
        Sleep(3000);
        system("cls");
    }



}

void change_login()
{
    system("color F9");
    int a;
    char old_password[30],new_password[30],new_username[30];
first:
    printf("\nEnter Your Old Password: ");
    scanf("%s",old_password);
    if(strcmp(old_password,data.password)==0)
    {
try:
            printf("\n\nEnter new Username: ");
        scanf("%s",&new_username);
        printf("\n\nEnter new password: ");
        scanf("%s",old_password);
        printf("\nReenter new password: ");
        scanf("%s",new_password);
        system("cls");
        if(strcmp(old_password,new_password)==0)
        {
            strcpy(data.password,new_password);
            f1=fopen("C:\\login_password_password.in","w");
            fprintf(f1,"%s",data.password);
            fclose(f1);

            strcpy(data.username,new_username);
            f1=fopen("C:\\login_username_username.in","w");
            fprintf(f1,"%s",data.username);
            printf("\n\n\n\t\t\t\t\t\aPassword and username has changed successfully!\n");
            Sleep(3000);
            system("cls");
        }
        else
        {
            printf("\n\n\n\t\t\t\t\t\aPassword dosen't match! Try again..");
            Sleep(3000);
            system("cls");
            goto try;
        }
    }
    else
    {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\aWrong Password! Try again...");
        Sleep(2500);
        goto first;
    }
}

void settings()
{
    system("color F9");
    int x;
set:
    system("cls");
    printf("\n1. Change Medicine Location\n2. Change Password\n3. Go Home\n");

    scanf("%d",&x);
    system("cls");
    if(x==1)
    {
        medicine_location();
        goto set;
    }
    else if(x==2)
    {
        change_login();
        goto set;
    }

    else if(x==3)
        return;

    else
    {
        printf("\n\n\n\t\t\t\t\t\t\aWrong Choice! Try again!");
        Sleep(3000);
        system("cls");
        goto set;
    }

}


void new_user()
{
    system("color F9");
    char re_enter_password[30];
    printf("\n\tEnter User Name:  ");
    scanf("%s",&data.username);
    f1=fopen("C:\\login_username_username.in","w");
    fprintf(f1,"%s",data.username);
    fclose(f1);
    again:
    printf("\n\tType a password:  ");
    scanf("%s",&data.password);
    printf("\n\tRe-Enter Your password:  ");
    scanf("%s",&re_enter_password);
    if(strcmp(re_enter_password,data.password)==0)
    {
        f1=fopen("C:\\login_password_password.in","w");
        fprintf(f1,"%s",data.password);
        fclose(f1);
        system("cls");
        printf("\n\t\t\t\t\aSuccessfully Register....!");
        Sleep(3000);
        system("cls");
    }

    else
    {
        system("cls");
        printf("\n\t\t\t\aPassword dosen't match! Try again!");
        Sleep(2500);
        system("cls");
        goto again;
    }
}



int main()
{
    system("color F9");
    medi *pointer_main,*start;
    start=NULL;
    char msg[18]="See You Again....!";
    char pass_file[30], user_file[30];



    int a,b,c,i;

    printf("\n\n\n\n\t\t\t\t\t\t    WELCOME!!!");
    Sleep(2000);
    f2=fopen("C:\\login_password_password.in","r");

    if(f2)
    {
pa:
        system("cls");
        printf("\n\nPlease login: ");
        printf("\n\n\tUsername:  ");
        scanf("%s",data.username);
        printf("\n\tPassword:  ");
        scanf("%s",data.password);
        f2=fopen("C:\\login_password_password.in","a+");
        fscanf(f2,"%s",&pass_file);
        fclose(f2);

        f2=fopen("C:\\login_username_username.in","a+");
        fscanf(f2,"%s",&user_file);
        fclose(f2);
        system("cls");

        if(strcmp(data.username,user_file)==0 && strcmp(data.password,pass_file)==0)
        {
home:
            printf("\n\n\n  Choice your option: ");
            printf("\t\t\t1. Sell \n\t\t\t\t\t2. Order");
            printf("\n\t\t\t\t\t3. Settings \n\t\t\t\t\t4. Help\n\t\t\t\t\t5. Exit\n\n\t\t\t\t\t: ");

            scanf("%d",&b);

            if(b==1)
            {

                while(1)
                {
                    system("cls");
                    printf("\n \t\tType \"end\" after input all your medicine...\n\n");

                    pointer_main=(medi*)malloc(sizeof(medi));
                    printf("\nEnter medicine name: ");
                    scanf("%s",&pointer_main->medicine_name);
                    if(strcmp(pointer_main->medicine_name,"end")==0)
                    {
                        break;
                    }
                    printf("\nEnter piece of medicine: ");
                    scanf("%d",&pointer_main->piece_of_medicine);
                    pointer_main->next=start;
                    start=pointer_main;

                }
                pointer_main=start;
                system("cls");
                input(pointer_main);

                system("cls");
                pointer_main=NULL;
                start=NULL;

go:
                printf("\n 1.Go Home\n 2.Exit\n : ");
                scanf("%d",&c);
                system("cls");
                if(c==1)
                    goto home;
                else if(c==2)
                {
                    system("cls");
                    printf("\n\n\n\t\t\t\t\t\t Thank You!!");
                    Sleep(1000);
                    printf("\n\n\t\t\t\t\t     ");
                    for(i=0; i<18; i++)
                    {
                        printf("%c",msg[i]);
                        Sleep(100);
                    }
                    return 0;
                }
                else
                {
                    printf("\n\n\n\t\t\t\t\t\t\aWrong Choice! Try again!");
                    Sleep(3000);
                    system("cls");
                    goto go;
                }

            }

            else if(b==2)
            {
                system("cls");
                while(1)
                {
                   system("cls");
                    printf("\n \t\tType \"end\" after input all your medicine...\n\n");

                    pointer_main=(medi*)malloc(sizeof(medi));
                    printf("\nEnter medicine name: ");
                    scanf("%s",&pointer_main->medicine_name);
                    if(strcmp(pointer_main->medicine_name,"end")==0)
                    {
                        break;
                    }
                    printf("\nEnter carton of medicine: ");
                    scanf("%d",&pointer_main->piece_of_medicine);
                    pointer_main->next=start;
                    start=pointer_main;


                }
                pointer_main=start;
                system("cls");
                order(pointer_main);
                printf("\n\t\t\t\t\t\t\tDone!");
                Sleep(2000);
                system("cls");
                pointer_main=NULL;
                start=NULL;

go1:
                printf("\n 1.Go Home\n 2.Exit\n : ");
                scanf("%d",&c);
                system("cls");
                if(c==1)
                    goto home;
                else if(c==2)
                {
                    system("cls");
                    printf("\n\n\n\t\t\t\t\t\t Thank You!!");
                    Sleep(1000);
                    printf("\n\n\t\t\t\t\t     ");
                    for(i=0; i<18; i++)
                    {
                        printf("%c",msg[i]);
                        Sleep(100);
                    }
                    return 0;
                }
                else
                {
                    printf("\n\n\n\t\t\t\t\t\t\aWrong Choice! Try again!");
                    Sleep(3000);
                    system("cls");
                    goto go1;
                }
            }

            else if(b==3)
            {
                settings();
                goto home;
            }


            else if(b==4)
            {
                system("cls");
                printf("\n1. For selling medicine choice 1. \nYou can enter several medicine name and piece of medicine(In primary level only napa, maxpro and monas4 are in our service). \nAfter inputing all your medicine press \"end\" in the \"medicine name\" function.\nDo same for Order function. \nAfter inputing all your medicine press \"end\" in the \"medicine name\" function.");
                getch();
                system("cls");
                goto home;
            }

            else if(b==5)
            {

                system("cls");
                printf("\n\n\n\t\t\t\t\t\t Thank You!!");
                Sleep(1000);
                printf("\n\n\t\t\t\t\t     ");
                for(i=0; i<18; i++)
                {
                    printf("%c",msg[i]);
                    Sleep(100);
                }
                return 0;
            }

            else
            {
                system("cls");
                printf("\n\n\n\t\t\t\t\t\t\aWrong Choice! Try again!");
                Sleep(3000);
                system("cls");
                goto home;
            }

        }

        else
        {
            printf("\n\t\t\aWrong Username or Password! Try again!");
            Sleep(3000);
            goto pa;
        }

    }

    else
    {
        system("cls");
        printf("\n\t\tHey! You are new user... Please register at first...");
        Sleep(3000);
        system("cls");
        new_user();
        goto home;
    }
}


