using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Practical21 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        CompareValidator2.ValueToCompare = DateTime.Now.ToShortDateString();
    }
}