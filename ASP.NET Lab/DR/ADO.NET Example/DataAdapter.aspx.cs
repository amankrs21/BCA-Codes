using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Configuration;
using System.Data;

public partial class Default2 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!Page.IsPostBack)
        {
            SqlCommand MyCommand;
            SqlDataAdapter MyAdapter;
            DataTable MyTable;

            string connectionString = ConfigurationManager.ConnectionStrings["Connection"].ToString();
            SqlConnection connection = new SqlConnection(connectionString);

            MyCommand = new SqlCommand();
            MyCommand.CommandText = "SELECT TOP 8 * FROM Register";
            MyCommand.CommandType = CommandType.Text;
            MyCommand.Connection = connection;

            MyTable = new DataTable();
            MyAdapter = new SqlDataAdapter();
            MyAdapter.SelectCommand = MyCommand;
            MyAdapter.Fill(MyTable);

            GridView1.DataSource = MyTable.DefaultView;
            GridView1.DataBind();

            MyAdapter.Dispose();
            MyCommand.Dispose();
            connection.Dispose();


        }
    }
}