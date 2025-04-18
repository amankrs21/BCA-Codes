using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Lab8 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        Label1.Text = "Feedback Name -> " + TextBox1.Text.ToString();
        Label2.Text = "Feedback Email -> " + TextBox2.Text.ToString();
        Label3.Text = "Feedback Message -> " + TextBox3.Text.ToString();
    }
}