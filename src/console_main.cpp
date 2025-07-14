//
// Created by Alek on 7/13/2025.
//

#include <iostream>
#include <opencv2/opencv.hpp>

#include "ImageEditingLibrary/image_editing_library.h"

int main()
{
    std::cout << "Input a filepath of the image to read from ";
    std::string filepath;
    std::cin >> filepath;
    std::cout << std::endl;

    std::cout << "Input a filepath of the image to write to ";
    std::string outfpath;
    std::cin >> outfpath;
    std::cout << std::endl;

    std::cout << "Input the (rgb) values separated by spaces of the color to project onto";
    int r,g,b;

    std::cin >> r >> g >> b;

    double dr = r;
    double dg = g;
    double db = b;

    MathMatrix m;

    cv::Mat pixImg = load_color_img(filepath);

    fill_matrix_with_pixel_colors(m, pixImg);
    MathMatrix projMat = create_projection_img_matrix(m, MathVector({db,dg,dr}));

    convert_color_matrix_to_img(pixImg, projMat, pixImg.cols, pixImg.rows);

    save_color_img(outfpath, pixImg);


}
