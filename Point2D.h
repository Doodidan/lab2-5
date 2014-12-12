/*
 * File:   Point2D.h
 * Author: Георгий
 *
 * Created on 12 Декабрь 2014 г., 19:04
 */

#ifndef POINT2D_H
#define	POINT2D_H

class Point2D {
public:
    Point2D();
    Point2D(double a);
    Point2D(double tx, double ty);
    ~Point2D();
    double getX() const;
    double getY() const;
    void setX(double tx);
    void setY(double ty);
private:
    double x, y;
};

#endif	/* POINT2D_H */
