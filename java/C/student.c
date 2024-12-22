#include <stdio.h> // Standard I/O library for input/output functions

// Defining the structure for a Student
struct Student {
    int studentid;      // Student ID (unique identifier for a student)
    char name[10];      // Name of the student (up to 9 characters + null terminator)
    char grade;         // Grade assigned based on average marks
    float marks[5];     // Array to store marks for 5 subjects
    float avg;          // Average of marks across the 5 subjects
};

// Function to calculate the average marks for a student
void calculate_average(struct Student *stu) {
    int i; // Loop variable for iterating over marks array
    float totalmarks = 0; // Variable to store the total marks
    for (i = 0; i < 5; i++) { // Loop through all 5 marks
        totalmarks += stu->marks[i]; // Add each mark to totalmarks
    }
    stu->avg = totalmarks / 5; // Calculate the average and assign to avg
}

// Function to assign a grade based on the average marks
void grademark(struct Student *st) {
    if (st->avg >= 90) { // If average is 90 or above, assign grade 'A'
        st->grade = 'A';
    } else if (st->avg >= 80) { // If average is between 80 and 89, assign grade 'B'
        st->grade = 'B';
    } else if (st->avg >= 70) { // If average is between 70 and 79, assign grade 'C'
        st->grade = 'C';
    } else if (st->avg >= 60) { // If average is between 60 and 69, assign grade 'D'
        st->grade = 'D';
    } else { // If average is below 60, assign grade 'F'
        st->grade = 'F';
    }
}

int main() {
    int i, j; // Loop variables for student and subject iteration
    struct Student student[2]; // Array to store details for 2 students

    for (i = 0; i < 2; i++) { // Loop to input and process details for each student
        printf("Enter student ID: "); // Prompt for student ID
        scanf("%d", &student[i].studentid); // Input student ID

        printf("Enter the name: "); // Prompt for student name
        scanf("%s", student[i].name); // Input student name

        printf("Enter the marks for 5 subjects\n"); // Prompt for marks input
        for (j = 0; j < 5; j++) { // Loop through the 5 subjects
            printf("Subject %d: ", j + 1); // Prompt for each subject's mark
            scanf("%f", &student[i].marks[j]); // Input the mark for the subject
        }

        // Calculate the average marks and assign a grade
        calculate_average(&student[i]); // Call function to calculate average
        grademark(&student[i]); // Call function to assign grade

        // Output the details of the student
        printf("\nStudent ID: %d\n", student[i].studentid); // Output student ID
        printf("Name: %s\n", student[i].name); // Output student name
        printf("Average Marks: %.2f\n", student[i].avg); // Output average marks
        printf("Grade: %c\n", student[i].grade); // Output grade
    }

    return 0; // Return 0 to indicate successful execution
}
