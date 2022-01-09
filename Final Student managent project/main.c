#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header/global_variables.h"
#include "header/program.h"
#include "header/course.h"
#include "header/student.h"
#include "header/course_enroll.h"
#include "header/results.h"

void title()
{
    printf("\n\t\t\t\t\t        ++++++++++++++++++++++++++++++++++++++++++++++++      ");
    printf("\n\t\t\t\t\t        +     WELCOME CU TO STUDENT MANAGEMENT SYSTEM  +      ");
    printf("\n\t\t\t\t\t        ++++++++++++++++++++++++++++++++++++++++++++++++      ");
    printf("\n\n\t\t\t\t\t\n\n\n");
    printf("\t\t\t\t\t\t              Admin Dashboard Panel");
    printf("\n\t\t\t\t\t        ++++++++++++++++++++++++++++++++++++++++++++++++      ");
}
void admin_main_menu ()
{
    printf("\n\t\t\t\t\t                    [1] PROGRAM(BRANCH)                         ");
    printf("\n\t\t\t\t\t                    [2] COURSE(SUBJECTS)                             ");
    printf("\n\t\t\t\t\t                    [3] STUDENT                               ");
    printf("\n\t\t\t\t\t                    [4] COURSE ENROLL                           ");
    printf("\n\t\t\t\t\t                    [5] RESULT                           ");
    printf("\n\t\t\t\t\t                    [6] EXIT                           ");
    printf("\n\t\t\t\t\t        ++++++++++++++++++++++++++++++++++++++++++++++++      ");
    int enter_menu;
    printf("\t\t\t\t\t\t\t\t\t\tPress the Number of Menu: ");
    scanf("%d",&enter_menu);

    switch(enter_menu)
    {
        case 1:     
       system("CLS");  
        title();  
        program();            
        break;

        case 2:     
        system("CLS");  
        title();  
        course();             
        break;

        case 3:     
        system("CLS");  
        title();  
        student();            
        break;

        case 4:     
        system("CLS");  
        title();  
        course_enroll();      
        break;

        case 5:     
        system("CLS");  
        title();  
        results();            
        break;

        case 6:     
        break;

        default:
            printf("\n\t\t\t\t\t!!! You Press Wrong Menu !!! Tray Again Y / N :");
            permission = getch();
            if(permission == 'Y' || permission == 'y')
            {
                system("CLS");  
                title(); 
                admin_main_menu();
            }
            break;
    }
}
void login()
{
    char id[30],pass[30];

    printf("\n\t\t\t\t        ++++++++++++++++++++++++++++++++++++++++++++++++      ");
    printf("\n\t\t\t\t        +                Admin Login Panel             +      ");
    printf("\n\t\t\t\t        ++++++++++++++++++++++++++++++++++++++++++++++++      ");
    printf("\t\t\t\t\t\n\n");

    printf("\t\t\t\t\t\tEnter id\t:   ");         
    scanf("%s",id);
    printf("\n\n\t\t\t\t\t\tEnter Password\t:   ");  
    scanf("%s",pass);

    if(strcmp(id,"21bcs7079")==0 && strcmp(pass,"7079")==0)
    {
        system("CLS");    
        title();  
        admin_main_menu();
    }
    else
    {
      printf("\n\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
      printf("\t\t\t\t\t\t!!! Invalid id / Password !!!\n\n");
      printf("\t\t\t\t\t\t\tTry Again ? y / n ");  
      permission = getch();

      if(permission == 'Y' || permission == 'y')
      {
          system("CLS");    
          login();
      }
      else
        exit(1);
    }
}

void main ()
{
    system("");
    login();

}
