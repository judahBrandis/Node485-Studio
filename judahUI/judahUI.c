#include "raylib.h"
#include "judahUI.h"

// creates rectangular button that when pressed, returns 1 and doesn't return 1 until unpressed and pressed again
int createButton (float xPosition, float yPosition, float height, Color textColor, Color buttonColor, char *buttonText) {
    // Button constants
    int onButton = 0; // 1 if mouse is over button, 0 otherwise
    const float buffer = 0.05; // the amount of space there is on the side of the text for the button

    // dynamic colors
    Color hoverColor = ColorBrightness(buttonColor, 0.15);
    Color clickedColor = ColorBrightness(buttonColor, -0.5);

    // get button geometry
    int x = xPosition * GetScreenWidth();
    int y = yPosition * GetScreenHeight();
    int h = height * GetScreenHeight();

    int bufferPixels = h*buffer;

    int sizeOfFont = h - (2 * bufferPixels);
    int w = bufferPixels * 2 + MeasureText(buttonText, sizeOfFont);

    // detect if a mouse is over the button
    Vector2 mousePos = GetMousePosition();
    float mouseX = mousePos.x;
    float mouseY = mousePos.y;

    if (mouseX >= x && mouseX <= x + w && mouseY >= y && mouseY <= y + h) 
        onButton = 1;
    else 
        onButton = 0; 

    if (onButton == 1 && IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        buttonColor = clickedColor;
    else if (onButton == 1 && !IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        buttonColor = hoverColor;
    

    // draw rectangle and text
    DrawRectangle(x, y, w, h, buttonColor);
    DrawText(buttonText, x + bufferPixels, y + bufferPixels, sizeOfFont, textColor);
    
    // check if button is pressed
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true && onButton == 1) 
        return 1;
    return 0;
}