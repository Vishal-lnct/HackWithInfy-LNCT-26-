SELECT firstname,lastname,city,state 
FROM Person p
LEFT JOIN Address a
on p.personId=a.personId
;