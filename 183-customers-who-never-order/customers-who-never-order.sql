# Write your MySQL query statement below
 Select name as Customers from Customers Where id not in (Select CustomerId from Orders );