SELECT c1.name AS Customers
FROM Customers c1
LEFT JOIN Orders c2
ON c1.id = c2.customerId
WHERE c2.customerId IS NULL;