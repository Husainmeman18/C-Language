#include <stdio.h>

int main() {
  char text[100];
  int left, right, len;

  printf("Enter a string: ");
  fgets(text, sizeof(text), stdin);

  // Find the length of the string (excluding newline)
  len = 0;
  while (text[len] != '\n' && text[len] != '\0') {
    len++;
  }

  // Check for palindrome
  left = 0;
  right = len - 1;
  while (left < right) {
    if (text[left] != text[right]) {
      printf("%s is not a palindrome.\n", text);
      return 1;
    }
    left++;
    right--;
  }

  printf("%s is a palindrome.\n", text);
  return 0;
}