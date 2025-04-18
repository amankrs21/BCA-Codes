<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Repeatorcontrol.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:Repeater ID="Repeater1" runat="server">
        <HeaderTemplate>
        <table cellspacing="0" rules="all" border="1">
            <tr>
                <th scope="col" style="width: 80px" bgcolor="#3333CC" align="center" valign="middle">
                    Id
                </th>
                <th scope="col" style="width: 120px" bgcolor="#FFFF66">
                    Name
                </th>
                <th scope="col" style="width: 100px" bgcolor="#CC0099">
                    Email
                </th>
                <th scope="col" style="width: 100px" bgcolor="#009900">
                    MobileNo
                </th>
                <th scope="col" style="width: 100px" bgcolor="Red">
                    Department
                </th>
                <th scope="col" style="width: 100px" bgcolor="#66FFFF">
                    College
                </th>
            </tr>
    </HeaderTemplate>
    <ItemTemplate>
        <tr>
            <td>
                <asp:Label ID="lblCustomerId" runat="server" Text='<%# Eval("id") %>' />
            </td>
            <td>
                <asp:Label ID="lblContactName" runat="server" Text='<%# Eval("Name") %>' />
            </td>
            <td>
                <asp:Label ID="lblCountry" runat="server" Text='<%# Eval("Email") %>' />
            </td>
            <td>
                <asp:Label ID="Label1" runat="server" Text='<%# Eval("MobileNo") %>' />
            </td>
            <td>
                <asp:Label ID="Label2" runat="server" Text='<%# Eval("Department") %>' />
            </td>
            <td>
                <asp:Label ID="Label3" runat="server" Text='<%# Eval("College") %>' />
            </td>
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
