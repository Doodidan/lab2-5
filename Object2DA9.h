/*
* File:   Object2DA9.h
* Author: George
*
* Created on 12 George 2014 �., 18:07
*/

#ifndef OBJECT2DA9_H
#define	OBJECT2DA9_H

#include "Point2D.h"

class Object2DA9 {
public:
	Object2DA9(double ta, double tb, double tc, double td, double tangle = 0, const Point2D* tcentre = new Point2D);
	~Object2DA9();
	double getA() const;
	double getB() const;
	double getC() const;
	double getD() const;
	double getAngle() const;
	Point2D* getCentre() const;
	bool setA(double ta);
	bool setB(double tb);
	bool setC(double tc);
	bool setD(double td);
	bool setAngle(double tangle);
	bool setCentre(const Point2D* tcentre);
	bool setCentreX(double x);
	bool setCentreY(double y);
	bool move(double x, double y, double tangle = 0);
	bool move(const Point2D* delta, double tangle = 0);
	bool rotate(double tangle);
	bool isInside(double x, double y) const;
	bool isInside(const Point2D* startPoint) const;
	void print() const;
private:
	double a, b, c, d, angle;
	Point2D* centre;
	Point2D* moveAndRotatePoint(const Point2D* startPoint) const;
	Point2D* movePoint(const Point2D* point) const;
	double hypotenuse(double x, double y) const;
	double hypotenuse(double a) const;
	bool checkA(double ta) const;
	bool checkB(double tb) const;
	bool checkC(double tc) const;
	bool checkD(double td) const;
	bool checkInside(const Point2D* point) const;
};

#endif	/* OBJECT2DA9_H */
