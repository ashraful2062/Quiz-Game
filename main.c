#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
void DataBaseConcept();
void DataBaseUnder();
void Sql();
void Access();
void PartforProgamming();
void PHP();
void HTML();
void SortForm();
void Cpluse();
void Java();

int main()
{
    aa:
    printf("\n\n\n\t\t\t||------------------------------||");
    printf("\n\t\t\t||------------------------------||\n");
    printf("\t\t\t||\t      Welcome\t\t||\n");
    printf("\t\t\t||\t        To \t        ||\n");
    printf("\t\t\t||\t     Quiz Game\t        ||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\n\n");
    printf("\t\t\tWhich Quiz Topic you want to play\n\n");
    printf("\t\t\t1. Programming\n");
    printf("\t\t\t2. Data Base (DB)\n");
    printf("\t\t\t3. Exit\n\n");
    printf("\t\t\tChoose Your Option:  ");
    int chose;
    scanf("%d",&chose);
    switch(chose)
    {
    case 1: system("cls");
            PartforProgamming();
            break;
    case 2:system("cls");
            DataBaseUnder();
            break;
    case 3: exit(0);
    default:system("cls");
            printf("\n\n\t\t\tWrong Input\n\t\t\tPlease Enter Correct Number: ");
            goto aa;
            getche();
            break;

    }

}
void DataBaseUnder()
{
    aa:
    printf("\n\n\n\t\t\t||------------------------------||");
    printf("\n\t\t\t||------------------------------||\n");
    printf("\t\t\t||\t      Welcome\t\t||\n");
    printf("\t\t\t||\t        To \t        ||\n");
    printf("\t\t\t||    DataBase Quiz Game\t||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\t||------------------------------||\n\n");
    printf("\t\t\tWhich Quiz Topic you want to play\n\n");
    printf("\t\t\t1. DataBase Concepts\n");
    printf("\t\t\t2. SQL\n");
    printf("\t\t\t3. MS ACCESS\n");
    printf("\t\t\t4. Back\n");
    printf("\t\t\t5. Exit\n\n");
    printf("\t\t\tChoose Your Option: ");
    int j;
    scanf("%d",&j);
    switch(j){
    case 1: system("cls");
            DataBaseConcept();
            break;
    case 2: system("cls");
            Sql();
            break;
    case 3: system("cls");
            Access();
            break;
    case 4: system("cls");
            main();
            break;
    case 5: exit(0);
            break;
    default: system("cls");
            printf("\n\n\t\t\tWrong Input\n\t\t\tPlease Enter Correct Number: ");
            goto aa;
            getche();
            break;
    }
}
void DataBaseConcept()
{
  int i,a[10],n=0;
    printf("\n\n\n\t\t\t||------------------------------||");
    printf("\n\t\t\t||------------------------------||\n");
    printf("\t\t\t||\t      Welcome\t\t||\n");
    printf("\t\t\t||\t        To \t        ||\n");
    printf("\t\t\t||  DataBase Concepts Quiz Game ||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\t||------------------------------||\n\n");
    printf("\t\t\tIt Contains 10 Question Each Carries 10 Point\n\n");
    for(i=1;i<=10;i++){
        n=0;
        switch(i){
        case 1: printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 1\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\t\t\tWhat do you mean by one to many relationship between Teacher and Class table?\n");
                printf("\t\t\t1| One class may have many teachers\n\t\t\t2| One teacher can have many classes\n\t\t\t3| Many classes may have many teachers\n\t\t\t4| Many teachers may have many classes\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 2: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 2\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhat are the different view to present a Table ?\n");
                printf("\t\t\t1| Datasheet View\n\t\t\t2| Design View\n\t\t\t3| Pivote TableView\n\t\t\t4| All Of Above\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 3: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 3\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tIn one-to-many relationship the table on 'many' side is called _______\n");
                printf("\t\t\t1| Parent\n\t\t\t2| Child\n\t\t\t3| Sister\n\t\t\t4| Master\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 4: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 4\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tIn which state one gathers and list all the necessary fields for the database design project.\n");
                printf("\t\t\t1| Data Definition\n\t\t\t2| Data Refinement\n\t\t\t3| Establishing Relationship\n\t\t\t4| None Of The Above\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 5: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 5\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following enables us to view data from a table based on a specific criterion\n");
                printf("\t\t\t1| Form\n\t\t\t2| Query\n\t\t\t3| Macro\n\t\t\t4| Report\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 6: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 6\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich database object is ideal to view, change, andanalyze datain different ways ?\n");
                printf("\t\t\t1| Table\n\t\t\t2| Form\n\t\t\t3| Query\n\t\t\t4| Report\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 7: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 7\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tIn one-to-many relationship the table in 'one' side is called _______\n");
                printf("\t\t\t1| Child\n\t\t\t2| Owner\n\t\t\t3| Parent\n\t\t\t4| Owner\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{

                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 8: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 8\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich data type allows alphanumeric characters and special symbols to be entered?\n");
                printf("\t\t\t1| Text\n\t\t\t2| Memo\n\t\t\t3| Auto number\n\t\t\t4| Mixed\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 9: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 9\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tIt is used to establish an association between related tables.\n");
                printf("\t\t\t1| Line\n\t\t\t2| Relationship\n\t\t\t3| Primary Key\n\t\t\t4| Records\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 10:system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 10\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tThis key that uniquely identifies each record is called :\n");
                printf("\t\t\t1| Primary Key\n\t\t\t2| Key Record\n\t\t\t3| Unique Key\n\t\t\t4| Field Name\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tCongratulation You Won The Quiz Game");
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        default:system("cls");
                printf("\n\t\t\tWrong Input Please Enter Correct Input");
                break;
        }
    }
}

void Sql()
{
    int i,a[10],n=0;
    printf("\n\n\n\t\t\t||------------------------------||");
    printf("\n\t\t\t||------------------------------||\n");
    printf("\t\t\t||\t      Welcome\t\t||\n");
    printf("\t\t\t||\t        To \t        ||\n");
    printf("\t\t\t||\t   SQL Quiz Game\t||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\tIt Contains 10 Question Each Carries 10 Point\n\n");
    for(i=1;i<=10;i++){
        n=0;
        switch(i){
        case 1: printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 1\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\t\t\tWhich data manipulation command is used to combines the records from one or more tables?\n");
                printf("\t\t\t1| SELECT\n\t\t\t2| PROJECT\n\t\t\t3| JOIN\n\t\t\t4| PRODUCT\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 2: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 2\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following is not a valid SQL type?\n");
                printf("\t\t\t1| DECIMAL\n\t\t\t2| NUMERIC\n\t\t\t3| FLOAT\n\t\t\t4| CHARACTER\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 3: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 3\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tSQL permits attribute names to be repeated in the same relation. (True or False)\n");
                printf("\t\t\t1| FALSE\n\t\t\t2| TRUE\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 4: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 4\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich operator is used to compare a value to a specified list of values?\n");
                printf("\t\t\t1| BETWEEN\n\t\t\t2| ANY\n\t\t\t3| IN\n\t\t\t4| ALL\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 5: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 5\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tA SQL query automatically eliminates duplicates (True / False) ?\n");
                printf("\t\t\t1| TRUE\n\t\t\t2| FALSE\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 6: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 6\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tThe SQL used by front-end application programs to request data from the DBMS is called _______\n");
                printf("\t\t\t1| DML\n\t\t\t2| DDL\n\t\t\t3| VDL\n\t\t\t4| SDL\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 7: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 7\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tThe command used to delete a particular column in a relation is ____________\n");
                printf("\t\t\t1| UPDATE TABLE\n\t\t\t2| TRUNCATE COLUMN\n\t\t\t3| ALTER , DROP\n\t\t\t4| DELETE COLUMN\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 8: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 8\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following operations requires the relations to be union compatible?\n");
                printf("\t\t\t1| UNION\n2| INTERSECTION\n3| DIFFERENCE\n4| ALL OF THESE\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 9: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 9\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tThe database language that allows us to access data in a database is called :\n");
                printf("\t\t\t1| DCL\n\t\t\t2| DML\n\t\t\t3| DDL\n\t\t\t4| None Of Above\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 10:system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 10\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following is a comparison operator in SQL?\n");
                printf("\t\t\t1| Double equal sign ( == )\n\t\t\t2| LIKE\n\t\t\t3| BETWEEN\n\t\t\t4| Single equal sign ( = )\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tCongratulation You Won The Quiz Game");
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        default:system("cls");
                printf("\n\t\t\tWrong Input Please Enter Correct Input");
                break;
        }
    }
}

void Access()
{
    int i,a[10],n=0;
    printf("\n\n\n\t\t\t||------------------------------||");
    printf("\n\t\t\t||------------------------------||\n");
    printf("\t\t\t||\t      Welcome\t\t||\n");
    printf("\t\t\t||\t        To \t        ||\n");
    printf("\t\t\t||\tMs Access Quiz Game\t||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\t||------------------------------||\n\n");
    printf("\t\t\tIt Contains 10 Question Each Carries 10 Point\n\n");
    for(i=1;i<=10;i++){
        n=0;
        switch(i){
        case 1: printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 1\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\t\t\tWhich field type will you select if you need to enter long text in that field?\n");
                printf("\t\t\t1| Text\n\t\t\t2| Memo\n\t\t\t3| Currency\n\t\t\t4| Hyperlink\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 2: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 2\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tThe expression builder is an access tool that controls an expression___ for entering an expression\n");
                printf("\t\t\t1| Table\n\t\t\t2| Box\n\t\t\t3| Cell\n\t\t\t4| Palette\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 3: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 3\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following is not a type of MS Access databaseobject?\n");
                printf("\t\t\t1| Table\n\t\t\t2| Form\n\t\t\t3| Worksheets\n\t\t\t4| Modules");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 4: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 4\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tIn which method we don't need to specify the field type and size while creating a new Table?\n");
                printf("\t\t\t1| Design View\n\t\t\t2| While using Wizard\n\t\t\t3| CreateTable By Entering Data\n\t\t\t4| All of Above\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 5: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 5\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tThe size of yes/no field is always ________\n");
                printf("\t\t\t1| 1 Bit\n\t\t\t2| 1 Byte\n\t\t\t3| 1 Character\n\t\t\t4| 1 KB");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 6: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 6\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tThe size of a field with number data type can not be _____\n");
                printf("\t\t\t1| 2\n\t\t\t2| 4\n\t\t\t3| 8\n\t\t\t4| 16\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 7: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 7\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tHo can you edit a relationship already established between two tables?\n");
                printf("\t\t\t1| Right click the relationship line and choose Edit Relationship\n\t\t\t2| Double click the relationship line\n\t\t\t3| Both of above\n\t\t\t4| None of above\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 8: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 8\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhat does the show check box in query design window indicate ?\n");
                printf("\t\t\t1| It indicates whether the field is to be used or not.\n\t\t\t2| It indicates whether the field is to be displayed in query result or not\n\t\t\t3| It indicates whether the field names to be displayed in query result or not.\n\t\t\t4| It indicates whether the field is to be used for grouping result or not.\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 9: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 9\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following option creates a Drop Down List of values ?\n");
                printf("\t\t\t1| Ole Object\n\t\t\t2| Hyperlink\n\t\t\t3| Memo\n\t\t\t4| Lookup Wizard\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 10:system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 10\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\twhat can be the maximum length of a text field ?\n");
                printf("\t\t\t1| 120\n\t\t\t2| 255\n\t\t\t3| 265\n\t\t\t4| 75\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tCongratulation You Won The Quiz Game");
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        default:system("cls");
                printf("\n\t\t\tWrong Input Please Enter Correct Input");
                break;
        }
    }
}



void PartforProgamming()
{
    aa:
    printf("\n\n\n\t\t\t||------------------------------||");
    printf("\n\t\t\t||------------------------------||\n");
    printf("\t\t\t||\t      Welcome\t\t||\n");
    printf("\t\t\t||\t        To \t        ||\n");
    printf("\t\t\t||     Programming Quiz Game\t||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\t||------------------------------||\n\n\n");
    printf("\t\t\tWhich Quiz Topic you want to play\n\n");
    printf("\t\t\t1. HTML\n");
    printf("\t\t\t2. PHP\n");
    printf("\t\t\t3. C\n");
    printf("\t\t\t4. C++\n");
    printf("\t\t\t5. Java\n");
    printf("\t\t\t6. Back\n\n");
    printf("\t\t\tChoose Your Option: ");
    int j;
    scanf("%d",&j);
    switch(j){
    case 1: system("cls");
            HTML();
            break;
    case 2: system("cls");
            PHP();
            break;
    case 3: system("cls");
            SortForm();
            break;
    case 4: system("cls");
            Cpluse();
            break;
    case 5: system("cls");
            Java();
            break;
    case 6: system("cls");
            main();
            break;
    default: system("cls");
            printf("\n\n\t\t\tWrong Input\n\t\t\tPlease Enter Correct Number: ");
            goto aa;
            getche();
            break;
    }

}
void PHP()
{
    FILE * Record;
    Record=fopen("Record.txt","a");
    int i,a[10],n=0;
    cc:
    printf("\n\n\n\t\t\t||------------------------------||");
    printf("\n\t\t\t||------------------------------||\n");
    printf("\t\t\t||\t      Welcome\t\t||\n");
    printf("\t\t\t||\t        To \t        ||\n");
    printf("\t\t\t||\t   PHP Quiz Game\t||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\t||------------------------------||\n\n");
    printf("\t\t\tIt Contains 10 Question Each Carries 10 Point\n\n");
    for(i=1;i<=10;i++){
        n=0;
        switch(i){
        case 1: printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 1\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\t\t\tPHP Stands for?\n");
                printf("\t\t\t1| PHP Hypertex Processor\n\t\t\t2| PHP Hyper Markup Processor\n\t\t\t3| PHP Hyper Markup Preprocessor\n\t\t\t4| PHP Hypertext Preprocessor\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 2: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 2\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tPHP is an example of ___________ scripting language.\n");
                printf("\t\t\t1| Server-side\n\t\t\t2| Client-side\n\t\t\t3| Browser-side\n\t\t\t4| In-side\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 3: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 3\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWho is known as the father of PHP?\n");
                printf("\t\t\t1| Rasmus Lerdorf\n\t\t\t2| Willam Makepiece\n\t\t\t3| Drek Kolkevi\n\t\t\t4| List Barely\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 4: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 4\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following is not true?\n");
                printf("\t\t\t1| PHP can be used to develop web applications.\n\t\t\t2| PHP makes a website dynamic\n\t\t\t3| PHP applications can not be compile\n\t\t\t4| PHP can not be embedded into html.\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 5: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 5\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tPHP scripts are enclosed within _______\n");
                printf("\t\t\t1| <php> . . . </php>\n\t\t\t2| O<?php . . . ?>\n\t\t\t3| ?php . . . ?php\n\t\t\t4| <p> . . . </p>\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 6: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 6\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following variables is not a predefined variable?\n");
                printf("\t\t\t1| $get\n\t\t\t2| $ask\n\t\t\t3| $request\n\t\t\t4| $post\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 7: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 7\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhen you need to obtain the ASCII value of a character which of the following function you apply in PHP?\n");
                printf("\t\t\t1| chr( );\n\t\t\t2| asc( );\n\t\t\t3| ord( );\n\t\t\t4| val( );\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 8: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 8\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following method sends input to a script via a URL?\n");
                printf("\t\t\t1| Get\n\t\t\t2| Post\n\t\t\t3| Both\n\t\t\t4| None\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 9: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 9\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following function returns a text in title case from a variable?\n");
                printf("\t\t\t1| ucwords($var)\n\t\t\t2| upper($var)\n\t\t\t3| toupper($var)\n\t\t\t4| ucword($var)\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 10:system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 10\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following function returns the number of characters in a string variable?\n");
                printf("\t\t\t1| count($variable)\n\t\t\t2| len($variable)\n\t\t\t3| strcount($variable)\n\t\t\t4| strlen($variable)\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tCongratulation You Won The Quiz Game");
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        default:system("cls");
                printf("\n\t\t\tWrong Input Please Enter Correct Input");
                break;
        }
    }
}
void HTML()
{
  int i,a[10],n=0;
    printf("\n\n\n\t\t\t||------------------------------||");
    printf("\n\t\t\t||------------------------------||\n");
    printf("\t\t\t||\t      Welcome\t\t||\n");
    printf("\t\t\t||\t        To \t        ||\n");
    printf("\t\t\t||\t   HTML Quiz Game\t||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\t||------------------------------||\n\n");
    printf("\t\t\tIt Contains 10 Question Each Carries 10 Point\n\n");
    for(i=1;i<=10;i++){
        n=0;
        switch(i){
        case 1: printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 1\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\t\t\tHTML is what type of language ?\n");
                printf("\t\t\t1| Scripting Language\n\t\t\t2| Markup Language\n\t\t\t3| Programming Language\n\t\t\t4| Network Protocol\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 2: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 2\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tHTML uses\n");
                printf("\t\t\t1| User defined tags\n\t\t\t2| Pre-specified tags\n\t\t\t3| Fixed tags defined by the language\n\t\t\t4| Tags only for linking\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 3: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 3\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tThe year in which HTML was first proposed _______.\n");
                printf("\t\t\t1| 1990\n\t\t\t2| 1980\n\t\t\t3| 2000\n\t\t\t4| 1995\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 4: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 4\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tFundamental HTML Block is known as ___________.\n");
                printf("\t\t\t1| HTML Body\n\t\t\t2| HTML Tag\n\t\t\t3| HTML Attribute\n\t\t\t4| HTML Element\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 5: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 5\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tApart from <b> tag, what other tag makes text bold ?\n");
                printf("\t\t\t1| <fat>\n\t\t\t2| <strong>\n\t\t\t3| <black>\n\t\t\t4| <emp>\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 6: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 6\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhat is the full form of HTML?\n");
                printf("\t\t\t1| HyperText Markup Language\n\t\t\t2| Hyper Teach Markup Language\n\t\t\t3| Hyper Tech Markup Language\n\t\t\t4| None of these\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 7: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 7\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWho is Known as the father of World Wide Web (WWW)?\n");
                printf("\t\t\t1| Robert Cailliau\n\t\t\t2| Tim Thompson\n\t\t\t3| Charles Darwin\n\t\t\t4| Tim Berners-Lee\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 8: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 8\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhat should be the first tag in any HTML document?\n");
                printf("\t\t\t1| <head>\n\t\t\t2| <title>\n\t\t\t3| <html>\n\t\t\t4| <document>\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 9: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 9\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tHow can you make a bulleted list with numbers?\n");
                printf("\t\t\t1| <dl>\n\t\t\t2| <ol>\n\t\t\t3| <list>\n\t\t\t4| <ul>\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 10:system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 10\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhat tag is used to display a picture in a HTML page?\n");
                printf("\t\t\t1| picture\n\t\t\t2| image\n\t\t\t3| img\n\t\t\t4| src\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tCongratulation You Won The Quiz Game");
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        default:system("cls");
                printf("\n\t\t\tWrong Input Please Enter Correct Input");
                break;
        }
    }
}
void SortForm()
{
    int i,a[10],n=0;
    cc:
    printf("\n\n\n\t\t\t||------------------------------||");
    printf("\n\t\t\t||------------------------------||\n");
    printf("\t\t\t||\t      Welcome\t\t||\n");
    printf("\t\t\t||\t        To \t        ||\n");
    printf("\t\t\t||\t    C Quiz Game\t\t||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\t||------------------------------||\n\n");
    printf("\t\t\tIt Contains 10 Question Each Carries 10 Point\n\n");
    for(i=1;i<=10;i++){
        n=0;
        switch(i){
        case 1: printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 1\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\t\t\tWho is known as the father of C Language ?\n");
                printf("\t\t\t1| James A. Sosling\n\t\t\t2| Vjarne Stroustrup\n\t\t\t3| Dennis Ritchie\n\t\t\t4| Dr. E. F. Codd\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 2: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 2\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tC Language was developed in the year ____\n");
                printf("\t\t\t1| 1970\n\t\t\t2| 1975\n\t\t\t3| 1980\n\t\t\t4| 1985\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 3: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 3\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich one is not a reserve keyword in C Language?\n");
                printf("\t\t\t1| auto\n\t\t\t2| main\n\t\t\t3| case\n\t\t\t4| register\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 4: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 4\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tA C variable name can start with a ____\n");
                printf("\t\t\t1| Number\n\t\t\t2| Plus Sign (+)\n\t\t\t3| Underscore\n\t\t\t4| Asterisk (*)\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 5: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 5\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tPrototype of a function means _____\n");
                printf("\t\t\t1| Name of Function\n\t\t\t2| Output of Function\n\t\t\t3| Declaration of Function\n\t\t\t4| Input of a Function\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 6: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 6\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tName the loop that executes at least once.\n");
                printf("\t\t\t1| For\n\t\t\t2| If\n\t\t\t3| do-while\n\t\t\t4| while\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 7: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 7\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tFar pointer can access _____\n");
                printf("\t\t\t1| Single memory location\n\t\t\t2| No memory location\n\t\t\t3| All memory location\n\t\t\t4| First and Last Memory Address\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 8: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 8\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tA pointer pointing to a memory location of the variable even after deletion of the variavle is known as _____\n");
                printf("\t\t\t1| far pointer\n\t\t\t2| dangling pointer\n\t\t\t3| null pointer\n\t\t\t4| void pointer\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 9: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 9\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tAn uninitialized pointer in C is called ___\n");
                printf("\t\t\t1| Constructor\n\t\t\t2| dangling pointer\n\t\t\t3| Wild Pointer\n\t\t\t4| Destructor\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 10:system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 10\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tA pointer that is pointing to NOTHING is called ____\n");
                printf("\t\t\t1| VOID Pointer\n\t\t\t2| DANGLING Pointer\n\t\t\t3| NULL Pointer\n\t\t\t4| WILD Pointer\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tCongratulation You Won The Quiz Game");
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        default:system("cls");
                printf("\n\t\t\tWrong Input Please Enter Correct Input");
                break;
        }
    }
}
void Cpluse()
{
    int i,a[10],n=0;
    printf("\n\n\n\t\t\t||------------------------------||");
    printf("\n\t\t\t||------------------------------||\n");
    printf("\t\t\t||\t      Welcome\t\t||\n");
    printf("\t\t\t||\t        To \t        ||\n");
    printf("\t\t\t||\t   C++ Quiz Game\t||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\t||------------------------------||\n\n");
    printf("\t\t\tIt Contains 10 Question Each Carries 10 Point\n\n");
    for(i=1;i<=10;i++){
        n=0;
        switch(i){
        case 1: printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 1\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\t\t\tDelaration a pointer more than once may cause ____\n");
                printf("\t\t\t1| Error\n\t\t\t2| Abort\n\t\t\t3| Trap\n\t\t\t4| Null\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 2: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 2\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich one is not a correct variable type in C++?\n");
                printf("\t\t\t1| float\n\t\t\t2| real\n\t\t\t3| int\n\t\t\t4| double\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 3: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 3\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich operation is used as Logical 'AND'\n");
                printf("\t\t\t1| Operator-&\n\t\t\t2| Operator-||\n\t\t\t3| Operator-&&\n\t\t\t4| Operator +\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 4: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 4\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tAn expression A.B in C++ means ____\n");
                printf("\t\t\t1| A is member of object B\n\t\t\t2| B is member of Object A\n\t\t\t3| Product of A and B\n\t\t\t4| None of these\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 5: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 5\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tA C++ code line ends with ___\n");
                printf("\t\t\t1| A Semicolon (;)\n\t\t\t2| A Fullstop(.)\n\t\t\t3| A Comma (,)\n\t\t\t4| A Slash (/)\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 6: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 6\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\t______ function is used to allocate space for array in memory.\n");
                printf("\t\t\t1| malloc()\n\t\t\t2| realloc()\n\t\t\t3| alloc()\n\t\t\t4| calloc()\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 7: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 7\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tA ponter pointing to a variable that is not initialized is called ____\n");
                printf("\t\t\t1| Void Pointer\n\t\t\t2| Null Pointer\n\t\t\t3| Empty Pointer\n\t\t\t4| Wild Pointer\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 8: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 8\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tDefault constructor has ____ arguments.\n");
                printf("\t\t\t1| No argument\n\t\t\t2| One Argument\n\t\t\t3| Two Argument\n\t\t\t4| None of these\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 9: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 9\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tA class whos objects can not be created is known as _____\n");
                printf("\t\t\t1| Absurd Class\n\t\t\t2| Dead Class\n\t\t\t3| Super Class\n\t\t\t4| Abstract Class\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 10:system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 10\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich class allows only one object to be created.\n");
                printf("\t\t\t1| Nuclear Family Class\n\t\t\t2| Abstruct Class\n\t\t\t3| Sigleton Class\n\t\t\t4| Numero Uno Class\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tCongratulation You Won The Quiz Game");
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        default:system("cls");
                printf("\n\t\t\tWrong Input Please Enter Correct Input");
                break;
        }
    }
}
void Java()
{
    int i,a[10],n=0;
    printf("\n\n\n\t\t\t||------------------------------||");
    printf("\n\t\t\t||------------------------------||\n");
    printf("\t\t\t||\t      Welcome\t\t||\n");
    printf("\t\t\t||\t        To \t        ||\n");
    printf("\t\t\t||\t  JAVA Quiz Game\t||\n");
    printf("\t\t\t||------------------------------||\n");
    printf("\t\t\t||------------------------------||\n\n");
    printf("\t\t\tIt Contains 10 Question Each Carries 10 Point\n\n");
    for(i=1;i<=10;i++){
        n=0;
        switch(i){
        case 1: printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 1\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\t\t\tPrimitive data types present in Java are\n");
                printf("\t\t\t1| 4\n\t\t\t2| 8\n\t\t\t3| 16\n\t\t\t4| 32\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                }
                break;
        case 2: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 2\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWho is known as father of Java Programming Language?\n");
                printf("\t\t\t1| James Gosling\n\t\t\t2| M. P Java\n\t\t\t3| Charel Babbage\n\t\t\t4| Blais Pascal\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 3: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 3\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tIn java control statements break, continue, return, try-catch-finally and assert belongs to?\n");
                printf("\t\t\t1| Selection statements\n\t\t\t2| Loop Statements\n\t\t\t3| Transfer statements\n\t\t\t4| Pause Statement\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 4: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 4\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich provides runtime environment for java byte code to be executed?\n");
                printf("\t\t\t1| JDK\n\t\t\t2| JVM\n\t\t\t3| JRED\n\t\t\t4| JAVAC\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 5: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 5\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhat is byte code in Java?\n");
                printf("\t\t\t1| Code generated by a Java compiler\n\t\t\t2| Code generated by a Java Virtual Machine\n\t\t\t3| Name of Java source code file\n\t\t\t4| Block of code written inside a class\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 6: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 6\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of the following are not Java keywords ?\n");
                printf("\t\t\t1| double\n\t\t\t2| switch\n\t\t\t3| then\n\t\t\t4| instanceof\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 7: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 7\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of these have highest precedence?\n");
                printf("\t\t\t1| ()\n\t\t\t2| ++\n\t\t\t3| *\n\t\t\t4| >>\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==1){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 1");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 8: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 8\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tWhich of these is returned by operator '&' ?\n");
                printf("\t\t\t1| Integer\n\t\t\t2| Character\n\t\t\t3| Boolean\n\t\t\t4| Float\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==2){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 2");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 9: system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 9\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tData type long literals are appended by _____\n");
                printf("\t\t\t1| Uppercase L\n\t\t\t2| Lowercase L\n\t\t\t3| Long\n\t\t\t4| Both A and B\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==4){
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\nYour Next Question is:\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 4");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        case 10:system("cls");
                printf("\n\n\n\t\t\t|-----------------------|\n");
                printf("\t\t\t|\tQuestion: 10\t|\n");
                printf("\t\t\t|-----------------------|\n\n");
                printf("\n\t\t\tJava language was initially called as ________\n");
                printf("\t\t\t1| Sumatra\n\t\t\t2| J++\n\t\t\t3| Oak\n\t\t\t4| Pine\n");
                printf("\t\t\tChoose Your Number: ");
                scanf("%d",&n);
                if(n==3){
                    printf("\n\t\t\tCongratulation You Won The Quiz Game");
                    printf("\n\t\t\tRight Answer\nNow You Have Won %d Point\n",i);
                }
                else{
                    printf("\n\t\t\tWrong Answer");
                    printf("\n\t\t\tCorrect Answer is 3");
                    printf("\n\t\t\tBetter Luck Next Time Your Have Earn %d Point",i-1);
                    i=11;
                }
                break;
        default:system("cls");
                printf("\n\t\t\tWrong Input Please Enter Correct Input");
                break;
        }
    }
}
