// Assginment of Basic operation og calculator
// Rabiha tull islam
//2018-ag-8229

#include<stdio.h>
#include<math.h>
 
int main() {
	 printf("       ======Calculator======  \n \n \n");
	 char op;
    double first, second;
    double result;
   	
    printf(" Enter an operator (+, -, *, /) \n");
    printf(" Enter s to Find Sine(x) of angle \n Enter t to Find Tan(x) of angle\n Enter c to find cosine(x) of angle \n Enter q to find SquareRoot(x)\n Enter l to find log(x) of value:\n");
    scanf("%s", &op);
    
    switch(op) {
    case '+':  
    printf("Enter First operand: ");
	scanf("%lf", &first);
	printf("Enter Second operands: ");
    scanf("%lf", &second);
	
    result = first + second;
    printf("Sum of Numbers is %lf" , result);
    break;
	case '-': 
	printf("Enter First operand: ");
	scanf("%lf", &first); 
	printf("Enter Second operands: ");
    scanf("%lf", &second);
    result= first -second;
    printf("Subtraction of Numbers is %lf" , result);
    break;	
    case '*': 
	printf("Enter First operand: ");
	scanf("%lf", &first); 
    printf("Enter Second operands: ");
    scanf("%lf", &second);
    result=  first * second;
    printf("Multiplication of Numbers is %lf" , result);
    break;
    case '/': 
    printf("Enter First operand: ");
	scanf("%lf", &first);
	printf("Enter Second operands: ");
    scanf("%lf", &second); 
    result=  first / second;
    printf("Division of Numbers is %lf" , result);
    break;
    case's':
    printf("Enter angle to find Sine: ");
	scanf("%lf", &first);
    result = sin(first * 3.14159 / 180);
    printf("Sine of angle is %lf" , result);
    break;
    case'c':
    printf("Enter angle to find Cos: ");
	scanf("%lf", &first);
    result = cos(first* 3.14159 / 180);
    printf("Cos of angle is %lf" , result);
    break;
    case't':
    printf("Enter angle to find Cos: ");
	scanf("%lf", &first);
    result = tan(first* 3.14159 / 180);
    printf("Tan of angle is %lf" , result);
    break;
    case 'q':
    printf("Enter value to Find Square Root");
	scanf("%lf", &first);
    result = sqrt(first);
    printf("Square Root is %lf" , result);
    break;
    case 'l':
    printf("Enter value to Find logrithm");
	scanf("%lf", &first);
    result = log(first);
    printf("log is %lf" , result);
    break;
    defualt:
   	printf("Invalid input");
    
    }
   
	return 0;
    
}
