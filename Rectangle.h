#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
    private:
        int length;
        int width;
    public:
        Rectangle();
        Rectangle(int length, int width);
        int getLength();
        void setLength(int length);
        void setWidth(int width);
        int getWidth();
};
    



#endif //RECTANGLE_H