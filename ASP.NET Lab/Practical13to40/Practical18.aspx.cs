using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using System.Data.SqlClient;
using System.Configuration;

public partial class Practical18 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["Shashank"].ConnectionString);
        con.Open();
        SqlDataAdapter da = new SqlDataAdapter("Select * From information", con);
        DataSet ds = new DataSet();
        da.Fill(ds);
        ListBox1.DataSource = ds;
        ListBox1.DataValueField = "id";
        ListBox1.DataTextField = "Name";
        ListBox1.DataBind();
        DropDownList1.DataSource = ds;
        DropDownList1.DataValueField = "id";
        DropDownList1.DataTextField = "Name";
        DropDownList1.DataBind();
        con.Close();
    }
}