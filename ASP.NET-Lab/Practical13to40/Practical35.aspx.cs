using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.Caching;

public partial class Practical35 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if(Cache["Absoluteexpirationkey"] == null )
        {
            string cachedata = DateTime.Now.ToLongTimeString();
            Cache.Insert("Absoluteexpirationkey", cachedata, null, DateTime.Now.AddSeconds(10), System.Web.Caching.Cache.NoSlidingExpiration);
            Response.Write("Cache Created");
        }
        else
        {
            string value = Cache["Absoluteexpirationkey"].ToString();
            Response.Write(value);
        }
    }
}