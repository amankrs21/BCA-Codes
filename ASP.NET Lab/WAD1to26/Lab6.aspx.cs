using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Lab5 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        String text1 = TextBox1.Text.ToString();
        String text2 = TextBox2.Text.ToString();

        String concate = text1 + " " + text2;

        Label1.Text = "<h1>" + concate + "</h1>";
    }
}