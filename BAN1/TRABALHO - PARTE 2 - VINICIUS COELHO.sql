create database locadora;
use locadora;

create table if not exists Genero(
  id int not null auto_increment,
  nome varchar(20) not null,
  primary key(id)
);

create table if not exists Studio(
  id int not null auto_increment,
  nome varchar(50) not null,
  primary key(id)
);

create table if not exists Legenda(
  id int not null auto_increment,
  legenda varchar(20) not null,
  primary key(id)
);

create table if not exists Pais(
  id int not null auto_increment,
  nome varchar(20) not null,
  primary key(id)
);

create table if not exists Nacionalidade(
  id int not null auto_increment,
  nacionalidade varchar(20) not null,
  primary key(id)
);

create table if not exists Roteirista(
  id int not null auto_increment,
  nome varchar(50) not null,
  primary key(id)
);

create table if not exists Diretor(
  id int not null auto_increment,
  nome varchar(50) not null,
  primary key(id)
);

create table if not exists Lingua(
  id int not null auto_increment,
  nome varchar(20) not null,
  primary key(id)
);

create table if not exists Ator(
  id int not null auto_increment,
  nome varchar(50) not null,
  qtd_premios int not null,
  atuacao_principal varchar(50) not null,
  idade int not null,
  nacionalidade int not null,
  lingua int not null,
  primary key(id),
  foreign key(nacionalidade) references Nacionalidade(id),
  foreign key(lingua) references Lingua(id)
);

create table if not exists Filme(
  id int not null auto_increment,
  nome varchar(50) not null,
  duracao int not null,
  sinopse varchar(100) not null,
  studio int not null,
  diretor int not null,
  ano_lan int not null,
  primary key(id),
  foreign key(studio) references Studio(id),
  foreign key(diretor) references Diretor(id)
);


create table if not exists Filme_Genero(
  id_filme int not null,
  id_genero int not null,
  primary key(id_filme,id_genero),
  foreign key (id_filme) references Filme(id),
  foreign key (id_genero) references Genero(id)
);

create table if not exists Filme_Studio(
  id_filme int not null,
  id_studio int not null,
  primary key(id_filme,id_studio),
  foreign key (id_filme) references Filme(id),
  foreign key (id_studio) references Studio(id)
);

create table if not exists Filme_Legenda(
  id_filme int not null,
  id_legenda int not null,
  primary key(id_filme,id_legenda),
  foreign key (id_filme) references Filme(id),
  foreign key (id_legenda) references Legenda(id)
);

create table if not exists Filme_Pais(
  id_filme int not null,
  id_pais int not null,
  primary key(id_filme,id_pais),
  foreign key (id_filme) references Filme(id),
  foreign key (id_pais) references Pais(id)
);

create table if not exists Filme_Ator(
  id_filme int not null,
  id_ator int not null,
  primary key(id_filme,id_ator),
  foreign key (id_filme) references Filme(id),
  foreign key (id_ator) references Ator(id)
);

create table if not exists Filme_Roteirista(
  id_filme int not null,
  id_roteirista int not null,
  primary key(id_filme,id_roteirista),
  foreign key (id_filme) references Filme(id),
  foreign key (id_roteirista) references Roteirista(id)
);

insert into Genero(nome) values('Ação');
insert into Genero(nome) values('Aventura');
insert into Genero(nome) values('Comédia');
insert into Genero(nome) values('Drama');

insert into Studio(nome) values('Warner Bros');
insert into Studio(nome) values('Universal');
insert into Studio(nome) values('Paramount');
insert into Studio(nome) values('Sony');

insert into Legenda(legenda) values('Brasil');
insert into Legenda(legenda) values('Eua');
insert into Legenda(legenda) values('Japão');
insert into Legenda(legenda) values('França');

insert into Pais(nome) values('Brasil');
insert into Pais(nome) values('Eua');
insert into Pais(nome) values('Japão');
insert into Pais(nome) values('França');

insert into Nacionalidade(nacionalidade) values('Brasil');
insert into Nacionalidade(nacionalidade) values('Eua');
insert into Nacionalidade(nacionalidade) values('Japão');
insert into Nacionalidade(nacionalidade) values('França');

insert into Lingua(nome) values('Inglês');
insert into Lingua(nome) values('Espanhol');
insert into Lingua(nome) values('Português');
insert into Lingua(nome) values('Francês');

insert into Roteirista(nome) values('George Lucas');
insert into Roteirista(nome) values('George R. R. Martin');
insert into Roteirista(nome) values('J.J. Abrams');
insert into Roteirista(nome) values('J.J. Sei lá');

insert into Diretor(nome) values('George Lucas');
insert into Diretor(nome) values('George R. R. Martin');
insert into Diretor(nome) values('Dario Argento');
insert into Diretor(nome) values('John Carpenter');

insert into Ator(nome,qtd_premios,atuacao_principal,idade,nacionalidade,lingua) values('Mark Hamill',5,'Star Wars',54,1,1);
insert into Ator(nome,qtd_premios,atuacao_principal,idade,nacionalidade,lingua) values('Harrison Ford',5,'Star Wars',60,2,1);
insert into Ator(nome,qtd_premios,atuacao_principal,idade,nacionalidade,lingua) values('Carrie Fisher',5,'Star Wars',42,3,1);
insert into Ator(nome,qtd_premios,atuacao_principal,idade,nacionalidade,lingua) values('Alec Guiness',5,'Star Wars',42,4,1);

insert into Filme(nome,duracao,sinopse,studio,diretor,ano_lan) values('Avengers',120,'Uma história de aventura e de heroínas',1,1,2012);
insert into Filme(nome,duracao,sinopse,studio,diretor,ano_lan) values('Avengers: Endgame',180,'Uma história de aventura e de heroínas',1,1,2019);
insert into Filme(nome,duracao,sinopse,studio,diretor,ano_lan) values('Avengers: Infinity War',180,'Uma história de aventura e de heroínas',1,1,2018);
insert into Filme(nome,duracao,sinopse,studio,diretor,ano_lan) values('Avengers: Age of Ultron',180,'Uma história de aventura e de heroínas',1,1,2015);

insert into Filme_Genero(id_filme,id_genero) values(1,1);
insert into Filme_Genero(id_filme,id_genero) values(2,1);
insert into Filme_Genero(id_filme,id_genero) values(3,1);
insert into Filme_Genero(id_filme,id_genero) values(4,1);

insert into Filme_Studio(id_filme,id_studio) values(1,1);
insert into Filme_Studio(id_filme,id_studio) values(2,2);
insert into Filme_Studio(id_filme,id_studio) values(3,3);
insert into Filme_Studio(id_filme,id_studio) values(4,4);

insert into Filme_Legenda(id_filme,id_legenda) values(1,1);
insert into Filme_Legenda(id_filme,id_legenda) values(2,2);
insert into Filme_Legenda(id_filme,id_legenda) values(3,3);
insert into Filme_Legenda(id_filme,id_legenda) values(4,4);

insert into Filme_Pais(id_filme,id_pais) values(1,1);
insert into Filme_Pais(id_filme,id_pais) values(2,2);
insert into Filme_Pais(id_filme,id_pais) values(3,3);
insert into Filme_Pais(id_filme,id_pais) values(4,4);

insert into Filme_Ator(id_filme,id_ator) values(1,1);
insert into Filme_Ator(id_filme,id_ator) values(2,2);
insert into Filme_Ator(id_filme,id_ator) values(3,3);
insert into Filme_Ator(id_filme,id_ator) values(4,4);

insert into Filme_Roteirista(id_filme,id_roteirista) values(1,1);
insert into Filme_Roteirista(id_filme,id_roteirista) values(2,2);
insert into Filme_Roteirista(id_filme,id_roteirista) values(3,3);
insert into Filme_Roteirista(id_filme,id_roteirista) values(4,4);