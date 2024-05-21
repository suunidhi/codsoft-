#include <iostream>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"


using namespace std;

struct Image {
    unsigned char* data;
    int width;
    int height;
    int channel;
};

Image loadimage(const char* filename) {
    Image image;
    image.data = stbi_load(filename, &image.width, &image.height, &image.channel, 0);
    return image;
}

void saveImage(const char* filename, Image image) {
    stbi_write_png(filename, image.width, image.height, image.channel, image.data, image.width * image.channel);
}

void freeImage(Image image) {
    stbi_image_free(image.data);
}

int main() {
    Image image;
    bool imageLoaded = false;

    while (true) {
        cout << "1. Load the Image" << endl;
        cout << "2. Resize Image" << endl;
        cout << "3. Crop Image" << endl;
        cout << "4. Filter Image" << endl;
        cout << "5. Save the Image" << endl;
        cout << "6. Exit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    string imagePath;
                    cout << "Enter image path: ";
                    cin >> imagePath;
                    image = loadimage(imagePath.c_str());
                    if (!image.data) {
                        cout << "Could not open or find the image" << endl;
                        break;
                    }
                    imageLoaded = true;
                }
                break;

            case 2:
                if (!imageLoaded) {
                    cout << "Please load an image first" << endl;
                    break;
                }

                cout << "Image resized" << endl;
                break;

            case 3:
                if (!imageLoaded) {
                    cout << "Please load an image first" << endl;
                    break;
                }

                cout << "Image cropped" << endl;
                break;

            case 4:
                if (!imageLoaded) {
                    cout << "Please load an image first" << endl;
                    break;
                }

                cout << "Image filtered" << endl;
                break;

            case 5:
                if (!imageLoaded) {
                    cout << "Please load an image first" << endl;
                    break;
                }
                string savePath;
                cout << "Enter save path: ";
                cin >> savePath;
                saveImage(savePath.c_str(), image);
                cout << "Image saved" << endl;
                break;

            case 6:
                if (imageLoaded) {
                    freeImage(image);
                }
                return 0;

            default:
                cout << "Invalid choice, please choose right and please try again" << endl;
        }
    }

    return 0;
}
