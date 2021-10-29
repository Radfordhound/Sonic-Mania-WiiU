#ifndef OBJ_POINTDEXTER_H
#define OBJ_POINTDEXTER_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    Hitbox hitbox;
    uint16 aniFrames;
} ObjectPointdexter;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    uint8 timer;
    Vector2 startPos;
    uint8 startDir;
    Animator animator;
} EntityPointdexter;

// Object Struct
extern ObjectPointdexter *Pointdexter;

// Standard Entity Events
void Pointdexter_Update(void);
void Pointdexter_LateUpdate(void);
void Pointdexter_StaticUpdate(void);
void Pointdexter_Draw(void);
void Pointdexter_Create(void* data);
void Pointdexter_StageLoad(void);
#if RETRO_INCLUDE_EDITOR
void Pointdexter_EditorDraw(void);
void Pointdexter_EditorLoad(void);
#endif
void Pointdexter_Serialize(void);

// Extra Entity Functions
void Pointdexter_DebugSpawn(void);
void Pointdexter_DebugDraw(void);

void Pointdexter_CheckOnScreen(void);
void Pointdexter_CheckPlayerCollisions(void);

void Pointdexter_State_Setup(void);
void Pointdexter_State_Swimming(void);

#endif //!OBJ_POINTDEXTER_H
