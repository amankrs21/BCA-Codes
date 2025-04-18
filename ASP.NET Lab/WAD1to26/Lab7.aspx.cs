using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Lab6 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        double n1, n2, result;
        n1 = Convert.ToDouble(TextBox1.Text);
        n2 = Convert.ToDouble(TextBox2.Text);

        result = Math.Pow(n1, n2);

        Label1.Text = "<h1> Result = " + result.ToString() + "</h2>";

    }
}