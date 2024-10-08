/// \file
/// \brief All the packet identifiers used by RakNet.  Packet identifiers comprise the first byte of any message.
///
/// This file is part of RakNet Copyright 2003 Kevin Jenkins.
///
/// Usage of RakNet is subject to the appropriate license agreement.
/// Creative Commons Licensees are subject to the
/// license found at
/// http://creativecommons.org/licenses/by-nc/2.5/
/// Single application licensees are subject to the license found at
/// http://www.rakkarsoft.com/SingleApplicationLicense.html
/// Custom license users are subject to the terms therein.
/// GPL license users are subject to the GNU General Public
/// License as published by the Free
/// Software Foundation; either version 2 of the License, or (at your
/// option) any later version.

#ifndef __PACKET_ENUMERATIONS_H
#define __PACKET_ENUMERATIONS_H

/// You should not edit the file PacketEnumerations.h as it is a part of RakNet static library
/// To define your own message id, define an enum following the code example that follows. 
///
/// \code
/// enum {
///   ID_MYPROJECT_MSG_1 = ID_USER_PACKET_ENUM
///   ID_MYPROJECT_MSG_2, 
///    ... 
/// };
/// \endcode 
///
/// \note All these enumerations should be casted to (unsigned char) before writing them to RakNet::BitStream

enum PacketEnumeration
{
	ID_INTERNAL_PING = 6,
	ID_PING,
	ID_PING_OPEN_CONNECTIONS,
	ID_CONNECTED_PONG,
	ID_REQUEST_STATIC_DATA,
	ID_CONNECTION_REQUEST,
	ID_AUTH_KEY,
	ID_BROADCAST_PINGS = 14,
	ID_SECURED_CONNECTION_RESPONSE,
	ID_SECURED_CONNECTION_CONFIRMATION,
	ID_RPC_MAPPING,
	ID_SET_RANDOM_NUMBER_SEED = 19,
	ID_RPC,
	ID_RPC_REPLY,
	ID_DETECT_LOST_CONNECTIONS = 23,
	ID_OPEN_CONNECTION_REQUEST,
	ID_OPEN_CONNECTION_REPLY,
	ID_OPEN_CONNECTION_COOKIE,
	ID_RSA_PUBLIC_KEY_MISMATCH = 28,
	ID_CONNECTION_ATTEMPT_FAILED,
	ID_NEW_INCOMING_CONNECTION = 30,
	ID_NO_FREE_INCOMING_CONNECTIONS = 31,
	ID_DISCONNECTION_NOTIFICATION,	
	ID_CONNECTION_LOST,
	ID_CONNECTION_REQUEST_ACCEPTED,
	ID_CONNECTION_BANNED = 36,
	ID_INVALID_PASSWORD,
	ID_MODIFIED_PACKET,
	ID_PONG,
	ID_TIMESTAMP,
	ID_RECEIVED_STATIC_DATA,
	ID_REMOTE_DISCONNECTION_NOTIFICATION,
	ID_REMOTE_CONNECTION_LOST,
	ID_REMOTE_NEW_INCOMING_CONNECTION,
	ID_REMOTE_EXISTING_CONNECTION,
	ID_REMOTE_STATIC_DATA,
	ID_ADVERTISE_SYSTEM = 55,

	ID_PLAYER_SYNC = 207,
	ID_MARKERS_SYNC = 208,
	ID_UNOCCUPIED_SYNC = 209,
	ID_TRAILER_SYNC = 210,
	ID_PASSENGER_SYNC = 211,
	ID_SPECTATOR_SYNC = 212,
	ID_AIM_SYNC = 203,
	ID_VEHICLE_SYNC = 200,
	ID_RCON_COMMAND = 201,
	ID_RCON_RESPONCE = 202,
	ID_WEAPONS_UPDATE = 204,
	ID_STATS_UPDATE = 205,
	ID_BULLET_SYNC = 206,
};

enum {
	RPC_CLICKPLAYER = 23,
	RPC_CLIENTJOIN = 25,
	RPC_ENTERVEHICLE = 26,
	RPC_SELECTOBJECT = 27,
	RPC_SCRIPTCASH = 31,
	RPC_SERVERCOMMAND = 50,
	RPC_SPAWN = 52,
	RPC_DEATH = 53,
	RPC_NPCJOIN = 54,
	RPC_DIALOGRESPONSE = 62,
	RPC_CLICKTEXTDRAW = 83,
	RPC_SCMEVENT = 96,
	RPC_WEAPONPICKUPDESTROY = 97,
	RPC_CHAT = 101,
	RPC_SRVNETSTATS = 102,
	RPC_CLIENTCHECK = 103,
	RPC_DAMAGEVEHICLE = 106,
	RPC_GIVETAKEDAMAGE = 115,
	RPC_EDITATTACHEDOBJECT = 116,
	RPC_EDITOBJECT = 117,
	RPC_SETINTERIORID = 118,
	RPC_MAPMARKER = 119,
	RPC_REQUESTCLASS = 128,
	RPC_REQUESTSPAWN = 129,
	RPC_CONNECTIONREJECTED = 130,
	RPC_PICKEDUPPICKUP = 131,
	RPC_MENUSELECT = 132,
	RPC_VEHICLEDESTROYED = 136,
	RPC_MENUQUIT = 140,
	RPC_EXITVEHICLE = 154,
	RPC_UPDATESCORESPINGSIPS = 155,
	RPC_CAMTARGETUPDATE = 168,
	RPC_GIVEACTORDAMAGE = 177,

	RPC_SCRSETPLAYERNAME = 11,
	RPC_SCRSETPLAYERPOS = 12,
	RPC_SCRSETPLAYERPOSFINDZ = 13,
	RPC_SCRSETPLAYERHEALTH = 14,
	RPC_SCRTOGGLEPLAYERCONTROLLABLE = 15,
	RPC_SCRPLAYSOUND = 16,
	RPC_SCRSETPLAYERWORLDBOUNDS = 17,
	RPC_SCRGIVEPLAYERMONEY = 18,
	RPC_SCRSETPLAYERFACINGANGLE = 19,
	RPC_SCRRESETPLAYERMONEY = 20,
	RPC_SCRRESETPLAYERWEAPONS = 21,
	RPC_SCRGIVEPLAYERWEAPON = 22,
	RPC_SCRSETVEHICLEPARAMSEX = 24,
	RPC_SCRCANCELEDIT = 28,
	RPC_SCRSETPLAYERTIME = 29,
	RPC_SCRTOGGLECLOCK = 30,
	RPC_SCRWORLDPLAYERADD = 32,
	RPC_SCRSETPLAYERSHOPNAME = 33,
	RPC_SCRSETPLAYERSKILLLEVEL = 34,
	RPC_SCRSETPLAYERDRUNKLEVEL = 35,
	RPC_SCRCREATE3DTEXTLABEL = 36,
	RPC_SCRDISABLECHECKPOINT = 37,
	RPC_SCRSETRACECHECKPOINT = 38,
	RPC_SCRDISABLERACECHECKPOINT = 39,
	RPC_SCRGAMEMODERESTART = 40,
	RPC_SCRPLAYAUDIOSTREAM = 41,
	RPC_SCRSTOPAUDIOSTREAM = 42,
	RPC_SCRREMOVEBUILDINGFORPLAYER = 43,
	RPC_SCRCREATEOBJECT = 44,
	RPC_SCRSETOBJECTPOS = 45,
	RPC_SCRSETOBJECTROT = 46,
	RPC_SCRDESTROYOBJECT = 47,
	RPC_SCRDEATHMESSAGE = 55,
	RPC_SCRSETPLAYERMAPICON = 56,
	RPC_SCRREMOVEVEHICLECOMPONENT = 57,
	RPC_SCRDESTROY3DTEXTLABEL = 58,
	RPC_SCRCHATBUBBLE = 59,
	RPC_SCRSOMEUPDATE = 60,
	RPC_SCRSHOWDIALOG = 61,
	RPC_SCRDESTROYPICKUP = 63,
	RPC_SCRLINKVEHICLETOINTERIOR = 65,
	RPC_SCRSETPLAYERARMOUR = 66,
	RPC_SCRSETPLAYERARMEDWEAPON = 67,
	RPC_SCRSETSPAWNINFO = 68,
	RPC_SCRSETPLAYERTEAM = 69,
	RPC_SCRPUTPLAYERINVEHICLE = 70,
	RPC_SCRREMOVEPLAYERFROMVEHICLE = 71,
	RPC_SCRSETPLAYERCOLOR = 72,
	RPC_SCRDISPLAYGAMETEXT = 73,
	RPC_SCRFORCECLASSSELECTION = 74,
	RPC_SCRATTACHOBJECTTOPLAYER = 75,
	RPC_SCRINITMENU = 76,
	RPC_SCRSHOWMENU = 77,
	RPC_SCRHIDEMENU = 78,
	RPC_SCRCREATEEXPLOSION = 79,
	RPC_SCRSHOWPLAYERNAMETAGFORPLAYER = 80,
	RPC_SCRATTACHCAMERATOOBJECT = 81,
	RPC_SCRINTERPOLATECAMERA = 82,
	RPC_SCRSETOBJECTMATERIAL = 84,
	RPC_SCRGANGZONESTOPFLASH = 85,
	RPC_SCRAPPLYANIMATION = 86,
	RPC_SCRCLEARANIMATIONS = 87,
	RPC_SCRSETPLAYERSPECIALACTION = 88,
	RPC_SCRSETPLAYERFIGHTINGSTYLE = 89,
	RPC_SCRSETPLAYERVELOCITY = 90,
	RPC_SCRSETVEHICLEVELOCITY = 91,
	RPC_SCRSETPLAYERDRUNKVISUALS = 92,
	RPC_SCRCLIENTMESSAGE = 93,
	RPC_SCRSETWORLDTIME = 94,
	RPC_SCRCREATEPICKUP = 95,
	RPC_SCRSETVEHICLETIRES = 98,
	RPC_SCRMOVEOBJECT = 99,
	RPC_SCRENABLESTUNTBONUSFORPLAYER = 104,
	RPC_SCRTEXTDRAWSETSTRING = 105,
	RPC_SCRSETCHECKPOINT = 107,
	RPC_SCRGANGZONECREATE = 108,
	RPC_SCRTOGGLEWIDESCREEN = 111,
	RPC_SCRPLAYCRIMEREPORT = 112,
	RPC_SCRSETPLAYERATTACHEDOBJECT = 113,
	RPC_SCRGANGZONEDESTROY = 120,
	RPC_SCRGANGZONEFLASH = 121,
	RPC_SCRSTOPOBJECT = 122,
	RPC_SCRSETNUMBERPLATE = 123,
	RPC_SCRTOGGLEPLAYERSPECTATING = 124,
	RPC_SCRPLAYERSPECTATEPLAYER = 126,
	RPC_SCRPLAYERSPECTATEVEHICLE = 127,
	RPC_SCRSETPLAYERWANTEDLEVEL = 133,
	RPC_SCRSHOWTEXTDRAW = 134,
	RPC_SCRTEXTDRAWHIDEFORPLAYER = 135,
	RPC_SCRSERVERJOIN = 137,
	RPC_SCRSERVERQUIT = 138,
	RPC_SCRINITGAME = 139,
	RPC_SCRREMOVEPLAYERMAPICON = 144,
	RPC_SCRSETPLAYERAMMO = 145,
	RPC_SCRSETGRAVITY = 146,
	RPC_SCRSETVEHICLEHEALTH = 147,
	RPC_SCRATTACHTRAILERTOVEHICLE = 148,
	RPC_SCRDETACHTRAILERFROMVEHICLE = 149,
	RPC_SCRSETPLAYERDRUNKHANDLING = 150,
	RPC_SCRDESTROYWEAPONPICKUP = 151,
	RPC_SCRSETWEATHER = 152,
	RPC_SCRSETPLAYERSKIN = 153,
	RPC_SCRSETPLAYERINTERIOR = 156,
	RPC_SCRSETPLAYERCAMERAPOS = 157,
	RPC_SCRSETPLAYERCAMERALOOKAT = 158,
	RPC_SCRSETVEHICLEPOS = 159,
	RPC_SCRSETVEHICLEZANGLE = 160,
	RPC_SCRSETVEHICLEPARAMSFORPLAYER = 161,
	RPC_SCRSETCAMERABEHINDPLAYER = 162,
	RPC_SCRWORLDPLAYERREMOVE = 163,
	RPC_SCRWORLDVEHICLEADD = 164,
	RPC_SCRWORLDVEHICLEREMOVE = 165,
	RPC_SCRWORLDPLAYERDEATH = 166,
	RPC_SCRDISABLEVEHICLECOLLISIONS = 167,
	RPC_SCRSETPLAYEROBJECTNOCAMCOL = 169,
	RPC_SCRTOGGLECAMERATARGET = 170,
	RPC_SCRCREATEACTOR = 171,
	RPC_SCRDESTROYACTOR = 172,
	RPC_SCRAPPLYACTORANIMATION = 173,
	RPC_SCRCLEARACTORANIMATION = 174,
	RPC_SCRSETACTORROTATION = 175,
	RPC_SCRSETACTORPOSITION = 176,
	RPC_SCRSETACTORHEALTH = 178
};

#endif

