#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

char password[PASSWORD_LENGTH + 1];

int main() {
  srand((unsigned int)(time(NULL)));

  char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+=-";

  for (int i = 0; i < PASSWORD_LENGTH; i++) {
    int random_index = rand() % (sizeof(characters) / sizeof(characters[0]));
    password[i] = characters[random_index];
  }

  password[PASSWORD_LENGTH] = '\0';

  printf("Your random password is: %s\n", password);

  return 0;
}
