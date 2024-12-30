Select 
    machine_id, 
    Round(AVG(end_time - start_time) , 3) AS processing_time
From (
    select machine_id, 
    process_id, 
    MAX(case when activity_type = 'end' then timestamp end) as end_time,
    MAX(case when activity_type = 'start' then timestamp end) as start_time

    From Activity
    group by machine_id, process_id
) processing_time
Group by machine_id ;