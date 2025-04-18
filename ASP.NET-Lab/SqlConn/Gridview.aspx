<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Gridview.aspx.cs" Inherits="Gridview" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" BackColor="#DEBA84" BorderColor="#DEBA84" BorderStyle="None" BorderWidth="1px" CellPadding="3" CellSpacing="2" DataKeyNames="Id" DataSourceID="SqlDataSource1">
            <Columns>
                <asp:CommandField ShowDeleteButton="True" ShowEditButton="True" ShowSelectButton="True" />
                <asp:BoundField DataField="Id" HeaderText="Id" InsertVisible="False" ReadOnly="True" SortExpression="Id" />
                <asp:BoundField DataField="FName" HeaderText="FName" SortExpression="FName" />
                <asp:BoundField DataField="LName" HeaderText="LName" SortExpression="LName" />
                <asp:BoundField DataField="Enroll" HeaderText="Enroll" SortExpression="Enroll" />
                <asp:BoundField DataField="Batch" HeaderText="Batch" SortExpression="Batch" />
                <asp:BoundField DataField="Department" HeaderText="Department" SortExpression="Department" />
                <asp:BoundField DataField="Semester" HeaderText="Semester" SortExpression="Semester" />
            </Columns>
            <FooterStyle BackColor="#F7DFB5" ForeColor="#8C4510" />
            <HeaderStyle BackColor="#A55129" Font-Bold="True" ForeColor="White" />
            <PagerStyle ForeColor="#8C4510" HorizontalAlign="Center" />
            <RowStyle BackColor="#FFF7E7" ForeColor="#8C4510" />
            <SelectedRowStyle BackColor="#738A9C" Font-Bold="True" ForeColor="White" />
            <SortedAscendingCellStyle BackColor="#FFF1D4" />
            <SortedAscendingHeaderStyle BackColor="#B95C30" />
            <SortedDescendingCellStyle BackColor="#F1E5CE" />
            <SortedDescendingHeaderStyle BackColor="#93451F" />
        </asp:GridView>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:Aman %>" DeleteCommand="DELETE FROM [Student] WHERE [Id] = @Id" InsertCommand="INSERT INTO [Student] ([FName], [LName], [Enroll], [Batch], [Department], [Semester]) VALUES (@FName, @LName, @Enroll, @Batch, @Department, @Semester)" SelectCommand="SELECT * FROM [Student]" UpdateCommand="UPDATE [Student] SET [FName] = @FName, [LName] = @LName, [Enroll] = @Enroll, [Batch] = @Batch, [Department] = @Department, [Semester] = @Semester WHERE [Id] = @Id">
            <DeleteParameters>
                <asp:Parameter Name="Id" Type="Int32" />
            </DeleteParameters>
            <InsertParameters>
                <asp:Parameter Name="FName" Type="String" />
                <asp:Parameter Name="LName" Type="String" />
                <asp:Parameter Name="Enroll" Type="Int32" />
                <asp:Parameter Name="Batch" Type="String" />
                <asp:Parameter Name="Department" Type="String" />
                <asp:Parameter Name="Semester" Type="Int32" />
            </InsertParameters>
            <UpdateParameters>
                <asp:Parameter Name="FName" Type="String" />
                <asp:Parameter Name="LName" Type="String" />
                <asp:Parameter Name="Enroll" Type="Int32" />
                <asp:Parameter Name="Batch" Type="String" />
                <asp:Parameter Name="Department" Type="String" />
                <asp:Parameter Name="Semester" Type="Int32" />
                <asp:Parameter Name="Id" Type="Int32" />
            </UpdateParameters>
        </asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
