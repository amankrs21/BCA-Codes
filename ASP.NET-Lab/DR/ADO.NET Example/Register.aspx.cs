using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Configuration;
using System.Data.SqlClient;

public partial class Register : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
      
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        string connectionString = ConfigurationManager.ConnectionStrings["Connection"].ToString();
        SqlConnection connection = new SqlConnection(connectionString);
        string sql =("INSERT INTO Register(Name, Email, MobileNo, Department,College) VALUES ('" + TextBox6.Text + "','" + TextBox2.Text + "','" + TextBox3.Text + "','" + TextBox4.Text + "','" + TextBox5.Text + "')");
        try
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand(sql, connection);
            cmd.ExecuteNonQuery();
            connection.Close();
            Label1.Text = "Successfully Inserted !!";
        }
        catch (Exception ex)
        {
            Label1.Text = "Error inserting data" + ex.ToString();
        }
    }
}