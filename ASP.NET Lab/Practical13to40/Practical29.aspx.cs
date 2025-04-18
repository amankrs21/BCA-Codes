using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using System.Data.SqlClient;
using System.Configuration;

public partial class Practical29 : System.Web.UI.Page
{
    SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["Shashank"].ConnectionString);
    protected void Page_Load(object sender, EventArgs e)
    {
        if(!IsPostBack)
        {
            GridView12();
        }
        
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["Shashank"].ConnectionString);
        con.Open();
        SqlCommand cmd = new SqlCommand("Insert into employee values(@name,@bdate,@contact)",con);
        cmd.Parameters.AddWithValue("@name",TextBox1.Text);
        cmd.Parameters.AddWithValue("@bdate", TextBox2.Text);
        cmd.Parameters.AddWithValue("@contact", TextBox3.Text);
        cmd.ExecuteNonQuery();
        TextBox1.Text = "";
        TextBox2.Text = "";
        TextBox3.Text = "";
        con.Close();
        GridView12();
    }
    protected void GridView12()
    {
        con.Open();
        SqlDataAdapter da = new SqlDataAdapter("Select * From employee", con);
        DataSet ds = new DataSet();
        da.Fill(ds);
        GridView1.DataSource = ds;
        GridView1.DataBind();
        con.Close();
    }
}