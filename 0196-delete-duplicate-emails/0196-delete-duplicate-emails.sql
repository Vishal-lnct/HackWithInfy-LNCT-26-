DELETE p1 
from Person p1
JOIN person p2
on p1.email=p2.email
AND p1.id>p2.id