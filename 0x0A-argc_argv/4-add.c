#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main. h" 
int main(int argc, char *argv[]) {
	    int sum = 0;
	        for (int i = 1; i < argc; i++) {
			        char *num_str = argv[i];
				        int num = 0;
					        int j = 0;
						        while (num_str[j] != '\0') {
								            if (!isdigit(num_str[j])) {
										                    printf("Error\n");
												                    return 1;
														                }
									                num = num * 10 + (num_str[j] - '0');
											            j++;
												            }
							        sum += num;
								    }
		    printf("%d\n", sum);
		        return 0;
}
