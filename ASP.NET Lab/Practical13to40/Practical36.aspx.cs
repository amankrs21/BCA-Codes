using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.Caching;

public partial class Practical36 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if(Cache["slidingkey"] == null)
        {
            string cachedata = DateTime.Now.ToLongTimeString();
            Cache.Insert("slidingkey", cachedata, null, System.Web.Caching.Cache.NoAbsoluteExpiration, TimeSpan.FromSeconds(10));
            Response.Write("Cache Created");
        }
        else
        {
            string value = Cache["slidingkey"].ToString() ;
            Response.Write(value);
        }
    }
}