using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Practical2_Default : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
    {
        DropDownList3.Items.Clear();

        DropDownList3.Items.Add("Select");
        DropDownList3.SelectedIndex = 0;

        if (DropDownList1.SelectedValue.Equals("FYBCA")) 
        {
            DropDownList3.Items.Add("Sem 1");
            DropDownList3.Items.Add("Sem 2");
        } 
        else if (DropDownList1.SelectedValue.Equals("SYBCA")) 
        {
            DropDownList3.Items.Add("Sem 3");
            DropDownList3.Items.Add("Sem 4");
        }
        else
        {
            DropDownList3.Items.Add("Sem 5");
            DropDownList3.Items.Add("Sem 6");
        }
    }
}