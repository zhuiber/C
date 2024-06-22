// (1) 已知学生的记录由学号和学习成绩构成, 输入n个学生的学号和成绩。
// 找出成绩最低的学生记录(假定最低成绩的记录是唯一的), 通过函数返回。请编写程序实现该要求。
#include <stdio.h>
#include <stdlib.h>

// Define the structure for student records
typedef struct
{
  int id;
  int score;
} Student;

// Function to input student records
void input_students(Student *students, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Enter student ID and score for student %d: ", i + 1);
    scanf("%d %d", &students[i].id, &students[i].score);
  }
}

// Function to find the student with the minimum score
Student find_min_score_student(Student *students, int n)
{
  Student min_student = students[0];
  for (int i = 1; i < n; i++)
  {
    if (students[i].score < min_student.score)
    {
      min_student = students[i];
    }
  }
  return min_student;
}

int main()
{
  int n;

  printf("Enter the number of students: ");
  scanf("%d", &n);

  // Allocate memory for student records
  Student *students = (Student *)malloc(n * sizeof(Student));

  // Input student records
  input_students(students, n);

  // Find the student with the minimum score
  Student min_student = find_min_score_student(students, n);

  // Output the student with the minimum score
  printf("Student with the lowest score:\n");
  printf("ID: %d, Score: %d\n", min_student.id, min_student.score);

  // Free allocated memory
  free(students);

  return 0;
}
