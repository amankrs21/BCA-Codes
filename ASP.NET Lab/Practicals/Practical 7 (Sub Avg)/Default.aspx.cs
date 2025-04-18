using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class _Default : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        decimal num1 = Convert.ToDecimal(TextBox1.Text);
        decimal num2 = Convert.ToDecimal(TextBox1.Text);
        decimal num3 = Convert.ToDecimal(TextBox1.Text);

        Label2.Text = (num1 + num2 + num3).ToString();

        Label1.Text = ((num1 + num2 + num3) / 3).ToString();

    }
}