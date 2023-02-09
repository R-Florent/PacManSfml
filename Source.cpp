#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{
    // Création de la fenêtre
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hello World!");

    // Création du texte
    sf::Text text;
    text.setString("Hello World!");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Cyan);
    text.setStyle(sf::Text::Bold);

    // Chargement de la police
    sf::Font font;
    if (!font.loadFromFile("path/to/your/font.ttf"))
    {
        //handle error
        std::cout << "Erreur chargement de la police d'écriture" << std::endl;
    }
    text.setFont(font);
    // Boucle principale
    while (window.isOpen())
    {
        // Gestion des événements
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Effacement de la fenêtre
        window.clear(sf::Color::Black);

        // Dessin des éléments
        window.draw(text);

        // Affichage à l'écran
        window.display();
    }
    return 0;
}