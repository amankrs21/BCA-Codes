<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab9.aspx.cs" Inherits="Lab8" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body style="font-weight: 700">
    <center>
    <form id="form1" runat="server">
    <div>

        You&#39;r Feedback is important for us<br />
        <br />
        Name :
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        <br />
        <br />
        Email :
        <asp:TextBox ID="TextBox2" runat="server" TextMode="Email"></asp:TextBox>
        <br />
        <br />
        Write your Feedback<br />
        <asp:TextBox ID="TextBox3" runat="server" Height="121px" TextMode="MultiLine" Width="327px"></asp:TextBox>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Submit" />
        <br />

    </div>
    </form>
    </center>

    <div style="margin-top: 310px">

        <asp:Label ID="Label1" runat="server"></asp:Label>
        <br />
        <asp:Label ID="Label2" runat="server"></asp:Label>
        <br />
        <asp:Label ID="Label3" runat="server"></asp:Label>

    </div>
</body>
</html>
