/*
* File:   main.cpp
* Author: George
*
* Created on 14 George 2014 �., 10:56
*/

#include "Point2D.h"

Point2D::Point2D(const double a) {
    x = y = a;
}

Point2D::Point2D(const double tx, const double ty) {
    x = tx;
    y = ty;
}

Point2D::Point2D(const Point2D* point) {
    x = point->getX();
    y = point->getY();
}

double Point2D::getX() const {
    return x;
}

double Point2D::getY() const {
    return y;
}

Point2D* Point2D::getClone() const {
    return new Point2D(this);
}

bool Point2D::setX(const double tx) {
    x = tx;
    return true;
}

bool Point2D::setY(double ty) {
    y = ty;
    return true;
}

bool Point2D::setAll(double tx, double ty) {
    if (setX(tx) && setY(ty)) {
        return true;
    }
    return false;
}

bool Point2D::setAll(const Point2D* point) {
    return setAll(point->getX(), point->getY());
}

void Point2D::print() const {
    cout << "x = " << x << ", y = " << y << endl;
}
