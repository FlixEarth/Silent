#pragma once
namespace offsets {
  // buttons
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  const long IN_ATTACK = 0x073cd740; // [Buttons] -> in_attack
  // core
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  const long REGION = 0x140000000; // [Static] ->Region
  const long LEVEL = 0x16d6ac0; // [Miscellaneous] -> LevelName
  const long LOCAL_PLAYER = 0x21615d8; // [Miscellaneous] -> LocalPlayer
  const long ENTITY_LIST = 0x1db2ed8; // [Miscellaneous] -> cl_entitylist
  const long OFFSET_RENDER = 0x73cc460; //[Miscellaneous]-> ViewRenderer
  const long OFFSET_MATRIX = 0x11a350; //[Miscellaneous]-> ViewMatrix

  // entity
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  const long LOCAL_ORIGIN = 0x017c; // [DataMap.CBaseViewModel] -> m_localOrigin
  // player
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  const long OFFSET_ORIGIN = 0x0170; //m_vecAbsOrigin
  const long TEAM_NUMBER = 0x030c; // [RecvTable.DT_BaseEntity] -> m_iTeamNum
  const long NAME = 0x0449; // [RecvTable.DT_BaseEntity] -> m_iName
  const long LIFE_STATE = 0x0658; // [RecvTable.DT_Player] -> m_lifeState
  const long VEC_PUNCH_WEAPON_ANGLE = 0x23f8; //[DataMap.C_Player] ->m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
  const long VIEW_ANGLE = (0x24f4 - 0x14); // [DataMap.C_Player] -> m_ammoPoolCapacity - 0x14
  const long OFFSET_CAMERAPOS = 0x1e90; //[Miscellaneous]->CPlayer!camera_origin
  const long OFFSET_BREATH_ANGLES = (VIEW_ANGLE - 0x10);
  const long OFFSET_BONES = (0x0d60 + 0x48); //m_nForceBone + 0x48

  const long OFFSET_WEAPON = 0x18F4; //m_latestPrimaryWeapons
  const long OFFSET_BULLET_SPEED = (0x04e4 + 0x1978); //CWeaponX!m_flProjectileSpeed
  const long OFFSET_BULLET_SCALE = (0x04ec + 0x1978); //CWeaponX!m_flProjectileScale
  const long OFFSET_ZOOM_FOV = (0x1590 + 0x00b8); //m_playerData + m_curZoomFOV
  const long OFFSET_AMMO = 0x1540; //m_ammoInClip

  const long BLEEDOUT_STATE = 0x26a0; // [RecvTable.DT_Player] -> m_bleedoutState
  const long ZOOMING = 0x1b91; // [RecvTable.DT_Player] -> m_bZooming
  const long LAST_VISIBLE_TIME = (0x194d + 0x3); // [Miscellaneous] -> CPlayer!lastVisibleTime 1st offset from dump

  //#######################################################

  const long OFFSET_NAME_INDEX = 0x38;
  const long OFFSET_NAMELIST = 0xc451fb0;
  /*
  std::string Player::GetName(uintptr_t player)
  {
  uintptr_t nameIndex = Driver.rpm<uintptr_t>(player + OFFSET_NAME_INDEX);
  uintptr_t nameOffset = Driver.rpm<uintptr_t>(globals.nameList + ((nameIndex - 1) << 4));
  char buf[64] = { 0 };
  Driver.ReadRaw(globals.pID, nameOffset, (UINT_PTR)&buf, 64);
  return buf;
  }
  */

  const long OFF_GLOW_ENABLE = 0x26c;                       //[DT_HighlightSettings].?
  const long OFF_GLOW_THROUGH_WALL = 0x28c;                 //[DT_HighlightSettings].?
  const long OFF_GLOW_FIX = 0x268;
  const long OFF_GLOW_HIGHLIGHT_ID = 0x28C;                 //[DT_HighlightSettings].m_highlightServerActiveStates
  const long OFF_GLOW_HIGHLIGHTS = 0xB7A6050;

  const long OFFSET_ViewModels = 0x2ce0;

  const long thirdperson_override = 0x01d40ab0;
  const long m_thirdPersonShoulderView = 0x3658;

  const long OFFSET_TIMESCALE = 0x017488c0; //host_timescale

  const long OFFSET_SILENTAIM_TEST_RW_ADDR = 0x14ea21000;

}
