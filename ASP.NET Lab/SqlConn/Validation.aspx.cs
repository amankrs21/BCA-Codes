using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Data;
using System.Configuration;

public partial class Validation : System.Web.UI.Page
{
    SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["Aman"].ConnectionString);
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack)
        {
            Grid();
        }
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["Aman"].ConnectionString);
        con.Open();
        SqlCommand cmd = new SqlCommand("Insert into stu values(@enroll,@fname,@lname,@dep,@sem,@batch)", con);
        cmd.Parameters.AddWithValue("@enroll", Convert.ToInt32(TextBox3.Text));
        cmd.Parameters.AddWithValue("@fname", TextBox1.Text);
        cmd.Parameters.AddWithValue("@lname", TextBox2.Text);
        cmd.Parameters.AddWithValue("@dep", DropDownList1.SelectedValue);
        cmd.Parameters.AddWithValue("@sem", Convert.ToInt32(DropDownList2.SelectedValue));
        cmd.Parameters.AddWithValue("@batch", DropDownList3.SelectedValue);
        cmd.ExecuteNonQuery();
        con.Close();
        Grid();
    }
    protected void Grid()
    {
        con.Open();
        SqlDataAdapter da = new SqlDataAdapter("Select * from stu", con);
        DataSet ds = new DataSet();
        da.Fill(ds);
        GridView1.DataSource = ds;
        GridView1.DataBind();
        con.Close();
    }
}