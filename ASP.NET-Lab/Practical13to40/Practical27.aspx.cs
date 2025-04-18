using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using System.Data.SqlClient;
using System.Configuration;

public partial class Practical27 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        int i=0;
        string output = "";
        SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["Shashank"].ConnectionString);
        con.Open();
        SqlCommand cmd = new SqlCommand("Select * From master", con);
        SqlDataReader rdr = cmd.ExecuteReader();
        while(rdr.Read())
        {
            i++;
            if(i == 3)
            {
                output += "<br>";
                    i=0;
            }
            output +="<a href='Practical28.aspx?id="+rdr[0]+"'><img src='"+rdr[3]+"' height='400px' width='400px'> <a/>";
        }
        Response.Write(output);
        con.Close();
    }
}