<%-- 
    Document   : login
    Created on : 26 May, 2022, 12:20:16 AM
    Author     : T SAM
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <%@page import="java.sql.*"%>
        <%@page import="javax.sql.*"%>
        <%
            String user_id=request.getParameter("user");
            session.putValue("user",user_id);
            String pwd=request.getParameter("pass");
            Class.forName("com.mysql.jdbc.Driver");
            Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/jspprac","root","");
            Statement st=con.createStatement();
            ResultSet rs=st.executeQuery("select * from facebook where username='"+user_id+"'");
            if(rs.next())
            {
                if(rs.getString(2).equals(pwd))
                {
                    out.println("Welcome....."+user_id);
                }
                else
                {
                    out.println("INVALID PASSWORD...TRY AGAIN");
                }
            }
            
        %>
    </body>
</html>
