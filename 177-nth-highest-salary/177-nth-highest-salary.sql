CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  SET N = N-1;
  RETURN (
     select distinct salary
     from Employee
     Order By salary desc
     Limit N,1
  );
END