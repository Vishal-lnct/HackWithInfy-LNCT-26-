CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
    select  distinct Salary from
     ( select Salary,
      DENSE_RANK () over(order by salary Desc) as rnk
      from Employee


  )t
  where rnk=N);
END