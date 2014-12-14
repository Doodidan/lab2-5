/*
 * File:   Point2D.h
 * Author: Георгий
 *
 * Created on 12 Декабрь 2014 г., 18:04
 */

#ifndef POINT2D_H
#define	POINT2D_H

class Point2D {
public:
    Point2D(double a = 0);
    Point2D(double tx, double ty);
    double getX() const;
    double getY() const;
    bool setX(double tx);
    bool setY(double ty);
private:
    double x, y;
};

#endif	/* POINT2D_H */
