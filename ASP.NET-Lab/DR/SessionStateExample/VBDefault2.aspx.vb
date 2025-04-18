
Partial Class VBDefault2
    Inherits System.Web.UI.Page
    Protected Sub Page_Load(ByVal sender As Object, ByVal e As EventArgs) Handles Me.Load
        If Not IsPostBack Then
            If Session("FirstName") Is Nothing AndAlso Session("LastName") Is Nothing Then
                Session("FirstName") = "Aspdotnet"
                Session("LastName") = "  Suresh"
                lblString.Text = "Welcome " & Convert.ToString(Session("FirstName")) & Convert.ToString(Session("LastName"))
            Else
                lblString.Text = Convert.ToString(Session("FirstName")) & " " & Convert.ToString(Session("LastName"))
                lblfName.Text = Session("FirstName").ToString()
                lbllName.Text = Session("LastName").ToString()
            End If
        End If
    End Sub
End Class