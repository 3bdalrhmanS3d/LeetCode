select 
    r.contest_id,
    Round( (count(r.user_id) * 100.0) /
            (select count(*) from Users), 2 ) 
            AS percentage 
From 
    Register r 
Group by 
    r.contest_id 
ORDER BY 
    percentage DESC,
    r.contest_id ASC;