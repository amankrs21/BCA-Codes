<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Practical14.aspx.cs" Inherits="Practical14" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        Showing Data in GridView using SqlDataSource<br />
        <br />
        <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" DataKeyNames="Id" DataSourceID="SqlDataSource1">
            <Columns>
                <asp:BoundField DataField="Id" HeaderText="Id" InsertVisible="False" ReadOnly="True" SortExpression="Id" />
                <asp:BoundField DataField="Name" HeaderText="Name" SortExpression="Name" />
                <asp:BoundField DataField="Eno" HeaderText="Eno" SortExpression="Eno" />
                <asp:BoundField DataField="Contact" HeaderText="Contact" SortExpression="Contact" />
            </Columns>
        </asp:GridView>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:Shashank %>" DeleteCommand="DELETE FROM [information] WHERE [Id] = @Id" InsertCommand="INSERT INTO [information] ([Name], [Eno], [Contact]) VALUES (@Name, @Eno, @Contact)" SelectCommand="SELECT * FROM [information]" UpdateCommand="UPDATE [information] SET [Name] = @Name, [Eno] = @Eno, [Contact] = @Contact WHERE [Id] = @Id">
            <DeleteParameters>
                <asp:Parameter Name="Id" Type="Int32" />
            </DeleteParameters>
            <InsertParameters>
                <asp:Parameter Name="Name" Type="String" />
                <asp:Parameter Name="Eno" Type="String" />
                <asp:Parameter Name="Contact" Type="String" />
            </InsertParameters>
            <UpdateParameters>
                <asp:Parameter Name="Name" Type="String" />
                <asp:Parameter Name="Eno" Type="String" />
                <asp:Parameter Name="Contact" Type="String" />
                <asp:Parameter Name="Id" Type="Int32" />
            </UpdateParameters>
        </asp:SqlDataSource>
    
    </div>
    </form>
</body>
</html>
