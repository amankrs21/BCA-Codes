<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab10.aspx.cs" Inherits="Lab9" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body bgcolor="cyan", style="font-weight: 700">
    <center>
    <form id="form1" runat="server">
        <div>
        <br />
        <h1> Upload your File here </h1><br />
        <br />
        <asp:FileUpload ID="FileUpload1" runat="server" ForeColor="Red" />
        <br />
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" Text="Upload" OnClick="Button1_Click" />
        <br />
        </div>

        <div style="height: 36px; margin-top: 101px">

            <h1><asp:Label ID="Label1" runat="server"></asp:Label></h1>
            <p>&nbsp;</p>
            <p>
                <asp:Image ID="Image1" runat="server" Height="194px" Width="283px" />
            </p>

        </div>

    </form>

    </center>
</body>
</html>
