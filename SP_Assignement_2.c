#include <stdio.h>

int main() {
	int marksinStructuredProgramming;
	int marksinWebTechnologies;
	int marksinEngineeringChemistry;
	int marksinDigitalElectronics;
	int marksinEngineeringmaths;
	int totalmarksobtained;
	int maxmarks;
	float percentage;

	printf("Enter the marks in Structured Programming:\n");
	scanf("%d", &marksinStructuredProgramming);

	printf("Enter the marks in Web Technologies:\n");
	scanf("%d", &marksinWebTechnologies);

	printf("Enter the marks in Engineering Chemistry:\n");
	scanf("%d", &marksinEngineeringChemistry);

	printf("Enter the marks in Digital Electronics:\n");
	scanf("%d", &marksinDigitalElectronics);

	printf("Enter the marks in Engineering Maths:\n");
	scanf("%d", &marksinEngineeringmaths);


	totalmarksobtained = marksinStructuredProgramming +
	                     marksinWebTechnologies +
	                     marksinEngineeringChemistry +
	                     marksinDigitalElectronics +
	                     marksinEngineeringmaths;

	printf("The total marks obtained is %d\n",totalmarksobtained);
	printf("Enter the max marks:\n");
	scanf("%d", &maxmarks);



	percentage = (totalmarksobtained * 100.0f) / maxmarks;

	printf("Total Marks Obtained: %d\n", totalmarksobtained);
	printf("Percentage: %.2f%%\n", percentage);


	if (percentage >= 90) {
		printf("Grade A\n");
	} else if (percentage >= 80) {

	} else if (percentage >= 70) {
		printf("Grade C\n");
	} else if (percentage >= 60) {
		printf("Grade D\n");
	} else {
		printf("Grade F\n");
	}

	return 0;
}