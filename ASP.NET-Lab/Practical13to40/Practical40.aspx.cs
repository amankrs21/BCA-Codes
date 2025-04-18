using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using System.Data.SqlClient;
using System.Configuration;


public partial class Practical40 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["Shashank"].ConnectionString);
        SqlDataAdapter da = new SqlDataAdapter("Select * From information",con);
        DataSet ds = new DataSet();
        da.Fill(ds);
        ds.WriteXml(MapPath("Practical40.xml"));
        Response.Write("Data Written Into Xml File");
    }
}