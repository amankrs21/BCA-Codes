using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Configuration;
using System.Data.SqlClient;

public partial class Default3 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        string connectionString = ConfigurationManager.ConnectionStrings["Connection"].ToString();
        SqlConnection connection = new SqlConnection(connectionString);
        string sql = "select id,Item,Discount from Discount";
        try
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand(sql, connection);
            SqlDataReader reader = cmd.ExecuteReader();
            while (reader.Read())
            {
                ListBox1.Items.Add(reader.GetValue(0) + " " + reader.GetValue(1) + " " + reader.GetValue(2));
            }
            connection.Close();
        }
        catch (Exception ex)
        {
            Label1.Text = "Error in ExecuteReader " + ex.ToString();
        }
    }
}