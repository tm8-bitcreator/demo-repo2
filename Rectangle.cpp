#include "Rectangle.h"

Rectangle::Rectangle(){
    width = 0;
    length = 0;
}

Rectangle::Rectangle(int length, int width){
    this->length = length;
    this->width = width;

}

int Rectangle::getLength(){
    return length;
}

int Rectangle::getWidth(){
    return width;
}

void Rectangle::setLength(int length){
    this->length = length;
}

void Rectangle::setWidth(int width){
    this->width = width;
}