<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Practical16.aspx.cs" Inherits="Practical16" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        Displaying data into Repeater View<br />
        <br />
        <asp:Repeater ID="Repeater1" runat="server">
            <HeaderTemplate>
                <table border="1">
                <tr>
                    <th>ID</th>
                    <th>Name</th>
                    <th>Eno</th>
                    <th>Contact</th>
                </tr>
            </HeaderTemplate>
            <ItemTemplate>
                <tr>
                    <td><%#Eval("id") %></td>
                    <td><%#Eval("Name") %></td>
                    <td><%#Eval("Eno") %></td>
                    <td><%#Eval("Contact") %></td>
                </tr>
            </ItemTemplate>
            <FooterTemplate>
                </table>
            </FooterTemplate>
        </asp:Repeater>
    
    </div>
    </form>
</body>
</html>
