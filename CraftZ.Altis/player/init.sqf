if (!isServer && (player != player)) then { waitUntil {player == player}; waitUntil {time > 10}; }; //Check to make sure player is valid

"PV_playerLoaded" addPublicVariableEventHandler {

	player groupChat format["Profile loaded for %1", name player];
	
	
};

PV_playerLoaded = false;
player setDamage 0;



cutText ["LOADING CHARACTER", "BLACK FADED"];
sleep 10;

10 fadeSound 0.3;
10 fadeMusic 0.5;

PV_clientID = player;
publicVariableServer "PV_clientID";

{waitUntil sleep 1; PV_playerLoaded == true};
titleCut ["CHARACTER LOADED", "BLACK IN", 5];






