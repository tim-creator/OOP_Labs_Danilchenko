using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DanilchenkoTV_Lab5
{
    abstract class Function
    {
        protected double _leftBorder;
        protected double _rightBorder;
        protected const double _step = 0.01;
        public Function() { }
        abstract public List<KeyValuePair<double, double>> getPoints();
        
    }
}
