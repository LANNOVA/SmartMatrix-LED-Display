# SmartMatrix LED Display

This repository contains Arduino code for driving an LED matrix display using the SmartMatrix library. The display showcases a collection of images loaded from individual C files (`a.c` to `z.c`). The images are selected based on the analog input from a potentiometer. Each image is displayed on the LED matrix with accompanying LED lighting effects.

## Prerequisites

Before uploading the code to your Arduino board, make sure you have the following:

- Arduino IDE installed
- SmartMatrix library installed
- LED matrix connected to your Arduino board

## Getting Started

1. Clone this repository to your local machine.
2. Open the Arduino IDE.
3. Install the SmartMatrix library if you haven't already.
4. Load the Arduino sketch (`SmartMatrix_LED_Display.ino`) from the cloned repository.
5. Connect your Arduino board to the LED matrix.
6. Upload the sketch to your Arduino board.

## Configuration

- Adjust the `potPin` definition to match the analog pin connected to the potentiometer.
- Customize the image files and their order by modifying the included C files (`a.c` to `z.c`).
- Modify the `wait` variable to adjust the delay between image changes.

## Usage

1. Power on your Arduino board connected to the LED matrix.
2. Rotate the potentiometer to cycle through the images.
3. Observe the LED lighting effects accompanying each image change.

## License

This project is licensed under the [MIT License](LICENSE).

Feel free to contribute and improve this LED display project. If you encounter any issues or have suggestions, please open an issue.

Happy coding!
