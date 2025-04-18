<%@ Page Language="VB" AutoEventWireup="false" CodeFile="VBSessionStateExample.aspx.vb" Inherits="SessionStateExample" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head id="Head1" runat="server">
    <title>Asp.net Session State Example in C#, VB.NET</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    <h3>SessionStateData.aspx</h3>
     <table>
<tr>
<td>FirstName:</td><td><asp:TextBox ID="txtfName" runat="server"/></td>
</tr>
<tr>
<td>LastName:</td><td><asp:TextBox ID="txtlName" runat="server"/></td>
</tr>
<tr><td></td><td> <asp:Button ID="btnSubmit" runat="server" Text="Set SessionState Data" OnClick="btnSubmit_Click" /></td></tr>
</table>
    </div>
    </form>
</body>
</html>
