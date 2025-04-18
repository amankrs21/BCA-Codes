<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Practical17.aspx.cs" Inherits="Practical17" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        Displaying Data into Listbox using SqlSource<br />
        <br />
        <asp:ListBox ID="ListBox1" runat="server" DataSourceID="SqlDataSource1" DataTextField="Name" DataValueField="Id"></asp:ListBox>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:Shashank %>" SelectCommand="SELECT * FROM [information]"></asp:SqlDataSource>
        <br />
        <br />
        Displaying Data into DropDownList using SqlSource<br />
        <br />
        <asp:DropDownList ID="DropDownList1" runat="server" DataSourceID="SqlDataSource1" DataTextField="Name" DataValueField="Id">
        </asp:DropDownList>
    
    </div>
    </form>
</body>
</html>
