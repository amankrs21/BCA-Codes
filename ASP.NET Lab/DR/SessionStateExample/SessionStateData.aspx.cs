using System;


public partial class SessionStateData : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
      
    }
    // Set Session values during button click
    protected void btnSubmit_Click(object sender, EventArgs e)
    {
       Session["FirstName"] = txtfName.Text;
        Session["LastName"] = txtlName.Text;
        Response.Redirect("Default2.aspx");
    }

}
