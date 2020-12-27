using System;
using System.Collections.Generic;

namespace DanilchenkoTV_Lab5
{
    class Parabola:Function
    {
        private double _aValue;
        private double _bValue;
        private double _cValue;

        public Parabola(double lb, double rb, double a, double b, double c)
        {
            _leftBorder = lb;
            _rightBorder = rb;
            _aValue = a;
            _bValue = b;
            _cValue = c;
        }
        
        public override List<KeyValuePair<double, double>> getPoints()
        {
            List<KeyValuePair<double, double>> points = new List<KeyValuePair<double, double>>();
            double x = _leftBorder;
            double y;
            while (x <= _rightBorder)
            {
                y = _aValue * x * x + _bValue * x + _cValue;
                points.Add(new KeyValuePair<double, double>(x, y));
                x += _step;
            }
            return points;
        }
    }
}
