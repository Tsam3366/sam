<%-- 
    Document   : register
    Created on : 26 May, 2022, 12:24:56 AM
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
            String usr=request.getParameter("userr");
            session.putValue("userr",usr);
            String pwd=request.getParameter("passs");
            Class.forName("com.mysql.jdbc.Driver");
            Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/jspprac","root","");
            Statement st=con.createStatement();
            int rs=st.executeUpdate("Insert into facebook values('"+usr+"','"+pwd+"')");
                    out.println("Registered");       
        %>
    </body>
</html>
