using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Lab23 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        // Label1.Text = "Login Successfull with Username " + TextBox1.Text + " and " + TextBox2.Text;
    }
    protected void CustomValidator1_ServerValidate(object source, ServerValidateEventArgs args)
    {
        if (args.Value.Length > 10)
        {
            args.IsValid = false;
        }
        else
        {
            args.IsValid = true;
        }
    }
}