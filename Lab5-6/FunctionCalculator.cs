using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DanilchenkoTV_Lab5
{
    public partial class FunctionCalculator : System.Windows.Forms.Form
    {
        private Function _function;
        public FunctionCalculator()
        {
            InitializeComponent();
        }
        

        private void setEllipseStatus(bool status)
        {
            this.EllipseA.Enabled = status;
            this.EllipseAValue.Enabled = status;
            this.EllipseB.Enabled = status;
            this.EllipseBValue.Enabled = status;
            this.EllipseR.Enabled = status;
            this.EllipseRValue.Enabled = status;
        }

        private void setHyperbolaStatus(bool status)
        {
            this.HyperbolaA.Enabled = status;
            this.HyperbolaAValue.Enabled = status;
            this.HyperbolaB.Enabled = status;
            this.HyperbolaBValue.Enabled = status;
            this.HyperbolaR.Enabled = status;
            this.HyperbolaRValue.Enabled = status;
        }

        private void setParabolaStatus(bool status)
        {
            this.ParabolaA.Enabled = status;
            this.ParabolaAValue.Enabled = status;
            this.ParabolaB.Enabled = status;
            this.ParabolaBValue.Enabled = status;
            this.ParabolaC.Enabled = status;
            this.ParabolaCValue.Enabled = status;
        }

        private void EllipseButton_CheckedChanged(object sender, EventArgs e)
        {
            this.LeftBorder.Enabled = false;
            this.RightBorder.Enabled = false;
            this.LeftBorderValue.Enabled = false;
            this.RightBorderValue.Enabled = false;
            setEllipseStatus(true);
            setHyperbolaStatus(false);
            setParabolaStatus(false);
        }

        private void HyperbolaButton_CheckedChanged(object sender, EventArgs e)
        {
            this.LeftBorder.Enabled = true;
            this.RightBorder.Enabled = true;
            this.LeftBorderValue.Enabled = true;
            this.RightBorderValue.Enabled = true;
            setEllipseStatus(false);
            setHyperbolaStatus(true);
            setParabolaStatus(false);
        }

        private void ParabolaButton_CheckedChanged(object sender, EventArgs e)
        {
            this.LeftBorder.Enabled = true;
            this.RightBorder.Enabled = true;
            this.LeftBorderValue.Enabled = true;
            this.RightBorderValue.Enabled = true;
            setEllipseStatus(false);
            setHyperbolaStatus(false);
            setParabolaStatus(true);
        }

        private void BuildButton_Click(object sender, EventArgs e)
        {
            try
            {
                double LB = 0, RB = 0;
                if (EllipseButton.Checked)
                {
                    double A = System.Convert.ToDouble(EllipseAValue.Text);
                    double B = System.Convert.ToDouble(EllipseBValue.Text);
                    double R = System.Convert.ToDouble(EllipseRValue.Text);
                    _function = new Ellipse(A, B, R);
                }
                else if (HyperbolaButton.Checked)
                {
                    LB = System.Convert.ToDouble(LeftBorderValue.Text);
                    RB = System.Convert.ToDouble(RightBorderValue.Text);
                    double A = System.Convert.ToDouble(HyperbolaAValue.Text);
                    double B = System.Convert.ToDouble(HyperbolaBValue.Text);
                    double R = System.Convert.ToDouble(HyperbolaRValue.Text);
                    _function = new Hyperbola(LB, RB, A, B, R);
                }
                else if (ParabolaButton.Checked)
                {
                    LB = System.Convert.ToDouble(LeftBorderValue.Text);
                    RB = System.Convert.ToDouble(RightBorderValue.Text);
                    double A = System.Convert.ToDouble(ParabolaAValue.Text);
                    double B = System.Convert.ToDouble(ParabolaBValue.Text);
                    double C = System.Convert.ToDouble(ParabolaCValue.Text);
                    _function = new Parabola(LB, RB, A, B, C);
                }
                this.Chart.Series[0].Points.Clear();
                List<KeyValuePair<double, double>> points = _function.getPoints();
                foreach (var xy in points)
                {
                    this.Chart.Series[0].Points.AddXY(xy.Key, xy.Value);
                }
            }
            catch
            {
                MessageBox.Show("Неправильно введены данные");
            }
        }
    }
}
