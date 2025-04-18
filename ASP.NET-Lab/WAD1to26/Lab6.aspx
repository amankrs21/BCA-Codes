<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab6.aspx.cs" Inherits="Lab5" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body bgcolor="cyan">
    <form id="form1" runat="server">
    <center>
        <div>

            Enter String 1 :
            <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            <br />
            <br />
            Enter String 2 :
            <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
            <br />
            <br />
            <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Concate" />
            <br />
            <br />
            <asp:Label ID="Label1" runat="server"></asp:Label>

        </div>
    </center>
    </form>
</body>
</html>
