# Node485-Studio

## Methods

<!-- ----------------------------------------------------------------------------------------------- -->
<!-- createButton() -->

<details>
<summary id="Node485-1"><strong>createButton()</strong></summary>

<blockquote>

### Description
Creates a given button that automatically adjusts width in accordance with height and text size. 
When a mouse hovers over the button or clicks it, the color changes accordingly no matter the button color.
The raylib library is required for using this function.

### Syntax
- `createButton (xPosition, yPosition, height, textColor, buttonColor, buttonText)`

### Parameters
- `xPosition`: `float` data type. Expected values: 0.0 - 1.0. This is the percentage of the screen's width
the button is placed on where 0 is the left side of the screen and 1 is the right.
- `yPosition`: `float` data type. Expected values: 0.0 - 1.0. This is the percentage of the screen's height
the button is placed on where 0 is the top of the screen and 1 is the bottom.
- `height`: `float` data type. Expected values: 0.0 - 1.0. This is the percentage of the screen's height 
that the button takes up. 0 is none, 1 is the same height as the screen.
- `textColor`: `Color` data type. The color of the text.
- `buttonColor`: `Color` data type. The color of the button's background (rectangle).
- `buttonText`: A pointer to `char` data type(s). The text that'll be in the button.

### Example
```c
#include <raylib.h>
#include <judahUI.h>

// setup window before adding a button

// this variable can be used for other things if the button is pressed
int isButtonPressed = 0;

// counter is used for this specific examnple
int counter = 0;

// only checks if the button is clicked if isButtonPressed is set to 0. Otherwise, just draw the button
if (isButtonPressed == 0) {
    isButtonPressed = createButton(0.2, 0.2, 0.1, BLACK, LIGHTGRAY, "my button");
    counter = 0;
} else 
    createButton(0.2, 0.2, 0.1, BLACK, LIGHTGRAY, "my button");

// once task is done, allow button to be clicked again
// in this example, once 100 frames have been drawn, the button may be pressed again
counter++;
if (counter >= 100)
    isButtonPressed = 0;
```

</blockquote>
    
</details>
