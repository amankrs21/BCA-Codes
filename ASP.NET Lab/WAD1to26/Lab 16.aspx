<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Lab 16.aspx.cs" Inherits="Lab_16" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:GridView ID="GridView1" runat="server" OnSelectedIndexChanged="GridView1_SelectedIndexChanged">
            <Columns>
                <asp:BoundField DataField="Enrollnment_no" HeaderText="Enrollnment_no" SortExpression="Enrollnment_no" />
                <asp:BoundField DataField="ID" HeaderText="ID" SortExpression="ID" />
                <asp:BoundField DataField="Name" HeaderText="Name" SortExpression="Name" />
            </Columns>
        </asp:GridView>
    
    </div>
    </form>
</body>
</html>
