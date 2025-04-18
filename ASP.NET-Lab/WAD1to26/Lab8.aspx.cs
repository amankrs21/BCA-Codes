using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Lab7 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        double m1, m2, m3, sum, avg;

        m1 = Convert.ToDouble(TextBox1.Text);
        m2 = Convert.ToDouble(TextBox2.Text);
        m3 = Convert.ToDouble(TextBox3.Text);

        sum = m1 + m2 + m3;
        avg = sum / 3;

        Label1.Text = "Sum = " + sum;
        Label2.Text = "Average = " + avg;
    }
}