/*
 * File:   main.cpp
 * Author: Георгий
 *
 * Created on 14 Декабрь 2014 г., 10:56
 */

#include "Point2D.h"

Point2D::Point2D(double a) {
    x = y = a;
}

Point2D::Point2D(double tx, double ty) {
    x = tx;
    y = ty;
}

double Point2D::getX() const {
    return x;
}

double Point2D::getY() const {
    return y;
}

bool Point2D::setX(double tx) {
    x = tx;
    return true;
}

bool Point2D::setY(double ty) {
    y = ty;
    return true;
}

void Point2D::print() const {
    cout << "x = " << x << ", y = " << y << endl;
}
