using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Practical20 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        RangeValidator1.MinimumValue = DateTime.Now.AddYears(-45).ToShortDateString();
        RangeValidator1.MaximumValue = DateTime.Now.AddYears(-18).ToShortDateString();
    }
}