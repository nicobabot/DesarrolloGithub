#ifndef __j1PLAYER_H__
#define __j1PLAYER_H__
#include"j1PerfTimer.h"
#include "j1Module.h"
#define UPDATERATE 100
struct SDL_Texture;

class j1Player : public j1Module
{
public:

	j1Player();

	// Destructor
	virtual ~j1Player();

	// Called before render is available
	bool Awake(pugi::xml_node& config);

	// Called before the first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called each loop iteration
	bool Update(float dt);
	bool UpdateTick();

	// Called before all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();
	

private:
	double lastupdate;
	double current_time;
	bool UpdateTimer(double time);
};

#endif // __j1PLAYER_H__
