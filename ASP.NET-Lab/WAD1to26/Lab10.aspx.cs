using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Lab9 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        if (FileUpload1.HasFile)
        {
            FileUpload1.SaveAs("C:/Users/amans/OneDrive/Documents/Visual Studio 2013/WebSites/WAD/Files/" + FileUpload1.FileName);
            Label1.Text = "File Uploaded Successfully";
            Image1.ImageUrl = "~/Files/" + FileUpload1.FileName;
        }
        else
        {
            Label1.Text = "File Not uploaded";
        }
    }
}