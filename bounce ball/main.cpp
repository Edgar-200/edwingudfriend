#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Bounce Ball");

    sf::CircleShape ball(50.f);
    ball.setFillColor(sf::Color::Red);
    ball.setOrigin(50.f, 50.f);
    ball.setPosition(400.f, 300.f);

    sf::Time elapsed;
    sf::Clock clock;  

    sf::Vector2f velocity(50.f, 50.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        elapsed = clock.restart();

        ball.move(velocity * elapsed.asSeconds());

        if (ball.getPosition().x < 0 || ball.getPosition().x + ball.getRadius() > window.getSize().x)
        {
            velocity.x = -velocity.x;
        }

        if (ball.getPosition().y < 0 || ball.getPosition().y + ball.getRadius() > window.getSize().y)
        {
            velocity.y = -velocity.y;
        }

        window.clear();
        window.draw(ball);
        window.display();
    }

    return 0;
}