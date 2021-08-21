/* calculation time upload file
   filename: Ch4Ex5.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	float file_upload_speed;
	float file_size;
	float file_upload_time;
	int correct_enter;

	printf("Enter file upload speed in megabits "
		   "and file size in megabytes:\n");
	correct_enter = scanf("%f %f", &file_upload_speed, &file_size);
	if(correct_enter != 2) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	file_upload_time = (file_size * 8.0f)/file_upload_speed;
	printf("At a upload speed of %.2f megabits per second "
		   "a %.2f megabyte file "
		   "is uploaded in %.2f second(s)\n", file_upload_speed, 
		   									  file_size,
		   									  file_upload_time);
	
	return 0;
}
