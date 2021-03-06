//hint "despawner";
fn_itemDespawner = {
	private["_loot", "_lootPos", "_noPlayersNearby"];
	_noPlayersNearby = true;
	_loot = _this select 0;
	_lootPos = _this select 1;
	private ["_noPlayersNearby"];



	//systemChat "item spawned";
	sleep LOOT_SPAWN_RESET;
	//systemChat "item spawned can now be removed";

	while {true} do {
	
		{

		if ((_x distance _lootPos) > LOOT_DESPAWN_DISTANCE) then {
				diag_log format["Player %1 is %2 m away from %3", name _x, str (_x distance _lootPos), str _loot];
				_noPlayersNearby = true;
			} else { _noPlayersNearby = false;}

		} forEach readyUnits;

		if (_noPlayersNearby) exitWith {
			diag_log format["[%1 Items] current items", str (count currentItemPos_array)];
			diag_log format["Removing %1 from %2", str _lootPos, str currentItemPos_array];
			currentItemPos_array = currentItemPos_array - [_lootPos];
			deletevehicle _loot;
		};
	};
	sleep 5;
};

fn_dummyItemDespawner = {
	private["_lootPos", "_noPlayersNearby"];
	private ["_noPlayersNearby"];
	_noPlayersNearby = true;
	_lootPos = _this select 0;
	systemChat "Dummy item spawned";
	sleep LOOT_SPAWN_RESET; 
	systemChat "Dummy item can now be removed.";
	while {true} do {
		{
			
			if ((_x distance _lootPos) > LOOT_DESPAWN_DISTANCE) then {
				diag_log format["Player %1 is %2 m away from %3", name _x, str (_x distance _lootPos), str "dummyItem"];
				_noPlayersNearby = true;
			} else { _noPlayersNearby = false; diag_log "players nearby";}

		} forEach readyUnits; 

		if (_noPlayersNearby) exitWith {
			diag_log format["[%1 Items] current items", str (count currentItemPos_array)];
			diag_log format["Removing %1 from %2", str _lootPos, str currentItemPos_array];
			currentItemPos_array = currentItemPos_array - [_loot];
		};
	};
	sleep 5;
};