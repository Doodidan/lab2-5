/*
* File:   Object2DA9.h
* Author: George
*
* Created on 12.11.2014, 18:07
*/

#ifndef OBJECT2DA9_H
#define	OBJECT2DA9_H

#include "Point2D.h"

class Object2DA9 {
public:
    // constructors
    Object2DA9(const Object2DA9* object);
    Object2DA9(double ta, double tb, double tc, double td, const Point2D* tcentre = new Point2D, double tangle = 0);
    Object2DA9(double ta, double tb, double tc, double td, double tx, double ty, double tangle = 0);
    // destructors
    ~Object2DA9();
    // functions
    double getA() const;
    double getB() const;
    double getC() const;
    double getD() const;
    double getAngle() const;
    Point2D* getCentre() const;
    double getCentreX() const;
    double getCentreY() const;
    Object2DA9* getClone() const;
    bool setA(double ta);
    bool setB(double tb);
    bool setC(double tc);
    bool setD(double td);
    bool setAngle(double tangle);
    bool setCentre(const Point2D* tcentre);
    bool setCentre(double tx, double ty);
    bool setCentreX(double tx);
    bool setCentreY(double ty);
    void setAll(const Object2DA9* object);
    void setAll(double ta, double tb, double tc, double td, const Point2D* tcentre = new Point2D, double tangle = 0);
    void setAll(double ta, double tb, double tc, double td, double tx, double ty, double tangle = 0);
    bool move(double x, double y, double tangle = 0);
    bool move(const Point2D* delta, double tangle = 0);
    bool rotate(double tangle);
    bool isInside(double x, double y) const;
    bool isInside(const Point2D* point) const;
    void print() const;
private:
    // variables
    double p_a, p_b, p_c, p_d, p_angle;
    Point2D* p_centre;
    // functions
    Point2D* moveAndRotatePoint(const Point2D* startPoint) const;
    Point2D* movePoint(const Point2D* point) const;
    double hypotenuse(double x, double y) const;
    double hypotenuse(double a) const;
    bool checkCorrectA(double ta) const;
    bool checkCorrectB(double tb) const;
    bool checkCorrectC(double tc) const;
    bool checkCorrectD(double td) const;
    bool checkInside(const Point2D* point) const;
};

#endif	/* OBJECT2DA9_H */
