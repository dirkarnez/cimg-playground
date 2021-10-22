#include "CImg.h"

// MATLAB
// >> I = imread('flower.jpg');
// >> J = imnoise(I, 'gaussian');
// >> imshow(J)

namespace cil = cimg_library;

int main(int argc, char** argv) {
	cil::CImg<> img(cimg_option("-i", "flower.jpg", "Input image"));
	
	img.noise(1, 0);

	cil::CImgDisplay main_disp(img, "Color image (Try to move mouse pointer over)", 0);

    // Enter event loop. This loop ends when one of the two display window is closed or
	// when the keys 'ESC' or 'Q' are pressed.
    while (!main_disp.is_closed() &&
        !main_disp.is_keyESC() && !main_disp.is_keyQ()) {

        // Temporize event loop
		cil::cimg::wait(20);
    }

	return 0;
}