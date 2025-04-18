using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Data;

public partial class Lab_16 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        SqlConnection con = new SqlConnection(@"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\Aman\Documents\Semester 4\ASP.NET Lab\WAD\App_Data\Practicals.mdf");
        con.Open();
        if (con != null)
        {
            Response.Write("Connected");
            SqlDataAdapter ol = new SqlDataAdapter("SELECT Enrollnment_no, Id, Name FROM Lab13", con);
            DataSet ds = new DataSet();

            GridView1.DataSource = ds;
            GridView1.DataBind();
        }
        else
        {
            Response.Write(" Not Connected");
        }
        con.Close();
    }
    protected void GridView1_SelectedIndexChanged(object sender, EventArgs e)
    {

    }
}