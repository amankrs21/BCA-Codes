﻿using System;
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
    protected void CustomValidator1_ServerValidate(object source, ServerValidateEventArgs e)
    {
        if (e.Value.Length == 10)
        {
            e.IsValid = true;
        }
        else
        {
            e.IsValid = false;
        }
    }
}