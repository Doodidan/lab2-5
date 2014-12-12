/*
 * File:   Object2DA9.h
 * Author: Георгий
 *
 * Created on 12 Декабрь 2014 г., 19:07
 */

#ifndef OBJECT2DA9_H
#define	OBJECT2DA9_H

class Object2DA9 {
public:
    double getA() const;
    double getB() const;
    double getC() const;
    double getD() const;
    double getAngle() const;
    Point2D getCentre() const;
    void setB(double b);
    void setC(double c);
    void setD(double d);
    void setAngle(double angle);
    void setCentre(const Point2D &centre);
    void move(double x, double y, double angle = 0);
    void move(const Point2D &delta, double angle = 0);
    void rotate(double angle);
    bool IsInside(const Point2D &point) const;
private:
    double a, b, c, d, angle;
    Point2D centre;
};

#endif	/* OBJECT2DA9_H */
