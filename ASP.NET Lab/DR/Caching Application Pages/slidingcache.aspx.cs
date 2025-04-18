using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class slidingcache : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (Cache["SlideCacheKe"] == null)
        {
            string cacheData = DateTime.Now.ToString();
            Cache.Insert("SlideCacheKe", cacheData, null, System.Web.Caching.Cache.NoAbsoluteExpiration, TimeSpan.FromSeconds(10));

            Response.Write("Cache created");
        }
        else
        {
            string value = Cache.Get("SlideCacheKe").ToString();
            Response.Write(value);
        }

    }
}