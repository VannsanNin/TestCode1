#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace sf;

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const int BAR_WIDTH = 10;

// Function to draw the array
void drawArray(RenderWindow &window, const vector<int> &arr, int highlight1 = -1, int highlight2 = -1) {
    window.clear(Color::Black);

    for (size_t i = 0; i < arr.size(); i++) {
        RectangleShape bar(Vector2f(BAR_WIDTH, arr[i]));
        bar.setPosition(i * BAR_WIDTH, WINDOW_HEIGHT - arr[i]);

        // Highlight specific bars
        if ((int)i == highlight1)
            bar.setFillColor(Color::Red);
        else if ((int)i == highlight2)
            bar.setFillColor(Color::Green);
        else
            bar.setFillColor(Color::White);

        window.draw(bar);
    }

    window.display();
}

// Heapify function
void heapify(vector<int> &arr, int n, int i, RenderWindow &window) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Find the largest element
    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not the root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Draw the array to show the swap
        drawArray(window, arr, i, largest);
        this_thread::sleep_for(chrono::milliseconds(300)); // Pause for visualization

        // Recursively heapify the affected subtree
        heapify(arr, n, largest, window);
    }
}

// Heap Sort function
void heapSort(vector<int> &arr, RenderWindow &window) {
    int n = arr.size();

    // Build a max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i, window);
    }

    // Extract elements from the heap
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);

        // Draw the array to show the swap
        drawArray(window, arr, 0, i);
        this_thread::sleep_for(chrono::milliseconds(300)); // Pause for visualization

        // Heapify the reduced heap
        heapify(arr, i, 0, window);
    }
}

// Main function
int main() {
    // Initialize the array to sort
    vector<int> arr = {100, 200, 150, 50, 75, 300, 250, 400, 125, 175};

    // Create a window
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Heap Sort Visualization");

    // Run the sorting visualization
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        // Visualize heap sort
        heapSort(arr, window);

        // Keep the window open after sorting is complete
        while (true) {
            if (window.pollEvent(event) && event.type == Event::Closed)
                window.close();
        }
    }

    return 0;
}
