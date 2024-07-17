// #include <stdio.h>
// #include <string.h>

// int main() {
//     char name[50];
//     printf("Enter your name: ");
//     fgets(name, sizeof(name), stdin);

//     int size = strlen(name);

//     // Check if the last character is a newline and remove it
//     if (name[size - 1] == '\n') {
//         name[size - 1] = '\0';  
//     // Replace newline with null terminator
//         size--;          // Decrease size by 1
//     }

//     printf("Length of name is: %d\n", size);

//     return 0;
// }


  // C program that takes an input string from the user and converts it to uppercase:

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>


// void toUpperCase(char str[]) {
//     for (int i = 0; str[i] != '\0'; i++) {
//         str[i] = toupper(str[i]);
//     }
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     // Remove newline character from the input string if present
//     size_t len = strlen(str);
//     if (len > 0 && str[len-1] == '\n') {
//         str[len-1] = '\0';
//     }

//     toUpperCase(str);

//     printf("Uppercase string: %s\n", str);

//     return 0;
// }

//   // my try
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>

//    int main(){
//     char name[50];
    
//     printf("enter for uppercase:");
//     fgets(name,50,stdin);

//     for(int i=0;name[i]!='\0';i++){
//       name[i]=toupper (name[i]);
//     }
//     printf("uppercase:%s\n",name);

//     return 0;
//    }


