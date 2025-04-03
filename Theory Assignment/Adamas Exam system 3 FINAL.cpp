#include <stdio.h>


int main() {
    int attendance, numSubjects, totalMarks = 0, subjectMarks[50], eligiexam, i, fees;
    float percentage;

    printf("Enter Student's Attendance Percentage: ");
    scanf("%d", &attendance);
    printf("Did student pay semester and other fees both? then respose 1 or not then response 0:");
    scanf("%d", &fees);
	
	
	if(fees == 1){

    if (attendance >= 75) 
	{
        printf("Enter number of subjects: ");
        scanf("%d", &numSubjects);
			
        for (i = 1; i <= numSubjects; i++) {
            printf("Enter subject %d's total marks (internal + external) out of 100: ", i);
            scanf("%d", &subjectMarks[i]);
             if ( subjectMarks[i]>= 90) {
                printf("Grade: O\n");
            } else if (subjectMarks[i] >= 80) {
                printf("Grade: A+\n");
            } else if (subjectMarks[i] >= 70) {
                printf("Grade: A\n");
            } else if (subjectMarks[i] >= 60) {
                printf("Grade: B+\n");
            } else if (subjectMarks[i] >= 50) {
                printf("Grade: B\n");
            } else if (subjectMarks[i] >= 40) {
                printf("Grade: C\n");
            } else if (subjectMarks[i] >= 35) {
                printf("Grade: P\n");
            } else {
                break;
            }
            
            totalMarks = subjectMarks[i] + totalMarks;
        } 
		if(i < numSubjects)
		{
        	printf("Overall Grade: Fail");
		}
		
		else{

      	    percentage = (float)totalMarks / (numSubjects * 100) * 100;
            printf("Percentage: %.2f\n", percentage);

            
            if (percentage >= 90) {
                printf("Overall Grade: O\n");
            } else if (percentage >= 80) {
                printf("Overall Grade: A+\n");
            } else if (percentage >= 70) {
                printf("Overall Grade: A\n");
            } else if (percentage >= 60) {
                printf("Overall Grade: B+\n");
            } else if (percentage >= 50) {
                printf("Overall Grade: B\n");
            } else if (percentage >= 40) {
                printf("Overall Grade: C\n");
            } else if (percentage >= 35) {
                printf("Overall Grade: P\n");
            } else {
                printf("Overall Grade: F\n");
            }
        }
        
    } 
	else if(attendance>=65 && attendance<75)
	{
        printf("Student have to submit their Medical Certificate.\n");
        printf("If student already give Certificate and he gave the exam then response 1 or not able to gave exam then type 0: ");
        scanf("%d", &eligiexam);
        
        if(eligiexam==1)
        {
        	printf("Enter number of subjects: ");
        scanf("%d", &numSubjects);
			
        for (i = 1; i <= numSubjects; i++) {
            printf("Enter subject %d's total marks (internal + external) out of 100: ", i);
            scanf("%d", &subjectMarks[i]);
             if ( subjectMarks[i]>= 90) {
                printf("Grade: O\n");
            } else if (subjectMarks[i] >= 80) {
                printf("Grade: A+\n");
            } else if (subjectMarks[i] >= 70) {
                printf("Grade: A\n");
            } else if (subjectMarks[i] >= 60) {
                printf("Grade: B+\n");
            } else if (subjectMarks[i] >= 50) {
                printf("Grade: B\n");
            } else if (subjectMarks[i] >= 40) {
                printf("Grade: C\n");
            } else if (subjectMarks[i] >= 35) {
                printf("Grade: P\n");
            } else {
                break;
            }
            
            totalMarks = subjectMarks[i] + totalMarks;
        } 
		if(i < numSubjects)
		{
        	printf("Overall Grade: Fail");
		}
		
		else{

      	    percentage = (float)totalMarks / (numSubjects * 100) * 100;
            printf("Percentage: %.2f\n", percentage);

            
            if (percentage >= 90) {
                printf("Overall Grade: O\n");
            } else if (percentage >= 80) {
                printf("Overall Grade: A+\n");
            } else if (percentage >= 70) {
                printf("Overall Grade: A\n");
            } else if (percentage >= 60) {
                printf("Overall Grade: B+\n");
            } else if (percentage >= 50) {
                printf("Overall Grade: B\n");
            } else if (percentage >= 40) {
                printf("Overall Grade: C\n");
            } else if (percentage >= 35) {
                printf("Overall Grade: P\n");
            } else {
                printf("Overall Grade: F\n");
            }
        }
        
		}
		if(eligiexam==0){
			printf("Student is not Eligible for Exam");
		}
    }
    else
    {
    	printf("Fail");
	}
	
	
}
else{
	printf("Please pay students' semester and and other fees");
}
printf("\n\n\t\t\t  THANK YOU");
    return 0;
}


