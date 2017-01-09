#include <pebble.h>

//Author: Ed Dam

Window *my_window;

void handle_init(void) {
  my_window = window_create();
  light_enable(true);
  window_stack_push(my_window, true);
}

void handle_deinit(void) {
  light_enable(false);
  window_destroy(my_window);
}

int main(void) {
  handle_init();
  app_event_loop();
  handle_deinit();
}
