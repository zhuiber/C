#include <stdio.h>

#define NUM_STUDENTS 5
#define NUM_SUBJECTS 4

int main()
{
  char names[NUM_STUDENTS][20] = {"张大明", "李小红", "王志强", "汪晓成", "李丹"};
  int scores[NUM_STUDENTS][NUM_SUBJECTS] = {
      {120, 130, 110, 280},
      {110, 120, 105, 290},
      {108, 128, 120, 278},
      {112, 135, 122, 286},
      {100, 120, 108, 276}};

  int total_scores[NUM_STUDENTS] = {0};
  float average_scores[NUM_STUDENTS] = {0.0f};
  int subject_totals[NUM_SUBJECTS] = {0};
  float subject_averages[NUM_SUBJECTS] = {0.0f};

  // Calculate total and average scores for each student
  for (int i = 0; i < NUM_STUDENTS; i++)
  {
    for (int j = 0; j < NUM_SUBJECTS; j++)
    {
      total_scores[i] += scores[i][j];
      subject_totals[j] += scores[i][j];
    }
    average_scores[i] = total_scores[i] / (float)NUM_SUBJECTS;
  }

  // Calculate average scores for each subject
  for (int j = 0; j < NUM_SUBJECTS; j++)
  {
    subject_averages[j] = subject_totals[j] / (float)NUM_STUDENTS;
  }

  // Print the results
  printf("每位同学的总分和平均分:\n");
  for (int i = 0; i < NUM_STUDENTS; i++)
  {
    printf("%s: 总分 = %d, 平均分 = %.2f\n", names[i], total_scores[i], average_scores[i]);
  }

  printf("\n各门功课的平均分:\n");
  printf("语文: %.2f\n", subject_averages[0]);
  printf("数学: %.2f\n", subject_averages[1]);
  printf("英语: %.2f\n", subject_averages[2]);
  printf("综合: %.2f\n", subject_averages[3]);

  return 0;
}
