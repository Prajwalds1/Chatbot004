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
// Printing attendance details for multiple students
    printf("Name:Ramesh\n");
    printf("Branch=IC\n");
    printf("Total Percentage=88%%\n\n");
    
    printf("Name:Mohan\n");
    printf("Branch=IC\n");
    printf("Total Percentage=85%%\n\n");
    
    printf("Name:Akhilesh\n");
    printf("Branch=IC\n");
    printf("Total Percentage=100%%\n\n");
    
    printf("Name:Roy\n");
    printf("Branch=IC\n");
    printf("Total Percentage=90%%\n\n");
    
    printf("Name:Mark\n");
    printf("Branch=IC\n");
    printf("Total Percentage=91%%\n\n");
    
    printf("Name:Justin\n");
    printf("Branch=IC\n");
    printf("Total Percentage=93%%\n\n");
    
    printf("Name:Matt\n");
    printf("Branch=IC\n");
    printf("Total Percentage=75%%\n\n");
    
    printf("Name:Pete\n");
    printf("Branch=IC\n");
    printf("Total Percentage=99%%\n\n");
    
    printf("Name:Ben\n");
    printf("Branch=IC\n");
    printf("Total Percentage=35%%\n\n");
    
}
//Function to call Timetable
void viewTimeTable() {
 // Printing the timetable for each day of the week
    printf("Day      :I\t\tII\tIII\tIV\tV\tVI\n");
    printf("Monday   :21CSL46\t21CS43\t21CS41\t21CSL46\t21CIP47\t21CS43\n");
    printf("Tuesday  :21MAT21\t21CS43\t21CS44\t21CSL46\t21UHV47\t21CS42\n");
    printf("Wednesday:21BE45\t21CS43\t21CS42\t21MAT41\t21CS48\t21CS43\n");
    printf("Thursday :21INT49\t21CS481\t21CS44\t21CS42\t21CIP47\t21CS44\n");
    printf("Friday   :21CS46\t21CS43\t21MAT41\t21CS42\t21UHV47\t21CS43\n");
    printf("Satruday :21CSL46\t21CS43\t21CS41\n");
}
//Main Function
int main() {
// Variable Declarations
    int choice;
    int userChoice;
    int courseChoice;
    int faculty;
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
            printf("Mangalore Institute of Technology and Engineering (MITE) is an engineering and management institution located in Mangalore, India, established by the Rajalaxmi Education Trust under the leadership of Rajesh Chouta in 2007.[1] The institute is affiliated to the Visvesvaraya Technological University, Belgaum, and approved by the All India Council of Technical Education (AICTE), New Delhi. MITE, established in 2007, today stands tall with 3000+ students, 180+ Faculty, offering 9 Undergraduate Programs in Engineering, 1 Post Graduate Program in Engineering, Masters of Computer Applications, Master of Business Administration (MBA) and 7 research programs.[2] "
                   "MITE is accredited by National Assessment and Accreditation Council (NAAC) with A+ Grade, a CGPA Score of 3.44 out of 4\n");
            break;

        case 2:
        // Fees Structure
            printf("B.Tech: INR 13.10 Lakh \n M.Tech: INR 3.24 Lakh \n MBA: INR 2 Lakh \n  MCA: INR 3.24 Lakh\n");
            break;

        case 3:
        //Faculty Details
            printf("Prof. Prashanth C M Principal\nDr. Anand S N HoD – Aeronautical Engg\nDr. Ravinarayana B HoD – Computer Sc & Engg\nProf. Manjunath H HoD – Information Sc & Engg\nDr. Vinayambika S Bhat HoD – Electronics & Commn Engg\nDr. Shivananda V Seeri HoD – CSE (IoT & Cyber security with Blockchain Technology)\nMr. Sunil Kumar HoD – Dept of AI & ML\nDr. Ganesh Mogaveer HoD – Civil Engg\nDr. Vineetha Telma D’Souza HoD – Dept of Chemistry\nDr. Raghavendra Sagar HoD – Dept of Physics\nDr. Jyothi S HoD – Dept of Mathematics\n");
            break;

        case 4:
        // Course Details
            printf("Select an option:\n");
            printf("1. Undergraduate\n");
            printf("2. Postgraduate\n");
            scanf("%d", &courseChoice);
            
            while(1)
            switch (courseChoice) {
            case 1:
                printf("Undergraduate courses:\n");
                printf("AERONAUTICAL ENGINEERING\nCIVIL ENGINEERING\nCOMPUTER SCIENCE & ENGINEERING\nARTIFICIAL INTELLIGENCE & MACHINE LEARNING\nCSE(IOT AND CYBER SECURITY WITH BLOCKCHAIN TECHNOLOGY)\nINFORMATION SCIENCE AND ENGINEERING\nELECTRONICS AND COMMUNICATION ENGINEERING\nMECHANICAL ENGINEERING\n");
                break;

            case 2:
                printf("Postgraduate courses:\n");
                printf("MBA\n MCA\n COMPUTER SCIENCE AND ENGINEERING(M-TECH)\n"); // Corrected "print" to "printf"
                break;

            default:
                printf("Invalid choice!\n");
                break;
            }
            break;

        case 5:
        //User Feedback
            printf("Enter your Feedback:\n");
            scanf("%1999s", feedback); // Read up to 1999 characters to avoid buffer overflow
            printf("Your Feedback: %s\n", feedback);
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
            scanf("%d", &faculty);
            
            while(1)
            switch (faculty) {
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
                printf("COMPUTER SCIENCE & ENGINEERING\nARTIFICIAL INTELLIGENCE & MACHINE LEARNING\nCSE(IOT AND CYBER SECURITY WITH BLOCKCHAIN TECHNOLOGY)\nINFORMATION SCIENCE AND ENGINEERING\n");
                break;

            case 2:
                printf("Core Branch:\n");
                printf("AERONAUTICAL ENGINEERING\nCIVIL ENGINEERING\n ELECTRONICS AND COMMUNICATION ENGINEERING\nMECHANICAL ENGINEERING\n");
                break;

            default:
                printf("Invalid choice!\n");
                break;
            }
                break;

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
