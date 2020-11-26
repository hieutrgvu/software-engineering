CREATE TABLE species (
	id bigserial,
	species_id varchar(25),
	species_name varchar(25),
	description varchar(100)
);

CREATE TABLE animals (
	id bigserial,
	animal_id varchar(25),
	specific_id varchar(25),
	friendly_name varchar(25),
	weight numeric,
	place varchar(25)
);
