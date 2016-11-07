#include "j1Player.h"
#include "p2Defs.h"
#include "p2Log.h"
#include "j1App.h"
#include "j1Input.h"
#include "j1Textures.h"
#include "j1Audio.h"
#include "j1Render.h"
#include "j1Window.h"
#include "j1Map.h"
#include "j1PathFinding.h"
#include "j1Scene.h"

j1Player::j1Player() : j1Module()
{
	name.create("player");
	lastupdate = 0;
	current_time = 0;
}

j1Player::~j1Player()
{}

bool j1Player::Awake(pugi::xml_node& config)
{
	return true;
}

bool j1Player::Start()
{
	
	return true;
}

bool j1Player::PreUpdate()
{
	return true;
}

bool j1Player::Update(float dt) {
	if (UpdateTick()) {
		LOG("HOLA ME LLAMO CURRO Y CURRO EN UNA FABRICA");
	}
	
	return true;
}

bool j1Player::UpdateTick()
{
	current_time = App->Playertimer.ReadMs();
	if (lastupdate+UPDATERATE<current_time) {
		lastupdate = current_time;
		return true;
	}
	return false;
}

bool j1Player::PostUpdate()
{
	return true;
}

bool j1Player::CleanUp()
{
	return true;
}
