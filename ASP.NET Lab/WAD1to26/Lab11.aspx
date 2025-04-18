<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab11.aspx.cs" Inherits="Lab10" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body bgcolor="cyan"><center>
    <form id="form1" runat="server">
    <div>

        <asp:ListBox ID="ListBox1" runat="server" AutoPostBack="True" Height="131px" OnSelectedIndexChanged="ListBox1_SelectedIndexChanged" Width="126px"></asp:ListBox>
        <br />
        <br />
        <br />
        <asp:Image ID="Image1" runat="server" Height="320px" Width="416px" />
        <br />
        <br />
        <br />
        <strong><h2>COST :- <asp:Label ID="Label1" runat="server"></asp:Label></h2>

        </strong>

    </div>
    </form>
    </center>
</body>
</html>
