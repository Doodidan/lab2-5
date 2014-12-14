/*
 * File:   main.cpp
 * Author: Георгий
 *
 * Created on 14 Декабрь 2014 г., 10:56
 */

#include <math.h>
#include "Point2D.h"

Point2D::Point2D(double a = 0) {
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
}

bool Point2D::setY(double ty) {
    y = ty;
}
