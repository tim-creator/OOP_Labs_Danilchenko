using System;
using System.Collections.Generic;

namespace DanilchenkoTV_Lab5
{
    class Hyperbola:Function
    {
        private double _aValue;
        private double _bValue;
        private double _rValue;
        public Hyperbola(double lb, double rb, double a, double b, double r)
        {
            _leftBorder = lb;
            _rightBorder = rb;
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
            if(_leftBorder > -_rValue && _rightBorder > _rValue)
            {
                return points;
            }
            double y;
            double x = _leftBorder;
            while (x <= -_rValue)
            {
                y = (Math.Sqrt(-1 * (_bValue * _bValue) * (_aValue * _aValue * _rValue - x * x))) / _aValue;
                points.Add(new KeyValuePair<double, double>(x, y));
                x += _step;
            }
            x = -_rValue;
            while (x >= _leftBorder)
            {
                y = (Math.Sqrt(-1 * (_bValue * _bValue) * (_aValue * _aValue * _rValue - x * x))) / _aValue;
                points.Add(new KeyValuePair<double, double>(x, -y));
                x -= _step;
            }
            x = _rightBorder;
            while (x >= _rValue)
            {
                y = (Math.Sqrt(-1 * (_bValue * _bValue) * (_aValue * _aValue * _rValue - x * x))) / _aValue;
                points.Add(new KeyValuePair<double, double>(x, -y));
                x -= _step;
            }
            x = _rValue;
            while (x <= _rightBorder)
            {
                y = (Math.Sqrt(-1 * (_bValue * _bValue) * (_aValue * _aValue * _rValue - x * x))) / _aValue;
                points.Add(new KeyValuePair<double, double>(x, y));
                x += _step;
            }
            return points;
        }
        
    }
}
