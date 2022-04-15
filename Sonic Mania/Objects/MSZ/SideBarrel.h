#ifndef OBJ_SIDEBARREL_H
#define OBJ_SIDEBARREL_H

#include "SonicMania.h"

// Object Class
struct ObjectSideBarrel {
    RSDK_OBJECT
    uint16 aniFrames;
    uint16 sfxDrop;
};

// Entity Class
struct EntitySideBarrel {
    RSDK_ENTITY
    int32 unused1;
    int32 unused2;
    int32 activePlayers;
    int32 playerPos[PLAYER_MAX];
    int32 playerTimer[PLAYER_MAX];
    bool32 timeAttackFreeze;
    Hitbox hitboxBarrel;
    Animator barrelAnimator;
};

// Object Struct
extern ObjectSideBarrel *SideBarrel;

// Standard Entity Events
void SideBarrel_Update(void);
void SideBarrel_LateUpdate(void);
void SideBarrel_StaticUpdate(void);
void SideBarrel_Draw(void);
void SideBarrel_Create(void* data);
void SideBarrel_StageLoad(void);
#if RETRO_INCLUDE_EDITOR
void SideBarrel_EditorDraw(void);
void SideBarrel_EditorLoad(void);
#endif
void SideBarrel_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_SIDEBARREL_H
