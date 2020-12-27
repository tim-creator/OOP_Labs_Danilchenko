using System;
using System.Collections.Generic;

namespace DanilchenkoTV_Lab5
{
    class Ellipse:Function
    {
        private double _aValue;
        private double _bValue;
        private double _rValue;

        public Ellipse(double a, double b, double r)
        {
            _leftBorder = 0;
            _rightBorder = 0;
            _aValue = a;
            _bValue = b;
            _rValue = r;
        }

        public override List<KeyValuePair<double, double>> getPoints()
        {
            List<KeyValuePair<double, double>> points = new List<KeyValuePair<double, double>>();
            if (_aValue == 0 || _bValue == 0)
            {
                return points;
            }
            double y;
            double x = -_aValue;
            
            while (x <= _aValue)
            {
                y = (_bValue * Math.Sqrt(_aValue * _aValue - x * x)) / _aValue;
                points.Add(new KeyValuePair<double, double>(x, y));
                x += _step;
            }
            x = _aValue;
            while (x >= -_aValue)
            {
                y = (_bValue * Math.Sqrt(_aValue * _aValue - x * x)) / _aValue;
                points.Add(new KeyValuePair<double, double>(x, -y));
                x -= _step;
            }
            x = -_aValue;
            y = (_bValue * Math.Sqrt(_aValue * _aValue - x * x)) / _aValue;
            points.Add(new KeyValuePair<double, double>(x, y));
            return points;
        }
    }
}
