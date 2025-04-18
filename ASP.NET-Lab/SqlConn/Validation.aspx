<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Validation.aspx.cs" Inherits="Validation" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body style="font-size: x-large; font-weight: 700; text-align: center">
    <form id="form1" runat="server">
        First Name :
        <asp:TextBox ID="TextBox1" runat="server" Width="207px" required="true"></asp:TextBox>
        <br />
        <br />
        Last Name :
        <asp:TextBox ID="TextBox2" runat="server" Width="202px" required="true"></asp:TextBox>
        <br />
        <br />
        Enrollnment :
        <asp:TextBox ID="TextBox3" runat="server" Width="191px" required="true"></asp:TextBox>
        <br />
        <br />
        Department : <asp:DropDownList ID="DropDownList1" runat="server" AutoPostBack="True" required="true">
            <asp:ListItem></asp:ListItem>
            <asp:ListItem>BCA</asp:ListItem>
            <asp:ListItem>BSCIT</asp:ListItem>
            <asp:ListItem>IMCA</asp:ListItem>
        </asp:DropDownList>
        <br />
        <br />
        Semester :
        <asp:DropDownList ID="DropDownList2" runat="server" AutoPostBack="True" required="true">
            <asp:ListItem></asp:ListItem>
            <asp:ListItem>1</asp:ListItem>
            <asp:ListItem>2</asp:ListItem>
            <asp:ListItem>3</asp:ListItem>
            <asp:ListItem>4</asp:ListItem>
            <asp:ListItem>5</asp:ListItem>
            <asp:ListItem>6</asp:ListItem>
        </asp:DropDownList>
        <br />
        <br />
        Batch :
        <asp:DropDownList ID="DropDownList3" runat="server" AutoPostBack="True" required="true">
            <asp:ListItem></asp:ListItem>
            <asp:ListItem>A</asp:ListItem>
            <asp:ListItem>B</asp:ListItem>
            <asp:ListItem>C</asp:ListItem>
            <asp:ListItem>D</asp:ListItem>
            <asp:ListItem>E</asp:ListItem>
            <asp:ListItem>F</asp:ListItem>
            <asp:ListItem>G</asp:ListItem>
            <asp:ListItem>H</asp:ListItem>
            <asp:ListItem>I</asp:ListItem>
            <asp:ListItem>J</asp:ListItem>
        </asp:DropDownList>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" BackColor="Aqua" Height="34px" OnClick="Button1_Click" Text="SUBMIT" Width="119px" />
        <br />
        <br />
        <br />
        <br />
    <div style="font-size: medium; width: 783px; margin-left: 273px">
        <br />
        <asp:GridView ID="GridView1" runat="server" CellPadding="4" ForeColor="#333333" GridLines="None" style="font-size: large">
            <AlternatingRowStyle BackColor="White" />
            <EditRowStyle BackColor="#7C6F57" />
            <FooterStyle BackColor="#1C5E55" Font-Bold="True" ForeColor="White" />
            <HeaderStyle BackColor="#1C5E55" Font-Bold="True" ForeColor="White" />
            <PagerStyle BackColor="#666666" ForeColor="White" HorizontalAlign="Center" />
            <RowStyle BackColor="#E3EAEB" />
            <SelectedRowStyle BackColor="#C5BBAF" Font-Bold="True" ForeColor="#333333" />
            <SortedAscendingCellStyle BackColor="#F8FAFA" />
            <SortedAscendingHeaderStyle BackColor="#246B61" />
            <SortedDescendingCellStyle BackColor="#D4DFE1" />
            <SortedDescendingHeaderStyle BackColor="#15524A" />
        </asp:GridView>
        </div>
    </form>
    </body>
</html>
