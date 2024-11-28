#include <raylib.h>

int main() {
  InitWindow(800, 600, "Raylib Kickstart");
  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText("Raylib Kickstart", 320, 300, 20, WHITE);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
