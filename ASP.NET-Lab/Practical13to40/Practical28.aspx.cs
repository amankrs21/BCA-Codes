using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Data;
using System.Configuration;

public partial class Practical28 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        string output="";
        SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["Shashank"].ConnectionString);
        con.Open();
        int id = int.Parse(Request.Params["id"]);
        SqlCommand cmd = new SqlCommand("Select * From master where id='"+id+"'", con);
        SqlDataReader rdr = cmd.ExecuteReader();
        while(rdr.Read())
        {
            output += "<div style='float:left;'><div><img src='" + rdr[3] + "' height='300px' width='300px'> </div><div><center>Name :- " + rdr[1] + "</center></div><div><center>Quantity :- " + rdr[2] + "</center></div></div>";
        }
        Response.Write(output);
        con.Close();
    }
}