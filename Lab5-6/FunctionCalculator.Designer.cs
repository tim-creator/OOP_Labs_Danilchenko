namespace DanilchenkoTV_Lab5
{

    partial class FunctionCalculator
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea1 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Series series1 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataVisualization.Charting.Title title1 = new System.Windows.Forms.DataVisualization.Charting.Title();
            this.Chart = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.BuildButton = new System.Windows.Forms.Button();
            this.EllipseButton = new System.Windows.Forms.RadioButton();
            this.HyperbolaButton = new System.Windows.Forms.RadioButton();
            this.ParabolaButton = new System.Windows.Forms.RadioButton();
            this.FunctionType = new System.Windows.Forms.Label();
            this.EllipseAValue = new System.Windows.Forms.TextBox();
            this.EllipseA = new System.Windows.Forms.Label();
            this.EllipseB = new System.Windows.Forms.Label();
            this.EllipseBValue = new System.Windows.Forms.TextBox();
            this.EllipseR = new System.Windows.Forms.Label();
            this.EllipseRValue = new System.Windows.Forms.TextBox();
            this.HyperbolaB = new System.Windows.Forms.Label();
            this.HyperbolaBValue = new System.Windows.Forms.TextBox();
            this.HyperbolaA = new System.Windows.Forms.Label();
            this.HyperbolaAValue = new System.Windows.Forms.TextBox();
            this.ParabolaB = new System.Windows.Forms.Label();
            this.ParabolaBValue = new System.Windows.Forms.TextBox();
            this.ParabolaA = new System.Windows.Forms.Label();
            this.ParabolaAValue = new System.Windows.Forms.TextBox();
            this.ParabolaC = new System.Windows.Forms.Label();
            this.ParabolaCValue = new System.Windows.Forms.TextBox();
            this.LeftBorder = new System.Windows.Forms.Label();
            this.LeftBorderValue = new System.Windows.Forms.TextBox();
            this.RightBorderValue = new System.Windows.Forms.TextBox();
            this.RightBorder = new System.Windows.Forms.Label();
            this.HyperbolaR = new System.Windows.Forms.Label();
            this.HyperbolaRValue = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.Chart)).BeginInit();
            this.SuspendLayout();
            // 
            // Chart
            // 
            chartArea1.Name = "ChartArea1";
            this.Chart.ChartAreas.Add(chartArea1);
            this.Chart.Location = new System.Drawing.Point(145, 316);
            this.Chart.Name = "Chart";
            series1.BorderWidth = 3;
            series1.ChartArea = "ChartArea1";
            series1.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
            series1.Name = "Series1";
            this.Chart.Series.Add(series1);
            this.Chart.Size = new System.Drawing.Size(869, 422);
            this.Chart.TabIndex = 0;
            this.Chart.Text = "chart1";
            title1.Name = "Title1";
            title1.Text = "Function";
            this.Chart.Titles.Add(title1);
            // 
            // BuildButton
            // 
            this.BuildButton.Location = new System.Drawing.Point(371, 257);
            this.BuildButton.Name = "BuildButton";
            this.BuildButton.Size = new System.Drawing.Size(423, 53);
            this.BuildButton.TabIndex = 1;
            this.BuildButton.Text = "Build function\'s graphic";
            this.BuildButton.UseVisualStyleBackColor = true;
            this.BuildButton.Click += new System.EventHandler(this.BuildButton_Click);
            // 
            // EllipseButton
            // 
            this.EllipseButton.AutoSize = true;
            this.EllipseButton.Location = new System.Drawing.Point(142, 65);
            this.EllipseButton.Name = "EllipseButton";
            this.EllipseButton.Size = new System.Drawing.Size(80, 24);
            this.EllipseButton.TabIndex = 2;
            this.EllipseButton.TabStop = true;
            this.EllipseButton.Text = "Ellipse";
            this.EllipseButton.UseVisualStyleBackColor = true;
            this.EllipseButton.CheckedChanged += new System.EventHandler(this.EllipseButton_CheckedChanged);
            // 
            // HyperbolaButton
            // 
            this.HyperbolaButton.AutoSize = true;
            this.HyperbolaButton.Location = new System.Drawing.Point(538, 65);
            this.HyperbolaButton.Name = "HyperbolaButton";
            this.HyperbolaButton.Size = new System.Drawing.Size(106, 24);
            this.HyperbolaButton.TabIndex = 3;
            this.HyperbolaButton.TabStop = true;
            this.HyperbolaButton.Text = "Hyperbola";
            this.HyperbolaButton.UseVisualStyleBackColor = true;
            this.HyperbolaButton.CheckedChanged += new System.EventHandler(this.HyperbolaButton_CheckedChanged);
            // 
            // ParabolaButton
            // 
            this.ParabolaButton.AutoSize = true;
            this.ParabolaButton.Location = new System.Drawing.Point(914, 65);
            this.ParabolaButton.Name = "ParabolaButton";
            this.ParabolaButton.Size = new System.Drawing.Size(97, 24);
            this.ParabolaButton.TabIndex = 4;
            this.ParabolaButton.TabStop = true;
            this.ParabolaButton.Text = "Parabola";
            this.ParabolaButton.UseVisualStyleBackColor = true;
            this.ParabolaButton.CheckedChanged += new System.EventHandler(this.ParabolaButton_CheckedChanged);
            // 
            // FunctionType
            // 
            this.FunctionType.AutoSize = true;
            this.FunctionType.Location = new System.Drawing.Point(534, 27);
            this.FunctionType.Name = "FunctionType";
            this.FunctionType.Size = new System.Drawing.Size(125, 20);
            this.FunctionType.TabIndex = 5;
            this.FunctionType.Text = "Choose function";
            // 
            // EllipseAValue
            // 
            this.EllipseAValue.Location = new System.Drawing.Point(168, 106);
            this.EllipseAValue.Name = "EllipseAValue";
            this.EllipseAValue.Size = new System.Drawing.Size(100, 26);
            this.EllipseAValue.TabIndex = 6;
            // 
            // EllipseA
            // 
            this.EllipseA.AutoSize = true;
            this.EllipseA.Location = new System.Drawing.Point(138, 112);
            this.EllipseA.Name = "EllipseA";
            this.EllipseA.Size = new System.Drawing.Size(24, 20);
            this.EllipseA.TabIndex = 7;
            this.EllipseA.Text = "A:";
            // 
            // EllipseB
            // 
            this.EllipseB.AutoSize = true;
            this.EllipseB.Location = new System.Drawing.Point(138, 144);
            this.EllipseB.Name = "EllipseB";
            this.EllipseB.Size = new System.Drawing.Size(24, 20);
            this.EllipseB.TabIndex = 9;
            this.EllipseB.Text = "B:";
            // 
            // EllipseBValue
            // 
            this.EllipseBValue.Location = new System.Drawing.Point(168, 138);
            this.EllipseBValue.Name = "EllipseBValue";
            this.EllipseBValue.Size = new System.Drawing.Size(100, 26);
            this.EllipseBValue.TabIndex = 8;
            // 
            // EllipseR
            // 
            this.EllipseR.AutoSize = true;
            this.EllipseR.Location = new System.Drawing.Point(138, 175);
            this.EllipseR.Name = "EllipseR";
            this.EllipseR.Size = new System.Drawing.Size(25, 20);
            this.EllipseR.TabIndex = 11;
            this.EllipseR.Text = "R:";
            // 
            // EllipseRValue
            // 
            this.EllipseRValue.Location = new System.Drawing.Point(168, 170);
            this.EllipseRValue.Name = "EllipseRValue";
            this.EllipseRValue.Size = new System.Drawing.Size(100, 26);
            this.EllipseRValue.TabIndex = 10;
            // 
            // HyperbolaB
            // 
            this.HyperbolaB.AutoSize = true;
            this.HyperbolaB.Location = new System.Drawing.Point(529, 150);
            this.HyperbolaB.Name = "HyperbolaB";
            this.HyperbolaB.Size = new System.Drawing.Size(24, 20);
            this.HyperbolaB.TabIndex = 15;
            this.HyperbolaB.Text = "B:";
            // 
            // HyperbolaBValue
            // 
            this.HyperbolaBValue.Location = new System.Drawing.Point(559, 144);
            this.HyperbolaBValue.Name = "HyperbolaBValue";
            this.HyperbolaBValue.Size = new System.Drawing.Size(100, 26);
            this.HyperbolaBValue.TabIndex = 14;
            // 
            // HyperbolaA
            // 
            this.HyperbolaA.AutoSize = true;
            this.HyperbolaA.Location = new System.Drawing.Point(529, 118);
            this.HyperbolaA.Name = "HyperbolaA";
            this.HyperbolaA.Size = new System.Drawing.Size(24, 20);
            this.HyperbolaA.TabIndex = 13;
            this.HyperbolaA.Text = "A:";
            // 
            // HyperbolaAValue
            // 
            this.HyperbolaAValue.Location = new System.Drawing.Point(559, 112);
            this.HyperbolaAValue.Name = "HyperbolaAValue";
            this.HyperbolaAValue.Size = new System.Drawing.Size(100, 26);
            this.HyperbolaAValue.TabIndex = 12;
            // 
            // ParabolaB
            // 
            this.ParabolaB.AutoSize = true;
            this.ParabolaB.Location = new System.Drawing.Point(884, 144);
            this.ParabolaB.Name = "ParabolaB";
            this.ParabolaB.Size = new System.Drawing.Size(24, 20);
            this.ParabolaB.TabIndex = 19;
            this.ParabolaB.Text = "B:";
            // 
            // ParabolaBValue
            // 
            this.ParabolaBValue.Location = new System.Drawing.Point(914, 138);
            this.ParabolaBValue.Name = "ParabolaBValue";
            this.ParabolaBValue.Size = new System.Drawing.Size(100, 26);
            this.ParabolaBValue.TabIndex = 18;
            // 
            // ParabolaA
            // 
            this.ParabolaA.AutoSize = true;
            this.ParabolaA.Location = new System.Drawing.Point(884, 112);
            this.ParabolaA.Name = "ParabolaA";
            this.ParabolaA.Size = new System.Drawing.Size(24, 20);
            this.ParabolaA.TabIndex = 17;
            this.ParabolaA.Text = "A:";
            // 
            // ParabolaAValue
            // 
            this.ParabolaAValue.Location = new System.Drawing.Point(914, 106);
            this.ParabolaAValue.Name = "ParabolaAValue";
            this.ParabolaAValue.Size = new System.Drawing.Size(100, 26);
            this.ParabolaAValue.TabIndex = 16;
            // 
            // ParabolaC
            // 
            this.ParabolaC.AutoSize = true;
            this.ParabolaC.Location = new System.Drawing.Point(884, 176);
            this.ParabolaC.Name = "ParabolaC";
            this.ParabolaC.Size = new System.Drawing.Size(24, 20);
            this.ParabolaC.TabIndex = 21;
            this.ParabolaC.Text = "C:";
            // 
            // ParabolaCValue
            // 
            this.ParabolaCValue.Location = new System.Drawing.Point(914, 173);
            this.ParabolaCValue.Name = "ParabolaCValue";
            this.ParabolaCValue.Size = new System.Drawing.Size(100, 26);
            this.ParabolaCValue.TabIndex = 22;
            // 
            // LeftBorder
            // 
            this.LeftBorder.AutoSize = true;
            this.LeftBorder.Location = new System.Drawing.Point(356, 217);
            this.LeftBorder.Name = "LeftBorder";
            this.LeftBorder.Size = new System.Drawing.Size(91, 20);
            this.LeftBorder.TabIndex = 23;
            this.LeftBorder.Text = "Left border:";
            // 
            // LeftBorderValue
            // 
            this.LeftBorderValue.Location = new System.Drawing.Point(453, 214);
            this.LeftBorderValue.Name = "LeftBorderValue";
            this.LeftBorderValue.Size = new System.Drawing.Size(100, 26);
            this.LeftBorderValue.TabIndex = 24;
            // 
            // RightBorderValue
            // 
            this.RightBorderValue.Location = new System.Drawing.Point(699, 214);
            this.RightBorderValue.Name = "RightBorderValue";
            this.RightBorderValue.Size = new System.Drawing.Size(100, 26);
            this.RightBorderValue.TabIndex = 26;
            // 
            // RightBorder
            // 
            this.RightBorder.AutoSize = true;
            this.RightBorder.Location = new System.Drawing.Point(596, 215);
            this.RightBorder.Name = "RightBorder";
            this.RightBorder.Size = new System.Drawing.Size(101, 20);
            this.RightBorder.TabIndex = 25;
            this.RightBorder.Text = "Right border:";
            // 
            // HyperbolaR
            // 
            this.HyperbolaR.AutoSize = true;
            this.HyperbolaR.Location = new System.Drawing.Point(530, 182);
            this.HyperbolaR.Name = "HyperbolaR";
            this.HyperbolaR.Size = new System.Drawing.Size(25, 20);
            this.HyperbolaR.TabIndex = 28;
            this.HyperbolaR.Text = "R:";
            // 
            // HyperbolaRValue
            // 
            this.HyperbolaRValue.Location = new System.Drawing.Point(559, 176);
            this.HyperbolaRValue.Name = "HyperbolaRValue";
            this.HyperbolaRValue.Size = new System.Drawing.Size(100, 26);
            this.HyperbolaRValue.TabIndex = 27;
            // 
            // Form
            // 
            this.ClientSize = new System.Drawing.Size(1138, 750);
            this.Controls.Add(this.HyperbolaR);
            this.Controls.Add(this.HyperbolaRValue);
            this.Controls.Add(this.RightBorderValue);
            this.Controls.Add(this.RightBorder);
            this.Controls.Add(this.LeftBorderValue);
            this.Controls.Add(this.LeftBorder);
            this.Controls.Add(this.ParabolaC);
            this.Controls.Add(this.ParabolaCValue);
            this.Controls.Add(this.ParabolaB);
            this.Controls.Add(this.ParabolaBValue);
            this.Controls.Add(this.ParabolaA);
            this.Controls.Add(this.ParabolaAValue);
            this.Controls.Add(this.HyperbolaB);
            this.Controls.Add(this.HyperbolaBValue);
            this.Controls.Add(this.HyperbolaA);
            this.Controls.Add(this.HyperbolaAValue);
            this.Controls.Add(this.EllipseR);
            this.Controls.Add(this.EllipseRValue);
            this.Controls.Add(this.EllipseB);
            this.Controls.Add(this.EllipseBValue);
            this.Controls.Add(this.EllipseA);
            this.Controls.Add(this.EllipseAValue);
            this.Controls.Add(this.FunctionType);
            this.Controls.Add(this.ParabolaButton);
            this.Controls.Add(this.HyperbolaButton);
            this.Controls.Add(this.EllipseButton);
            this.Controls.Add(this.BuildButton);
            this.Controls.Add(this.Chart);
            this.Name = "Form";
            this.Text = "Function calculator";
            ((System.ComponentModel.ISupportInitialize)(this.Chart)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }


        #endregion

        private System.Windows.Forms.DataVisualization.Charting.Chart Chart;
        private System.Windows.Forms.Button BuildButton;
        private System.Windows.Forms.RadioButton EllipseButton;
        private System.Windows.Forms.RadioButton HyperbolaButton;
        private System.Windows.Forms.RadioButton ParabolaButton;
        private System.Windows.Forms.Label FunctionType;
        private System.Windows.Forms.TextBox EllipseAValue;
        private System.Windows.Forms.Label EllipseA;
        private System.Windows.Forms.Label EllipseB;
        private System.Windows.Forms.TextBox EllipseBValue;
        private System.Windows.Forms.Label EllipseR;
        private System.Windows.Forms.TextBox EllipseRValue;
        private System.Windows.Forms.Label HyperbolaB;
        private System.Windows.Forms.TextBox HyperbolaBValue;
        private System.Windows.Forms.Label HyperbolaA;
        private System.Windows.Forms.TextBox HyperbolaAValue;
        private System.Windows.Forms.Label ParabolaB;
        private System.Windows.Forms.TextBox ParabolaBValue;
        private System.Windows.Forms.Label ParabolaA;
        private System.Windows.Forms.TextBox ParabolaAValue;
        private System.Windows.Forms.Label ParabolaC;
        private System.Windows.Forms.TextBox ParabolaCValue;
        private System.Windows.Forms.Label LeftBorder;
        private System.Windows.Forms.TextBox LeftBorderValue;
        private System.Windows.Forms.TextBox RightBorderValue;
        private System.Windows.Forms.Label RightBorder;
        private System.Windows.Forms.Label HyperbolaR;
        private System.Windows.Forms.TextBox HyperbolaRValue;
    }
}

