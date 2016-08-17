#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <fcntl.h>

//Create a folder function
void createFolder(char path[])
{
    printf("\nEnter the path and folder name (ex: /home/user/fo-name): ");
    getchar();
    gets(path);

    int result = mkdir(path, 0700);
    if(result == -1)
        printf("Error! Please check: \n Path or Folder does exist or Permission!");
    else
        printf("Created folder successfully!");
}

//List files in a folder function
void listFiles(char path[])
{
    printf("\nEnter the folder path (ex: /home/user/fo-name): ");
    getchar();
    gets(path);

    DIR *d;
    struct dirent *dir;
    d = opendir(path);
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
}

//Create a file empty fuction
void addFile(char path[])
{
    printf("\nEnter the file path (ex: /home/user/fi-name.sh): ");
    getchar();
    gets(path);

    int fd = open(path, O_CREAT, S_IRUSR | S_IWUSR);
    if(fd == -1)
        printf("Error! Please check again!: Path or Permission!");
    else
        printf("Created file successfully!");

}

void removeFile(char path[])
{
    printf("\nEnter the file path (ex: /home/user/fi-name.sh): ");
    getchar();
    gets(path);

    int fd = remove(path);
    if(fd == -1)
        printf("Error! Please check again!: Path or Permission!");
    else
        printf("Remove file successfully!");

}

//Append to a file function
void appendFile(char path[])
{
    FILE *pFile;

    printf("\nEnter the file path (ex: /home/user/fi-name.sh): ");
    getchar();
    gets(path);

    pFile=fopen(path, "a");

    if(pFile == NULL)
    {
        printf("Error opening file.");
    }
    else
    {
        char text[100];
        printf("\nEnter the content of file: ");
        getchar();
        gets(text);

        fprintf(pFile, text);
        printf("Append to file successfully!");

    }
    fclose(pFile);

}

//Edit file: find a string and delete it.
void editFile(char path[])
{
    FILE *pFile;

    printf("\nEnter the file path (ex: /home/user/fi-name.sh): ");
    getchar();
    gets(path);

    pFile=fopen(path, "r+");

    if(pFile == NULL)
    {
        printf("Error opening file.");
    }
    else
    {
        char text;
        printf("\nEnter a char you want to delete: ");
        scanf("%c", &text);
        char ch;

        while ((ch = fgetc(pFile)) != EOF)
        {
            if (ch == text)
            {
                fseek(pFile, -1, SEEK_CUR);
                fprintf(pFile, " ");
                fseek(pFile, 0, SEEK_CUR);
            }
        }
        printf("Delete successfully!");

    }
    fclose(pFile);
}

//To clear the contents of a file
void clearFile(char path[])
{
    printf("\nEnter the file path (ex: /home/user/fi-name.sh): ");
    getchar();
    gets(path);
    struct stat st;

    if (stat(path, &st) != -1)
    {
        fclose(fopen(path, "w"));
        printf("Clear successfully!");
    }
    else
        printf("Files does not exist");
}

//The program main menu
int choose()
{
    int temp = 0;
    printf("\n---------------------------------------------");
    printf("\nMini file manager program!");
    printf("\n1. Create a folder");
    printf("\n2. List files");
    printf("\n3. Add a file");
    printf("\n4. Remove a file");
    printf("\n5. Append to a file");
    printf("\n6. Edit a file");
    printf("\n7. Clear the contents of a file ");
    printf("\n--------------------------------------------\n");
    printf("\nEnter 0 to quit! Please enter choice: ");
    scanf("%d", &temp);
    return temp;
}

int main()
{
    int temp = -1;
    char path[20];

    while(temp!=0)
    {
        temp = choose();
        switch(temp)
        {
            case 1:
                createFolder(path);
            break;
            case 2:
                listFiles(path);
            break;
            case 3:
                addFile(path);
            break;
            case 4:
                removeFile(path);
            break;
            case 5:
                appendFile(path);
            break;
            case 6:
                editFile(path);
            break;
            case 7:
                clearFile(path);
            break;
            default:
            break;
        }
    }
    return 0;
}
