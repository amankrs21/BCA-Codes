using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Lab18 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        ListBox1.Items.Add(TextBox1.Text);
        ListBox1.Items.Add(TextBox2.Text);
        ListBox1.Items.Add(TextBox3.Text);
        ListBox1.Items.Add(TextBox4.Text);
        ListBox1.Items.Add(TextBox5.Text);

        DropDownList1.Items.Add(TextBox1.Text);
        DropDownList1.Items.Add(TextBox2.Text);
        DropDownList1.Items.Add(TextBox3.Text);
        DropDownList1.Items.Add(TextBox4.Text);
        DropDownList1.Items.Add(TextBox5.Text);
    }
}