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
    Object2DA9(double i = 0, double tangle = 0, Point2D tcentre = Point2D(0, 0));
    Object2DA9(double ta, double tb, double tc, double td, double tangle = 0, Point2D tcentre = Point2D(0, 0));
    ~Object2DA9();
    double getA() const;
    double getB() const;
    double getC() const;
    double getD() const;
    double getAngle() const;
    Point2D getCentre() const;
    void setA(double ta);
    void setB(double tb);
    void setC(double tc);
    void setD(double td);
    void setAngle(double tangle);
    void setCentre(const Point2D &tcentre);
    void move(double x, double y, double tangle = 0);
    void move(const Point2D &delta, double tangle = 0);
    void rotate(double tangle);
    bool IsInside(const Point2D &point) const;
private:
    double a, b, c, d, angle;
    Point2D centre;
};

#endif	/* OBJECT2DA9_H */
