#ifndef OBJ_HATTERKILLER_H
#define OBJ_HATTERKILLER_H

#include "SonicMania.h"

#define Hatterkiller_SegmentCount (10)

// Object Class
struct ObjectHatterkiller {
    RSDK_OBJECT
    Hitbox hitboxSegment;
    uint16 sfxRocketJet;
    uint16 sfxTransform2;
    uint16 sfxPowerup;
    uint16 aniFrames;
};

// Entity Class
struct EntityHatterkiller {
    RSDK_ENTITY
    int32 timer;
    Vector2 bodyPositions[Hatterkiller_SegmentCount];
    Vector2 bodyVelocities[Hatterkiller_SegmentCount];
    int32 bodyDelays[Hatterkiller_SegmentCount];
    Animator *bodyAnimators[Hatterkiller_SegmentCount];
    Animator headAnimator;
    Animator bodyAnimator;
    Animator tailAnimator;
};

// Object Struct
extern ObjectHatterkiller *Hatterkiller;

// Standard Entity Events
void Hatterkiller_Update(void);
void Hatterkiller_LateUpdate(void);
void Hatterkiller_StaticUpdate(void);
void Hatterkiller_Draw(void);
void Hatterkiller_Create(void* data);
void Hatterkiller_StageLoad(void);
#if RETRO_INCLUDE_EDITOR
void Hatterkiller_EditorDraw(void);
void Hatterkiller_EditorLoad(void);
#endif
void Hatterkiller_Serialize(void);

// Extra Entity Functions
void Hatterkiller_DebugDraw(void);
void Hatterkiller_DebugSpawn(void);

#endif //!OBJ_HATTERKILLER_H
