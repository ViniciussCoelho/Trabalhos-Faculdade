select nome, ano_lan from Filme;
π nome, ano_lan (Filme)

select Nacionalidade.nacionalidade from Ator INNER JOIN Nacionalidade ON  Ator.nacionalidade = Nacionalidade.id;
π nacionalidade.nacionalidade (ator ⋈ nacionalidade)


select id, nome from Ator where qtd_premios > 0 AND (idade >= 40 AND idade <= 50);
π id, nome (σ qtd_premios > 0 AND (idade >= 40 AND idade <= 50)) (ator)

select nome, duracao from Filme;
π nome, duracao (filme)

select nome, idade, Nacionalidade.nacionalidade from Ator INNER JOIN Nacionalidade ON  Ator.nacionalidade = Nacionalidade.id;
π nome, idade, nacionalidade.nacionalidade (ator ⋈ nacionalidade)

select avg(idade) from Ator INNER JOIN Nacionalidade ON Ator.nacionalidade = Nacionalidade.id where Nacionalidade.nacionalidade = "Brasil";
π AVG (idade) (σ nacionalidade.nacionalidade = "Brasil") (ator ⋈ nacionalidade)

select min(idade) from Ator INNER JOIN Nacionalidade ON Ator.nacionalidade = Nacionalidade.id where Nacionalidade.nacionalidade = "Eua";
π MIN (idade) (σ nacionalidade.nacionalidade = "Eua") (ator ⋈ nacionalidade)

select nome from Ator where qtd_premios > 0;
π nome (σ qtd_premios > 0) (ator)

select Pais.nome from Pais INNER JOIN Filme_Pais ON Pais.id = Filme_Pais.id_pais INNER JOIN Filme ON Filme.id = Filme_Pais.id_filme INNER JOIN Filme_Ator ON Filme.id = Filme_Ator.id_filme INNER JOIN Filme_Genero ON Filme.id = Filme_Genero.id_filme INNER JOIN Genero ON Genero.id = Filme_Genero.id_genero INNER JOIN Ator ON Ator.id = Filme_Ator.id_ator INNER JOIN Nacionalidade ON Nacionalidade.id = Ator.nacionalidade where Nacionalidade.nacionalidade = "Canadá" AND Genero.nome = "Ação";
π pais.nome (σ nacionalidade.nacionalidade = "Canadá" AND genero.nome = "Ação") (pais ⋈ filme_pais ⋈ filme ⋈ filme_ator ⋈ filme_genero ⋈ genero ⋈ ator ⋈ nacionalidade)

select nome from Diretor INNER JOIN Roteirista ON Diretor.nome = Roteirista.nome;
π nome (diretor ⋈ roteirista)
