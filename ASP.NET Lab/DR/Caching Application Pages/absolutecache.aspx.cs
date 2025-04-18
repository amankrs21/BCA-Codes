using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class absolutecache : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (Cache["AbsoluteCacheKey"] == null)
        {
            string cacheData = DateTime.Now.ToString();
            Cache.Insert("AbsoluteCacheKey", cacheData, null, DateTime.Now.AddSeconds(10), System.Web.Caching.Cache.NoSlidingExpiration);
            Response.Write("Cache created");
        }
        else
        {
            string value = Cache["AbsoluteCacheKey"].ToString();
            Response.Write(value);
        }

    }
}