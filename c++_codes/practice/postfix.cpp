#include <iostream>
#include <string.h>
using namespace std;

char pop(char[], int);
void push(char[], int);

int main() {
	char exp[80], output[80], stack[80], output_c;
	
	stack[0] = '(';
	
	gets(exp);
	
	char operands[] = {'*', '^', '+', '-', '/', '%'};
	int priority[] = {2, 1, 3, 3, 2, 4}, size = 0, size_o = 0, cp, i, j, pp, k;
	
	// cp means current priority and pp means priority of present operator in stack
	
	size = 1;
	pp = 10;
	
	int len;
	len = strlen(exp);
	
	bool Operator, match;
	exp[len] = ')';
	
	for(i=0; i<=len; i++) {
		Operator = false;
		
		for(j=0; j<6; j++) {
			if(exp[i] == operands[j]) {
				Operator = true;
				cp = priority[j];
				//pp = priority of stack[size-1];
				for(k=0; k<6; k++) {
					if(stack[size-1] == operands[k]) {
						pp = priority[k];
						break;
					}
				}
				
				match = true;
				
				while(cp >= pp && match) {					// higher the value of priority lower the precedence
					match = false;
					output_c = stack[size-1];
					size--;
					output[size_o] = output_c;
					size_o++;
					for(k=0; k<6; k++) {
						if(stack[size-1] == operands[j]) {
							pp = priority[k];
							match = true;
							break;
						}
					}
					if(!match)
						pp = 10;					// any high value to break out of the loop
				}
				
				stack[size] = exp[i];
				size++;
				break;
			}
		}
		
		if(Operator == false) {
			if(exp[i] == '(') {
				stack[size] = exp[i];
				size++;
			}
			else if(exp[i] == ')') {
				while(stack[size-1] != '(') {
					output_c = stack[size-1];
					size--;
					output[size_o] = output_c;
					size_o++;
				}
			}
			else {
				output[size_o] = exp[i];
				size_o++;
			}
		}
	}
	
	for(i=0; i<size_o; i++)
		cout<<output[i];
	return 0;
}
