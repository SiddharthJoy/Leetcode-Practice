Delete a
From Person as a,
    Person as b
where
    (
        a.id > b.id
        and 
        a.email = b.email
    )