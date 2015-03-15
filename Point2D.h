/*
* File:   Point2D.h
* Author: George
*
* Created on 12 George 2014 �., 18:04
*/

#ifndef POINT2D_H
#define	POINT2D_H

#include <iostream>

using namespace std;

class Point2D {
public:
    // constructors
    Point2D(double a = 0);
    Point2D(double tx, double ty);
    Point2D(const Point2D* point);
    // functions
    double getX() const;
    double getY() const;
    Point2D* getClone() const;
    bool setX(double tx);
    bool setY(double ty);
    bool setAll(double tx, double ty);
    bool setAll(const Point2D* point);
    void print() const;
private:
    // variables
    double x, y;
};

#endif	/* POINT2D_H */
