#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{
    // Cr�ation de la fen�tre
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hello World!");

    // Cr�ation du texte
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
        std::cout << "Erreur chargement de la police d'�criture" << std::endl;
    }
    text.setFont(font);
    // Boucle principale
    while (window.isOpen())
    {
        // Gestion des �v�nements
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Effacement de la fen�tre
        window.clear(sf::Color::Black);

        // Dessin des �l�ments
        window.draw(text);

        // Affichage � l'�cran
        window.display();
    }
    return 0;
}