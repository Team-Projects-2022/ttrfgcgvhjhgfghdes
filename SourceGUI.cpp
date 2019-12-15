#include <SFML\Graphics.hpp>
#include<iostream>
using namespace std;
using namespace sf;

int main()
{
	
	sf::RenderWindow window(sf::VideoMode(1080,690 ), "Trivago");
	
	//sf::RenderWindow window(sf::VideoMode(800,600), "Trivago");
	Vector2f v(300,50);
	Vector2f v2(100, 50);

	sf::RectangleShape shape(v);
	sf::RectangleShape shape2(v);
	sf::RectangleShape button(v2);

	sf::Image logo;
	shape.setFillColor(sf::Color::Black);
	logo.loadFromFile("trivago-logo.png");
	Texture logos;
	logos.loadFromImage(logo);
	Sprite sprite;
	sprite.setTexture(logos);
	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		while (true){
		window.clear(sf::Color(255, 255, 255));
		/*for (int i = 0; i < 512; i++)
		{
			for (int j = 0; j < 512; j++)
				logo.setPixel(i, j, sf::Color::Black);
		}*/
		//Vector2f v;
		//logo.setPixel(0, 0, sf::Color::Black);
		//sprite.scale(200,200);
		sprite.setScale(0.7,0.7);
		sprite.setPosition(350,100);
		window.draw(sprite);
		Text text;
		text.setString("Login");
		text.setCharacterSize(30);
		Font font;
		font.loadFromFile("consola.ttf");
		text.setFont(font);
		//text.setStyle(Text::Bold);
		text.setFillColor(Color::Black);
		text.setPosition(480, 210);
       shape.setPosition(380, 270);
	   shape.setFillColor(Color::White);
	   shape.setOutlineThickness(2);
	   shape.setOutlineColor(Color::Black);

	   shape2.setPosition(380, 350);
	   shape2.setFillColor(Color::White);
	   shape2.setOutlineThickness(2);
	   shape2.setOutlineColor(Color::Black);
	  /* if (event.type == Event::TextEntered){
		   shape.setTexture
	   }*/

	   button.setPosition(480, 410);
	   button.setFillColor(Color::Color(112, 187, 203));
	  // button.setOutlineThickness(2);
	  // button.setOutlineColor(Color::Black);
	   window.draw(text);

		window.draw(shape);
		window.draw(shape2);
		window.draw(button);

		window.display();
		Vector2i mpos = Mouse::getPosition(window);
		//480, 410
	//	while (true){
		while (mpos == Mouse::getPosition(window)){
		if (mpos.x >= 480 && mpos.x <= 480 + (100) && mpos.y >= 410 && mpos.y <= 410 + (50)){
			//while (){
				//window.clear(sf::Color(0, 0, 0));
			button.setFillColor(Color::Color(100, 187, 100));
				window.draw(button);

				window.display();

			//}
		}
		if (Mouse::isButtonPressed(Mouse::Left)){
			break;
		}
		}
	//	else break;
		//}
		button.setFillColor(Color::Color(112, 187, 203));

		window.draw(button);

		//window.display();

		while (Mouse::isButtonPressed(Mouse::Left)){
			Vector2i mpos=Mouse::getPosition(window);
			//480, 410
			if (mpos.x >= 480  && mpos.x <= 480 + (100)){
				if (mpos.y >= 410  && mpos.y <= 410 + (50)){
					//window.clear(sf::Color(0, 0, 0));
					button.setFillColor(Color::Color(0, 0, 0));
					window.draw(button);

					window.display();

				}
			}
		}
		window.clear(sf::Color(0, 0, 0));
		window.display();
		}

		while (true){
			window.clear(sf::Color(0, 0, 0));
			window.display();
		}
	}

	return 0;
}
