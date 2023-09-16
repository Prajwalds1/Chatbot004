#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Function for calculating grades
char calculate_grade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 80) {
        return 'B';
    } else if (percentage >= 70) {
        return 'C';
    } else if (percentage >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}
//Function to Track attendence
void trackAttendance() {
// Open the attendance file for reading
    FILE *attendanceFile = fopen("attendance.txt", "r");
    if (attendanceFile == NULL) {
        perror("Error opening attendance file");
        return;
    }

    char line[100];
    while (fgets(line, sizeof(line), attendanceFile)) {
        printf("%s", line);
    }

    // Close the file
    fclose(attendanceFile);
    
}
//Function to call Timetable
void viewTimeTable() {
  // Open the timetable file for reading
    FILE *timetableFile = fopen("timetable.txt", "r");
    if (timetableFile == NULL) {
        perror("Error opening timetable file");
        return;
    }

    char line[100];
    while (fgets(line, sizeof(line), timetableFile)) {
        printf("%s", line);
    }

    // Close the file
    fclose(timetableFile);
}

// Function to get user feedback
void getUserFeedback(char *feedback, int maxLength) {
    printf("Enter your Feedback:\n");
    scanf(" %[^\n]", feedback); // Read a line of text as feedback
}

//Main Function
int main() {
// Variable Declarations
    int choice;
    int userChoice;
    int courseChoice;
    int fileEditChoice;
    int Department;
    float percentage;
    int syllabus;
    char feedback[2000];
    char name[15];
    char password[] = "123"; 
    char pass[10];
    char grade[10];
    char subject[15];
// User selection: User or Faculty
    printf("*************WELCOME TO MITE*************\n");
    printf("Select an option:\n");
    printf("1. User\n");
    printf("2. Faculty\n");
    scanf("%d", &choice);
// Main program loop
    switch (choice){
    case 1:
    printf("Enter the name:");
    scanf("%14s", name);
    }
    while(1){
    switch (choice){
// User Menu
    case 1:
        printf("welcome %s",name);
        printf("\nSelect an option:\n");
        printf("1. About College\n");
        printf("2. Fees Structure\n");
        printf("3. Faculty details\n");
        printf("4. Course details\n");
        printf("5. User feedback\n");
        printf("0.Exit\n");
        scanf("%d", &userChoice);
        switch (userChoice) {
        case 1:
       // About College
           {
            FILE *aboutCollegeFile = fopen("about_college.txt", "r");
            if (aboutCollegeFile == NULL) {
            perror("Error opening about_college file");
             break;
             }

            char line[100];
            while (fgets(line, sizeof(line), aboutCollegeFile)) {
            printf("%s", line);
            }

            // Close the file
        
            fclose(aboutCollegeFile);
         }
        break;

        case 2:
        // Fees Structure
        {
                            FILE *feesFile = fopen("fees_structure.txt", "r");
                            if (feesFile == NULL) {
                                perror("Error opening fees_structure file");
                                break;
                            }

                            char line[100];
                            while (fgets(line, sizeof(line), feesFile)) {
                                printf("%s", line);
                            }

                            // Close the file
                            fclose(feesFile);
                        }
                        break;   
        case 3:
        //Faculty Details
           {
                            FILE *facultyFile = fopen("faculty_details.txt", "r");
                            if (facultyFile == NULL) {
                                perror("Error opening faculty_details file");
                                break;
                            }

                            char line[100];
                            while (fgets(line, sizeof(line), facultyFile)) {
                                printf("%s", line);
                            }

                            // Close the file
                            fclose(facultyFile);
                        }
                        break; 
        case 4:
        // Course Details
            printf("Select an option:\n");
            printf("1. Undergraduate\n");
            printf("2. Postgraduate\n");
            scanf("%d", &courseChoice);
            
            while(1){
            switch (courseChoice) {
            case 1:
                printf("Undergraduate courses:\n");
                
                {
                            FILE *UndergraduateFile = fopen("Undergraduate_courses.txt", "r");
                            if (UndergraduateFile == NULL) {
                                perror("Error opening Undergraduate_courses file");
                                break;
                            }

                            char line[100];
                            while (fgets(line, sizeof(line),UndergraduateFile)) {
                                printf("%s", line);
                            }

                            // Close the file
                            fclose(UndergraduateFile);
                        }
                        break;

            case 2:
                printf("Postgraduate courses:\n");
                
            {
                            FILE *PostgraduateFile = fopen("Postgraduate_courses.txt", "r");
                            if (PostgraduateFile == NULL) {
                                perror("Error opening Postgraduate_courses file");
                                break;
                            }

                            char line[100];
                            while (fgets(line, sizeof(line), PostgraduateFile)) {
                                printf("%s", line);
                            }

                            // Close the file
                            fclose(PostgraduateFile);
                        }
                        break;

            default:
                printf("Invalid choice!\n");
                break;
            }
            break;}

        case 5:
        //User Feedback
            {
                            char feedback[2000];
                            getUserFeedback(feedback, sizeof(feedback));
                            printf("Your Feedback: %s\n", feedback);
                        }
                        break;
       
        case 0:
        //Exit
            printf("Exiting the program. Goodbye!\n");
            exit(0);
            
        default:
            printf("Invalid choice!\n");
            break;
        }
           break; 
        
    case 2:
        //Faculty Login
        printf("Enter your user name:\n");
        scanf("%14s", name); // Increased the size to account for the null terminator
        printf("Enter your user password:\n");
        scanf("%9s", pass); // Limit input to 9 characters
        if (strcmp(password, pass) == 0) {
            printf("Hello, Faculty!\n");

            printf("Select an option:\n");
            printf("1. Department\n");
            printf("2. Syllabus copy \n");
            printf("3. Create Text File\n");
            printf("4. Write/Edit Text File\n");
            scanf("%d", &fileEditChoice);
            
            while(1)
            switch (fileEditChoice) {
            case 1:
            //Faculty Menu
                printf("\nUndergraduate courses:\n");
                printf("Choose an option:\n");
                printf("1. Track Attendance\n");
                printf("2. Grade Assignments\n");
                printf("3. Calculate Grades\n");
                printf("4. View Time Table\n");
                printf("0. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &Department);
             //Department Menu
                switch (Department) {
                case 1:
                    //Tracking Attendence
                    trackAttendance();
                    break;

                case 2:
                    // Grade Assignments
                    printf("Grading Assignment\n");
                    printf("Enter the name:");
                    scanf("%14s", name);
                    printf("Enter the subject:");
                    scanf("%14s", subject);
                    printf("Enter the Grade:\n");
                    scanf("%14s", grade);
                    printf("%s scored %s GRADE in %s subject",name,grade,subject);
                    break;

                case 3:
                    //Calculating Grades
                    printf("Enter the percentage: ");
                    scanf("%f", &percentage);

                    char grade = calculate_grade(percentage);
                    printf("Your grade is: %c\n", grade);
                    break;

                case 4:
                    //view Timetable
                    viewTimeTable();
                    break;

                case 0:
                    printf("Thank you!\n");
                    exit(0);

                default:
                    printf("Invalid choice. Please select a valid option.\n");
                    break;
                }
                break;

            case 2:
            //Syllabus menu
            printf("Select an option:\n");
            printf("1. IT Branch\n");
            printf("2. Core Branch\n");
            scanf("%d", &syllabus);

            switch (syllabus) {
            case 1:
                printf("IT Branch:\n");
                 {
                            FILE *IT_BranchFile = fopen("IT_Branch.txt", "r");
                            if (IT_BranchFile == NULL) {
                                perror("Error opening IT_Branch file");
                                break;
                            }

                            char line[100];
                            while (fgets(line, sizeof(line), IT_BranchFile)) {
                                printf("%s", line);
                            }

                            // Close the file
                            fclose(IT_BranchFile);
                        }
                        break;
               

            case 2:
                printf("Core Branch:\n");
                 {
                            FILE *Core_BranchFile = fopen("Core_Branch.txt", "r");
                            if (Core_BranchFile == NULL) {
                                perror("Error opening IT_Branch file");
                                break;
                            }

                            char line[100];
                            while (fgets(line, sizeof(line),Core_BranchFile)) {
                                printf("%s", line);
                            }

                            // Close the file
                            fclose(Core_BranchFile);
                        }
                        break;
            

            default:
                printf("Invalid choice!\n");
                break;
            }
                break;

             case 3:
            // Create and Write Text File
            {
                printf("Enter the name of the new text file (e.g., new_file.txt):\n");
                char newFileName[50];
                scanf("%49s", newFileName); // Limit input to 49 charactersr

                FILE *newFile = fopen(newFileName, "w"); // Open in write mode
                if (newFile == NULL) {
                    perror("Error creating text file");
                    break;
                }

                char newContent[1000];
                printf("Enter content for '%s':\n", newFileName);
                scanf(" %[^\n]", newContent); // Read a line of text
                fprintf(newFile, "%s", newContent); // Write the new content
                fclose(newFile);

                printf("New text file '%s' created and written successfully.\n", newFileName);
            }
            exit(0);

            case 4:
            // Write/Edit Text File
            {
                printf("Enter the name of the text file you want to edit (e.g., about_college.txt):\n");
                char fileName[50];
                scanf("%49s", fileName); // Limit input to 49 characters

                FILE *editFile = fopen(fileName, "w"); // Open in write mode
                if (editFile == NULL) {
                    perror("Error opening text file for editing");
                    break;
                }

                char newContent[1000];
                printf("Enter new content for '%s':\n", fileName);
                scanf(" %[^\n]", newContent); // Read a line of text
                fprintf(editFile, "%s", newContent); // Write the new content
                fclose(editFile);

                printf("'%s' edited successfully.\n", fileName);
            }
            exit(0);

            default:
                printf("Invalid choice!\n");
                break;
            }


        } 
        else 
        {
            printf("Invalid password!\n");
        }
        break;

    default:
        printf("Invalid choice!\n");
        break;
    }
}
  return 0;
}
