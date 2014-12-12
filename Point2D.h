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
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
private:
    double x, y;
};

#endif	/* POINT2D_H */
