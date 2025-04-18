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
        if (FileUpload1.HasFile) 
        {
            FileUpload1.SaveAs("C:/Users/Shree/Desktop/Classes/SEM - 4 Classes/ASP.NET/Practicals/Practical 9/Uploaded Images/" + FileUpload1.FileName);
            Label1.Text = "File Uploaded Successfully !!";
        }
        else
        {
            Label1.Text = "File not Uploaded";
        }
    }
}