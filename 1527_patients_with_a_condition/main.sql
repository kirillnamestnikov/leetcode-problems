-- Write your PostgreSQL query statement below
select patient_id, patient_name, conditions from Patients where conditions ~ ' DIAB1' or conditions ~ '^DIAB1' order by patient_id asc;
