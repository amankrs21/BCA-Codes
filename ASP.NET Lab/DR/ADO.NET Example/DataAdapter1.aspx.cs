using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Configuration;
using System.Data.SqlClient;
using System.Data;

public partial class _Default : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        string connectionString = ConfigurationManager.ConnectionStrings["Connection"].ToString();
        SqlConnection connection = new SqlConnection(connectionString);
        DataSet ds = new DataSet();
        string sql = "select id, Name, Email,MobileNo,Department,College from Register";
        try
        {
            connection.Open();
            SqlDataAdapter adapter = new SqlDataAdapter(sql, connection);
            adapter.Fill(ds);
            for (int i = 0; i < ds.Tables[0].Rows.Count - 1; i++)
            {
                ListBox1.Items.Add(ds.Tables[0].Rows[i].ItemArray[0].ToString());
            }
            connection.Close();
        }
        catch (Exception ex)
        {
            Label1.Text = "Error in execution " + ex.ToString();
        }
    }
}