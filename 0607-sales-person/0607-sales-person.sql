SELECT name
FROM SalesPerson
WHERE sales_id NOT IN (
    SELECT b1.sales_id
    FROM Company a1
    JOIN Orders b1
        ON a1.com_id = b1.com_id
    WHERE a1.name = 'RED'
);