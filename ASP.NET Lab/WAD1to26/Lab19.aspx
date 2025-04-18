<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab19.aspx.cs" Inherits="Lab18" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .auto-style1 {
            font-size: medium;
        }
        .auto-style2 {
            text-align: center;
        }
    </style>
</head>
<body bgcolor="cyan">
    <form id="form1" runat="server">
    <div class="auto-style2">
    
        <br />
        <span class="auto-style1">Enter Text 1 :
        </span>
        <asp:TextBox ID="TextBox1" runat="server" CssClass="auto-style1"></asp:TextBox>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <span class="auto-style1">Enter Text 2 :
        </span>
        <asp:TextBox ID="TextBox2" runat="server" CssClass="auto-style1"></asp:TextBox>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <span class="auto-style1">Enter Text 3:
        </span>
        <asp:TextBox ID="TextBox3" runat="server" CssClass="auto-style1"></asp:TextBox>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <span class="auto-style1">Enter Text 4 :
        </span>
        <asp:TextBox ID="TextBox4" runat="server" CssClass="auto-style1"></asp:TextBox>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <span class="auto-style1">Enter Text 5 :
        </span>
        <asp:TextBox ID="TextBox5" runat="server" CssClass="auto-style1"></asp:TextBox>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Submit" BackColor="#FF5050" CssClass="auto-style1" Height="45px" Width="129px" />
        <br class="auto-style1" />
    
        <br class="auto-style1" />
        <asp:ListBox ID="ListBox1" runat="server" CssClass="auto-style1">
            <asp:ListItem></asp:ListItem>
            <asp:ListItem>SELECT</asp:ListItem>
        </asp:ListBox>
        <br class="auto-style1" />
        <br class="auto-style1" />
        <asp:DropDownList ID="DropDownList1" runat="server" CssClass="auto-style1">
            <asp:ListItem></asp:ListItem>
            <asp:ListItem>SELECT</asp:ListItem>
        </asp:DropDownList>
        <br />
        <br />
    
    </div>
    </form>
</body>
</html>
