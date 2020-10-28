/*
** 5.9. What SQL syntax do you use to export data?
**
** Resolved by: Hieu Vu
*/

SELECT *
INTO OUTFILE 'teams-export.csv'
FIELDS TERMINATED BY ';'
OPTIONALLY ENCLOSED BY '"'
LINES TERMINATED BY '\n'
FROM yourschema.teams;
