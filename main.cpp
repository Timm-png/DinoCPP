#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(1000, 600), "Dino", sf::Style::Close);

    sf::Texture backgroundTexture;                              // Creating object "background texture"
    backgroundTexture.loadFromFile("Files/Img/BackGround.png");  // Loading background texture
    sf::Sprite backgroundSprite;                                // Creating background sprite
    backgroundSprite.setTexture(backgroundTexture);             // Seting background texture
    backgroundSprite.setPosition(0, 0);                         // Seting background position

    sf::Texture dinoTexture;                           // Creating dino texture
    dinoTexture.loadFromFile("Files/Img/Dino_1.png");  // Loading dino texture
    sf::Sprite dinoSprite;                             // Creating dino sprite
    dinoSprite.setTexture(dinoTexture);                // Seting dino texture
    dinoSprite.setPosition(25, 50);                    // Seting dino position

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(backgroundSprite);
        window.draw(dinoSprite);
        window.display();
    }
    return 0;
}