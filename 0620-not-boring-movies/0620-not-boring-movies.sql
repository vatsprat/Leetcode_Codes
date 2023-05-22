select * from cinema where mod(id,2) <> 0 and description <> 'boring'
order by rating desc;
