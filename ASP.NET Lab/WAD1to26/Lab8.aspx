<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab8.aspx.cs" Inherits="Lab7" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body bgcolor="cyan" style="font-weight: 700">
    <form id="form1" runat="server">
    <center>
        <div>

            <br />
            Enter Marks of 3 Subjects out of 100 marks, to Calculate Total and Average<br />
            <br />
            <br />
            Enter Subject 1 Marks :
            <asp:TextBox ID="TextBox1" runat="server" TextMode="Number"></asp:TextBox>
            <br />
            <br />
            Enter Subject 2 Marks :
            <asp:TextBox ID="TextBox2" runat="server" TextMode="Number"></asp:TextBox>
            <br />
            <br />
            Enter Subject 3 Marks :
            <asp:TextBox ID="TextBox3" runat="server" TextMode="Number"></asp:TextBox>
            <br />
            <br />
            <asp:Button ID="Button1" runat="server" Text="Calculate" Height="36px" OnClick="Button1_Click" Width="109px" />
            <br />
            <br />
            <h1>
            <asp:Label ID="Label1" runat="server"></asp:Label>
            <br />
            <asp:Label ID="Label2" runat="server"></asp:Label>
            </h1>

        </div>
    </center>
    </form>
</body>
</html>
