<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab20.aspx.cs" Inherits="Lab19" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .auto-style1 {
            text-align: left;
        }
        .auto-style2 {
            font-size: x-large;
        }
    </style>
</head>
<body bgcolor="cyan" style="text-align: left">
    <form id="form1" runat="server">
    <div class="auto-style1">
    
        <br />
        <br />
        <strong><span class="auto-style2">Username :</span></strong>
        <asp:TextBox ID="TextBox1" runat="server" CssClass="auto-style2" Width="158px"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox1" ErrorMessage="RequiredFieldValidator" ForeColor="Red" style="font-size: x-large">*This Field is Required</asp:RequiredFieldValidator>
        <br />
        <br class="auto-style2" />
        <br class="auto-style2" />
        <strong><span class="auto-style2">Favorite Color :</span></strong>
        <asp:DropDownList ID="DropDownList1" runat="server" style="font-size: x-large">
            <asp:ListItem></asp:ListItem>
            <asp:ListItem>RED</asp:ListItem>
            <asp:ListItem>GREEN</asp:ListItem>
            <asp:ListItem>BLUE</asp:ListItem>
            <asp:ListItem>YELLOW</asp:ListItem>
            <asp:ListItem>ORANGE</asp:ListItem>
            <asp:ListItem>BLACK</asp:ListItem>
            <asp:ListItem>WHITE</asp:ListItem>
            <asp:ListItem>PINK</asp:ListItem>
            <asp:ListItem>OTHER</asp:ListItem>
        </asp:DropDownList>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="DropDownList1" Display="Dynamic" ErrorMessage="RequiredFieldValidator" ForeColor="Red" SetFocusOnError="True" style="font-size: x-large">*This Field is Required</asp:RequiredFieldValidator>
        <br />
        <br class="auto-style2" />
        <br class="auto-style2" />
        <asp:Button ID="Button1" runat="server" BackColor="#3366FF" CssClass="auto-style2" Text="Submit" OnClick="Button1_Click" />
        <br />
        <br />
    
    </div>

    <div style="font-size: x-large; height: 217px; margin-top: 62px">

        <asp:Label ID="Label1" runat="server"></asp:Label>

    </div>

    </form>

    </body>
</html>
