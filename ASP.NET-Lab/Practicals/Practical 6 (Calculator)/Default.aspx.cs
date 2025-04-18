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
        Label1.Text = (Convert.ToInt16(TextBox1.Text) + Convert.ToInt16(TextBox2.Text)).ToString();
    }
    protected void Button2_Click(object sender, EventArgs e)
    {
        Label1.Text = (Convert.ToInt16(TextBox1.Text) - Convert.ToInt16(TextBox2.Text)).ToString();
    }
    protected void Button3_Click(object sender, EventArgs e)
    {
        Label1.Text = (Convert.ToInt16(TextBox1.Text) * Convert.ToInt16(TextBox2.Text)).ToString();
    }
    protected void Button4_Click(object sender, EventArgs e)
    {
        Label1.Text = (Convert.ToInt16(TextBox1.Text) / Convert.ToInt16(TextBox2.Text)).ToString();
    }
    protected void Button5_Click(object sender, EventArgs e)
    {
        Label1.Text = (Convert.ToInt16(TextBox1.Text) % Convert.ToInt16(TextBox2.Text)).ToString();
    }
}