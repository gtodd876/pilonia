#include "story_data.c"
#include <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED "\x1b[38;2;255;000;000m"
#define ANSI_COLOR_ORANGE "\x1b[38;2;217;128;060m"
#define ANSI_COLOR_YELLOW "\x1b[38;2;255;255;000m"
#define ANSI_COLOR_GREEN "\x1b[38;2;0;255;000m"
#define ANSI_COLOR_BLUE "\x1b[38;2;0;89;248m"
#define ANSI_COLOR_INDIGO "\x1b[38;2;133;104;212m"
#define ANSI_COLOR_VIOLET "\x1b[38;2;148;0;211m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define ANSI_CLEAR_SCREEN "\033[2J\033[H"

void print_welcome_scene() { printf("WELCOME TO PILONIA! \n"); }

void print_rainbow_divider_start() {
  printf("\n");
  printf(ANSI_COLOR_RED
         "***********" ANSI_COLOR_ORANGE "************" ANSI_COLOR_YELLOW
         "***********" ANSI_COLOR_GREEN "*************" ANSI_COLOR_BLUE
         "*************" ANSI_COLOR_INDIGO "*************\n" ANSI_COLOR_RESET);
}

void print_rainbow_divider_end() {
  printf(ANSI_COLOR_INDIGO
         "***********" ANSI_COLOR_BLUE "************" ANSI_COLOR_GREEN
         "***********" ANSI_COLOR_YELLOW "*************" ANSI_COLOR_ORANGE
         "*************" ANSI_COLOR_RED "*************\n" ANSI_COLOR_RESET);
  printf("\n");
}

int get_user_input(int *choice) {
  char buffer[100];

  printf("Press 1, 2, or 3 on the keyboard and then the Enter key to make "
         "your selection.\n");
  // Read entire line
  if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
    return 0; // EOF or error
  }

  // Parse the integer
  char *endptr;
  long value = strtol(buffer, &endptr, 10);

  // Check if conversion was successful and complete
  if (endptr == buffer || *endptr != '\n') {
    return 0; // No valid conversion or extra characters
  }

  // Check range
  if (value < 1 || value > 3) {
    return 0; // Out of range
  }

  *choice = (int)value;
  return 1; // Success
}

void print_ending_scene() {
  printf("\n");
  printf("Hope you enjoyed playing Pilonia! Love - Daddy\n");
}

int main(int argc, char *argv[]) {
  print_welcome_scene();
  int users_choice;
  int current_story_node = 0;

  while (!story[current_story_node].is_ending) {
    print_rainbow_divider_start();
    printf("%s\n", story[current_story_node].description);
    printf("1: %s", story[current_story_node].choice_texts[0]);
    printf("2: %s", story[current_story_node].choice_texts[1]);
    printf("3: %s", story[current_story_node].choice_texts[2]);
    print_rainbow_divider_end();
    if (!get_user_input(&users_choice)) {
      printf("You can only enter a 1, 2, or 3. Please try again\n");
      continue;
    }

    switch (users_choice) {
    case 1: {
      current_story_node = story[current_story_node].next_nodes[0];
      break;
    }
    case 2: {
      current_story_node = story[current_story_node].next_nodes[1];
      break;
    }
    case 3: {
      current_story_node = story[current_story_node].next_nodes[2];
      break;
    }
    default: {
      printf("You can only enter a 1, 2, or 3. Please try again\n");
      break;
    }
    }
    printf(ANSI_CLEAR_SCREEN);
  }
  // last description for the ending
  printf("%s", story[current_story_node].description);
  print_ending_scene();

  return EXIT_SUCCESS;
}
