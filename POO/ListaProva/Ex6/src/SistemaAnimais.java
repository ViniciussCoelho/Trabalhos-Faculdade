import java.util.ArrayList;
import java.util.Objects;

public class SistemaAnimais {
    ArrayList<Animal> animais = new ArrayList<>();

    public void addAnimal(Animal animal) {
        animais.add(animal);
    }

    public void removeAnimal(Animal animal) {
        animais.remove(animal);
    }

    public Animal procuraAnimal(String nome) {
        for(Animal a : animais) {
            if(Objects.equals(a.getNome(), nome)){
                return a;
            }
        }
        return null;
    }
}
