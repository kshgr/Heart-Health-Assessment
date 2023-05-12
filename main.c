/*
Author - Kushagra 'kshgr' Mittal
Project - Heart Health Assesment
Date - 17/02/2023
Last Edit - 20/02/2023

Summary - Offers the user a choice of:
              a BMI (Body Mass Index) calculation,
              a blood pressure assessment, 
              or a cardiac risk score assessment 
          and implements separate functions for each of these options.

Concepts Implemented - Nested Conditional Statements, Switch, Functions, Loops for and while.
*/

#include <stdio.h>
#include <math.h>

// DO NOT TOUCH - TASK 1 - COMPLETE

float calculate_bmi(float weight, float height) {
    // weight in KG, height in METERS, 
    float bmi = weight / (height * height);
    
    return bmi;
    
    // return BMI and weight category
}

void weight_category(float bmi){
    if(bmi < 18.5){
        printf("Underweight");
    }
    else if(bmi >= 18.5 && bmi < 25){
        printf("Normal");
    }
    else if(bmi >= 25 && bmi < 30){
        printf("Overweight");
    }
    else if(bmi >= 30){
        printf("Obese");
    }
}

// END OF TASK 1.

// DO NOT TOUCH - TASK 2 - COMPLETE

int read_systolic(int index){
    int reading;
    printf("Enter Systolic reading %d (in mmHg): ", index + 1);
    scanf("%d", &reading);
    return reading;
}
int read_diastolic(int index){
    int reading;
    printf("Enter Diastolic reading %d (in mmHg): ", index + 1);
    scanf("%d", &reading);
    return reading;
}

void assess_BP(int systolicAverage, int diastolicAverage){
    if (systolicAverage < 90 && diastolicAverage < 60){
        printf("Low Blood Pressure\n");
    }
    else if ((systolicAverage >= 90 && systolicAverage < 120 && diastolicAverage < 80 ) || (diastolicAverage >= 60 && diastolicAverage < 80 && systolicAverage < 120)){
        printf("Ideal Blood Pressure\n");
    }   
    else if ((systolicAverage >= 120 && systolicAverage < 140 && diastolicAverage < 90 ) || (diastolicAverage >= 80 && diastolicAverage < 90 && systolicAverage < 140)){
        printf("Pre-High Blood Pressure\n");
    }
    else if ((systolicAverage >= 140 && systolicAverage <= 190 && diastolicAverage <= 100 ) || (diastolicAverage >= 90 && diastolicAverage <= 100 && systolicAverage <= 190)){
        printf("High Blood Pressure\n");
    }
    else{
        printf("FATAL ERROR - Absurd Values, Please Try Again!\n");
    }
}

// END OF TASK 2

// DO NOT TOUCH - TASK 3 - COMPLETE

int ERICE_byChart(){
    int age, gender, smoker, diabetic, SBP;
    float cholestrol;
    int ERICE = 0;

    printf("\nEnter Gender (0 for Female, 1 for Male): ");
    scanf("%d", &gender);
    printf("\nEnter Age: ");
    scanf("%d", &age);

    // For Male
    if (gender == 1){

        // BASE CASE WITHOUT ANY QUESTION TOP
        if(age >= 80){
            ERICE = 6;
        }
        else if(age >= 70 && age < 80){
            
            printf("\nAre you Diabetic? (0 for No, 1 for Yes): ");
            scanf("%d", &diabetic);
            printf("\nEnter Systolic Blood Pressure: ");
            scanf("%d", &SBP);
            
            if (diabetic == 1){
                if (SBP >= 140){
                    ERICE = 6; 
                    }
                else{
                    ERICE = 5;
                    }       
                }
            else if (diabetic == 0){
                
                printf("\nDo you smoke? (0 for No, 1 for Yes): ");
                scanf("%d", &smoker);

                if (smoker == 1){
                    if (SBP >= 140){
                        ERICE = 6; 
                        }
                    else{
                        ERICE = 5;
                        }
                    }
                else if (smoker == 0){
                    if (SBP >= 140){
                        ERICE = 5; 
                        }
                    else{
                        ERICE = 4;
                        }
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}
                }
            // Error Handling - Exception Diabetic Status
            else{printf("\nError: Invalid Choice");}
        }
        else if(age >= 60 && age < 70){
            printf("\nAre you Diabetic? (0 for No, 1 for Yes): ");
            scanf("%d", &diabetic);            
            printf("\nDo you smoke? (0 for No, 1 for Yes): ");
            scanf("%d", &smoker);
            printf("\nEnter Systolic Blood Pressure: ");
            scanf("%d", &SBP);
            
            if (diabetic == 1){
                if(smoker == 0){
                    if (SBP >= 140){
                        ERICE = 5; 
                        }
                    else{
                        printf("\nEnter your Cholestrol: ");
                        scanf("%f", &cholestrol);
                        if(cholestrol >= 5.2){
                            ERICE = 4;
                            }
                        else{
                            ERICE = 3;
                            }
                        }
                    }
                else if(smoker == 1){
                    if(SBP >= 180){
                        ERICE = 6;
                        }
                    else if (SBP >= 160 && SBP < 180){
                        printf("\nEnter your Cholestrol: ");
                        scanf("%f", &cholestrol);
                        if(cholestrol >= 6.5){
                            ERICE = 6;
                            }
                        else{
                            ERICE = 5;
                            }
                        }                        
                    else if (SBP >= 140 && SBP < 160){
                        ERICE = 5;
                        }
                    else if (SBP < 140){
                        ERICE = 4;
                        }
                        
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}
                       
                }
            else if (diabetic == 0){
                if(smoker == 0){
                    if (SBP >= 140){
                        ERICE = 4; 
                        }
                    else{
                        ERICE = 3;
                        }
                    }
                else if(smoker == 1){
                    if (SBP >= 140){
                        ERICE = 5; 
                        }
                    else{
                        printf("\nEnter your Cholestrol: ");
                        scanf("%f", &cholestrol);
                        if(cholestrol >= 5.2){
                            ERICE = 4;
                            }
                        else{
                            ERICE = 3;
                            }
                        }
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}
                }
            // Error Handling - Exception Diabetic Status
            else{printf("\nError: Invalid Choice");}
        }

        else if(age >= 50 && age < 60){
            printf("\nAre you Diabetic? (0 for No, 1 for Yes): ");
            scanf("%d", &diabetic);
            printf("\nDo you smoke? (0 for No, 1 for Yes): ");
            scanf("%d", &smoker);
            printf("\nEnter Systolic Blood Pressure: ");
            scanf("%d", &SBP);
            
            
            if (diabetic == 1){
                if(smoker == 0){
                    if (SBP >= 140){
                        ERICE = 3; 
                        }
                    else{
                        ERICE = 2;
                        }
                    }
                else if(smoker == 1){
                    if(SBP >= 160){
                        ERICE = 4;
                        }
                    else if (SBP >= 140 && SBP < 160){
                        ERICE = 3;
                        }
                    else if (SBP < 140){
                        printf("\nEnter your Cholestrol: ");
                        scanf("%f", &cholestrol);
                        if(cholestrol < 5.2 && cholestrol >= 7.8){
                            ERICE = 2;
                            }
                        else{
                            ERICE = 3;
                            }
                        }                        
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}
                       
                }
            else if (diabetic == 0){
                if(smoker == 0){
                    if (SBP >= 180){
                        printf("\nEnter your Cholestrol: ");
                        scanf("%f", &cholestrol);
                        if(cholestrol >= 5.2){
                            ERICE = 3;
                            }
                        else{
                            ERICE = 2;
                            }
                        }
                    else{
                        ERICE = 2;
                        }
                    }
                else if(smoker == 1){
                    if (SBP >= 140){
                        ERICE = 3; 
                        }
                    else{                        
                        ERICE = 2;                            
                        }
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}

                }
            // Error Handling - Exception Diabetic Status
            else{printf("\nError: Invalid Choice");}
        }

        else if(age >= 40 && age < 50){
            printf("\nAre you Diabetic? (0 for No, 1 for Yes): ");
            scanf("%d", &diabetic);
            printf("\nDo you smoke? (0 for No, 1 for Yes): ");
            scanf("%d", &smoker);
            printf("\nEnter Systolic Blood Pressure: ");
            scanf("%d", &SBP);

            if (diabetic == 1){
                if(smoker == 0){
                    if (SBP >= 180){
                        ERICE = 2; 
                        }
                    else if(SBP >= 160 && SBP < 180){
                        printf("\nEnter your Cholestrol: ");
                        scanf("%f", &cholestrol);
                        if(cholestrol < 6.5){
                            ERICE = 1;
                            }
                        else{
                            ERICE = 2;
                            }
                    }
                    else{
                        ERICE = 1;
                        }
                    }
                else if(smoker == 1){
                        if(SBP >= 140){
                            ERICE = 2;
                            }
                        else{
                            ERICE = 1;
                            }                        
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}                       
                }
            else if (diabetic == 0){
                if(smoker == 0){
                    ERICE = 1;
                    }
                else if(smoker == 1){
                    if (SBP < 160){
                        ERICE = 1; 
                        }
                    else{
                        printf("\nEnter your Cholestrol: ");
                        scanf("%f", &cholestrol);
                        if(cholestrol > 6.5){
                            ERICE = 2;
                            }
                        else if(cholestrol < 5.2){
                            ERICE = 1;
                            }
                        else{
                            if(SBP >= 180){
                                ERICE = 2;
                                }
                            else{
                                ERICE = 1;
                                }
                            }                           
                        }
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}
                }
            // Error Handling - Exception Diabetic Status
            else{printf("\nError: Invalid Choice");}
            }
        
        
        else if(age >= 30 && age < 40){
            ERICE = 1;
            }
        // Error Handling - Exception Age
        else{printf("\nError: Too Young to calculate ERICE");}
        }

    // For Female // No Cholestrol Impact
    else if (gender == 0){
        
        // BASE CASE WITHOUT ANY QUESTION TOP
        if(age >= 80){
            ERICE = 6;
            }

        // ALL OTHER CASES FROM 50-80
        else if(age >= 70 && age < 80){
            printf("\nAre you Diabetic? (0 for No, 1 for Yes): ");
            scanf("%d", &diabetic);            
            printf("\nDo you smoke? (0 for No, 1 for Yes): ");
            scanf("%d", &smoker);
            if (diabetic == 1){
                if (smoker == 1){
                    ERICE = 6;
                    }
                else if (smoker = 0){
                    printf("\nEnter Systolic Blood Pressure: ");
                    scanf("%d", &SBP);
                    if (SBP >= 180){
                        ERICE = 6;
                        }
                    else{
                        ERICE = 5;
                        }
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}
                
                }
            else if(diabetic == 0){
                if (smoker == 0){
                    printf("\nEnter Systolic Blood Pressure: ");
                    scanf("%d", &SBP);
                    if (SBP >= 180){
                        ERICE = 5;
                        }
                    else{
                        ERICE = 4;
                        }
                    }

                else if (smoker == 1){
                    printf("\nEnter Systolic Blood Pressure: ");
                    scanf("%d", &SBP);
                    if (SBP >= 180){
                        ERICE = 6;
                        }
                    else{
                        ERICE = 5;
                        }
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}
                }
            // Error Handling - Exception Diabetic Status
            else{printf("\nError: Invalid Choice");}
            }
        else if (age >= 60 && age < 70){
            printf("\nAre you Diabetic? (0 for No, 1 for Yes): ");
            scanf("%d", &diabetic);            
            printf("\nDo you smoke? (0 for No, 1 for Yes): ");
            scanf("%d", &smoker);
            printf("\nEnter Systolic Blood Pressure: ");
            scanf("%d", &SBP);
            if (diabetic == 1){
                if (smoker == 1){
                    if (SBP >= 180){
                        ERICE = 5;
                        }
                    else{
                        ERICE = 4;
                        }
                    }
                else if (smoker = 0){
                    if (SBP >= 180){
                        ERICE = 5;
                        }
                    else{
                        ERICE = 3;
                        }
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}
                
                }
            else if(diabetic == 0){                
                if (smoker == 0){
                    if (SBP >= 180){
                        ERICE = 3;
                        }
                    else{
                        ERICE = 2;
                        }
                    }

                else if (smoker == 1){
                    if (SBP >= 180){
                        ERICE = 5;
                        }
                    else{
                        ERICE = 3;
                        }
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}
                }
            // Error Handling - Exception Diabetic Status
            else{printf("\nError: Invalid Choice");}
            }

        else if (age >= 50 && age < 60){
            printf("\nAre you Diabetic? (0 for No, 1 for Yes): ");
            scanf("%d", &diabetic);            
            printf("\nDo you smoke? (0 for No, 1 for Yes): ");
            scanf("%d", &smoker);

            if (diabetic == 1){
                printf("\nEnter Systolic Blood Pressure: ");
                scanf("%d", &SBP);
                if (smoker = 0){
                    if (SBP >= 180){
                        ERICE = 3;
                        }
                    else{
                        ERICE = 2;
                        }
                    }
                else if (smoker == 1){
                    if (SBP >= 180){
                        ERICE = 4;
                        }
                    else{
                        ERICE = 3;
                        }
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}
                
                }
            else if(diabetic == 0){                
                if (smoker == 0){
                    ERICE = 2;                        
                    }

                else if (smoker == 1){
                    printf("\nEnter Systolic Blood Pressure: ");
                    scanf("%d", &SBP);
                    if (SBP >= 180){
                        ERICE = 3;
                        }
                    else{
                        ERICE = 2;
                        }
                    }
                // Error Handling - Exception Smoke Status
                else{printf("\nError: Invalid Choice");}
                }
            // Error Handling - Exception Diabetic Status
            else{printf("\nError: Invalid Choice");}
            }
        
        // BASE CASE WITHOUT ANY QUESTION BOTTOM
        else if(age >= 30 && age < 50){
            ERICE = 1;
            }
        // Error Handling - Exception Age
        else{printf("\nError: Too Young to calculate ERICE");}
        }

    // Error Handling - Exception Gender
    else{
        printf("\nError: Invalid Choice");
    }

    return ERICE;
}

void ERICE_category(int ERICE_Score){
    if (ERICE_Score == 6){
        printf("ERICE risk score category: VERY HIGH");
    }
    else if (ERICE_Score == 5){
        printf("ERICE risk score category: HIGH");
    }
    else if (ERICE_Score == 4){
        printf("ERICE risk score category: MODERATE HIGH");
    }
    else if (ERICE_Score == 3){
        printf("ERICE risk score category: MODERATE");
    }
    else if (ERICE_Score == 2){
        printf("ERICE risk score category: MILD");
    }
    else if (ERICE_Score == 1){
        printf("ERICE risk score category: LOW");
    }
    else{
        printf("Invalid ERICE Score");
    }
}
// END OF TASK 3


// IMPLEMENTATION

int main(void){

    int choice;
    int run = 1;

    // TASK 1
    float weight, height;

    // TASK 2
    

    // TASK 3
    int ERICE;

    while (run == 1)
        {  
        // CHOICE MENU
        printf("\n");
        printf("1. BMI Calculation and Weight Category\n");
        printf("2. Blood Pressure Assessment\n");
        printf("3. Cardiac Risk Assessment\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
  
        switch (choice) {
            case 1:
                // Task 1 - BMI and Weight Category
                
                // INPUTS 
                    printf("\nEnter weight (in kgs): ");
                    scanf("%f", &weight);
                    printf("\nEnter height (in meters): ");
                    scanf("%f", &height);
                    if (height > 3)
                    {
                        printf("Error: Impossible Height");
                        break;
                    }
                    
                // CALCULATIONS & OUTPUT    
                    float bmi = calculate_bmi(weight, height);
                    printf("\nUser BMI is: %.2f", bmi);
                    printf("\nUser Weight Category is: ");
                    weight_category(bmi); // prints weight Category
                break;
            
            case 2:
                // Task 2 - Blood Pressure Assessment
                
                //INPUT
                int i, systolicTotal = 0, diastolicTotal = 0;
                int systolic, diastolic;
                float systolicAverage, diastolicAverage;
            
                    for(i = 0; i < 5; i++){
                        systolic = read_systolic(i);
                        systolicTotal += systolic;
                        diastolic = read_diastolic(i);
                        diastolicTotal += diastolic;
                    }
                
                // CALCULATIONS

                systolicAverage = (float) systolicTotal / 5;
                diastolicAverage = (float) diastolicTotal / 5;

                // OUTPUT
                printf("\nUser has: ");
                assess_BP((int) systolicAverage, (int) diastolicAverage);
                
                break;
            
            case 3:
                // TASK 3 - CARDIAC RISK ASSESSMENT
                ERICE = 0;
                ERICE = ERICE_byChart();
                ERICE_category(ERICE);
                break;

            case 4:
                run = 0;
                printf("\nProgram Terminating");
                break;

            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}
