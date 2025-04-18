using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using System.Data.SqlClient;
using System.Configuration;

public partial class Practical26 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["Shashank"].ConnectionString);
        con.Open();
        SqlCommand cmd = new SqlCommand("Insert into master values('" + TextBox1.Text + "','" + TextBox2.Text + "','" + FileUpload1.FileName + "')",con);
        cmd.ExecuteNonQuery();
        FileUpload1.SaveAs(Server.MapPath("~/") + FileUpload1.FileName);
        Response.Write("DataUploaded");
        con.Close();
    }
}