SELECT teacher_id, count(DISTINCT subject_id) as cnt 
FROM Teacher 
Group by teacher_id ;