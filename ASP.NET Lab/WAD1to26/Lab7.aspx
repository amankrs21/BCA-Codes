<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab7.aspx.cs" Inherits="Lab6" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body bgcolor="cyan">
    <form id="form1" runat="server">
    <center>
        <div>

            <br />
            <strong>Enter 2 Number&#39;s to Calculate num1^num2<br />
            <br />
            </strong>
            <br />
            Enter Number 1 :
            <asp:TextBox ID="TextBox1" runat="server" TextMode="Number"></asp:TextBox>
            <br />
            <br />
            Enter Number 2 :
            <asp:TextBox ID="TextBox2" runat="server" TextMode="Number"></asp:TextBox>
            <br />
            <br />
            <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Calculate" />
            <br />
            <br />
            <asp:Label ID="Label1" runat="server"></asp:Label>

        </div>
    </center>
    </form>
</body>
</html>
