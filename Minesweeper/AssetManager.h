#pragma once

#include <map>
#include <SFML\Graphics.hpp>

class AssetManager {
public:
	AssetManager();
	~AssetManager() {}

	void LoadTexture(std::string, std::string);
	void UnloadTexture(std::string);
	sf::Texture &GetTexture(std::string);

	void LoadFont(std::string, std::string);
	void UnloadFont(std::string);
	sf::Font &GetFont(std::string);

	void SetGlobal(std::string, void*);
	void* GetGlobal(std::string);

private:
	sf::Texture _failedTexture;

	std::map<std::string, sf::Texture> _textures;
	std::map<std::string, sf::Font> _fonts;
	std::map<std::string, void*> _globals;

};