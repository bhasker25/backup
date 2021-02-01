#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void main(int argc, char *argv[])
{
	if(argc == 2)
	{
		char name1[500]="",name2[500]="",command[500]="",precommand[500]=""; // Define variables
		/*
			Constructing Command for make backup
		*/
		strcat(name1,argv[1]);
		strcpy(name2,name1);
		strcat(name2,"_backup");
		strcpy(precommand,"del /f /s /q ");
		strcat(precommand,name2);
		strcpy(command,"xcopy \".");
		strcat(command,"/");
		strcat(command,name1);
		strcat(command,"\" \".");
		strcat(command,"/");
		strcat(command,name2);
		strcat(command,"\" /e");

		system(precommand);	//  Delete Previous backup
		system(command);	// Copy Command or Make Backup
	}
	else{
		printf("Use Proper Command");
	}
}
