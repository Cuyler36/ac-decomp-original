#ifndef M_ACTOR_H
#define M_ACTOR_H

#include "types.h"
#include "m_actor_type.h"
#include "game.h"
#include "m_lib.h"
#include "m_lights.h"
#include "m_collision_bg.h"
#include "m_collision_obj.h"
#include "m_actor_dlftbls.h"
#include "libforest/gbi_extensions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*mActor_proc)(ACTOR*, GAME*);
#define NONE_ACTOR_PROC ((mActor_proc)&none_proc1)

#define mAc_MAX_ACTORS 200

#define ACTOR_STATE_NONE 0
#define ACTOR_STATE_NO_MOVE_WHILE_CULLED (1 << 4)
#define ACTOR_STATE_NO_DRAW_WHILE_CULLED (1 << 5)
#define ACTOR_STATE_NO_CULL (1 << 6)
#define ACTOR_STATE_INVISIBLE (1 << 7)
#define ACTOR_STATE_TA_SET (1 << 11)
#define ACTOR_STATE_LIGHTING (1 << 22) // does lighting NOT affect this actor?
#define ACTOR_STATE_24 (1 << 24)
#define ACTOR_STATE_25 (1 << 25)
#define ACTOR_STATE_CAN_MOVE_IN_DEMO_SCENES (1 << 29)

#define ACTOR_OBJ_BANK_NONE 0
#define ACTOR_OBJ_BANK_3 3 /* TODO: rename, also likely an enum */
#define ACTOR_OBJ_BANK_5 5
#define ACTOR_OBJ_BANK_6 6
#define ACTOR_OBJ_BANK_7 7
#define ACTOR_OBJ_BANK_10 10
#define ACTOR_OBJ_BANK_11 11
#define ACTOR_OBJ_BANK_12 12
#define ACTOR_OBJ_BANK_16 16
#define ACTOR_OBJ_BANK_41 41
#define ACTOR_OBJ_BANK_44 44
#define ACTOR_OBJ_BANK_53 53


enum actor_part {
  ACTOR_PART_FG,
  ACTOR_PART_ITEM,
  ACTOR_PART_UNUSED,
  ACTOR_PART_PLAYER,
  ACTOR_PART_NPC,
  ACTOR_PART_BG,
  ACTOR_PART_EFFECT,
  ACTOR_PART_CONTROL,

  ACTOR_PART_NUM
};

enum actor_profile_table {
  mAc_PROFILE_PLAYER,
  mAc_PROFILE_BGITEM,
  mAc_PROFILE_SAMPLE,
  mAc_PROFILE_FIELDM_DRAW,
  mAc_PROFILE_FIELD_DRAW,
  mAc_PROFILE_AIRPLANE,
  mAc_PROFILE_ROOM_SUNSHINE,
  mAc_PROFILE_LAMP_LIGHT,
  mAc_PROFILE_EV_ANGLER,
  mAc_PROFILE_BALL,
  mAc_PROFILE_HANIWA,
  mAc_PROFILE_MY_ROOM,
  mAc_PROFILE_MBG,
  mAc_PROFILE_T_TAMA,
  mAc_PROFILE_BOXMANAGER,
  mAc_PROFILE_BOXMOVE,
  mAc_PROFILE_BOXTRICK01,
  mAc_PROFILE_ARRANGE_ROOM,
  mAc_PROFILE_ARRANGE_FURNITURE,
  mAc_PROFILE_TRAINDOOR,
  mAc_PROFILE_T_KEITAI,
  mAc_PROFILE_HALLOWEEN_NPC,
  mAc_PROFILE_EV_PUMPKIN,
  mAc_PROFILE_RIDE_OFF_DEMO,
  mAc_PROFILE_NPC_MAMEDANUKI,
  mAc_PROFILE_HANABI_NPC0,
  mAc_PROFILE_HANABI_NPC1,
  mAc_PROFILE_SNOWMAN,
  mAc_PROFILE_NPC_POST_GIRL,
  mAc_PROFILE_NPC_ENGINEER,
  mAc_PROFILE_NPC_MAJIN3,
  mAc_PROFILE_NPC_SLEEP_OBABA,
  mAc_PROFILE_NPC,
  mAc_PROFILE_EFFECT_CONTROL,
  mAc_PROFILE_NPC2,
  mAc_PROFILE_KAMAKURA_NPC0,
  mAc_PROFILE_NPC_POST_MAN,
  mAc_PROFILE_SHOP_DESIGN,
  mAc_PROFILE_QUEST_MANAGER,
  mAc_PROFILE_MAILBOX,
  mAc_PROFILE_HOUSE,
  mAc_PROFILE_SHOP_LEVEL,
  mAc_PROFILE_SHOP,
  mAc_PROFILE_MYHOUSE,
  mAc_PROFILE_EV_ARTIST,
  mAc_PROFILE_EV_BROKER,
  mAc_PROFILE_EV_DESIGNER,
  mAc_PROFILE_T_UMBRELLA,
  mAc_PROFILE_NPC_SHOP_MASTER,
  mAc_PROFILE_BIRTH_CONTROL,
  mAc_PROFILE_SHOP_MANEKIN,
  mAc_PROFILE_SHOP_INDOOR,
  mAc_PROFILE_EVENT_MANAGER,
  mAc_PROFILE_SHOP_GOODS,
  mAc_PROFILE_BRSHOP,
  mAc_PROFILE_WEATHER,
  mAc_PROFILE_POST_OFFICE,
  mAc_PROFILE_NPC_GUIDE,
  mAc_PROFILE_NPC_GUIDE2,
  mAc_PROFILE_INSECT,
  mAc_PROFILE_STATION,
  mAc_PROFILE_EV_CARPETPEDDLER,
  mAc_PROFILE_EV_KABUPEDDLER,
  mAc_PROFILE_RESERVE,
  mAc_PROFILE_HANDOVERITEM,
  mAc_PROFILE_NPC_CONV_MASTER,
  mAc_PROFILE_NPC_SUPER_MASTER,
  mAc_PROFILE_NPC_DEPART_MASTER,
  mAc_PROFILE_TOOLS,
  mAc_PROFILE_STRUCTURE,
  mAc_PROFILE_EV_GYPSY,
  mAc_PROFILE_NPC_POLICE,
  mAc_PROFILE_TRAIN0,
  mAc_PROFILE_TRAIN1,
  mAc_PROFILE_NPC_STATION_MASTER,
  mAc_PROFILE_EV_SANTA,
  mAc_PROFILE_NPC_POLICE2,
  mAc_PROFILE_POLICE_BOX,
  mAc_PROFILE_BGPOLICEITEM,
  mAc_PROFILE_BGCHERRYITEM,
  mAc_PROFILE_BGWINTERITEM,
  mAc_PROFILE_BGXMASITEM,
  mAc_PROFILE_BGPOSTITEM,
  mAc_PROFILE_FALLS,
  mAc_PROFILE_FALLSESW,
  mAc_PROFILE_EV_BROKER2,
  mAc_PROFILE_BROKER_DESIGN,
  mAc_PROFILE_T_UTIWA,
  mAc_PROFILE_PSNOWMAN,
  mAc_PROFILE_MY_INDOOR,
  mAc_PROFILE_NPC_RCN_GUIDE,
  mAc_PROFILE_INTRO_DEMO,
  mAc_PROFILE_SHRINE,
  mAc_PROFILE_BUGGY,
  mAc_PROFILE_T_HANABI,
  mAc_PROFILE_CONVENI,
  mAc_PROFILE_SUPER,
  mAc_PROFILE_DEPART,
  mAc_PROFILE_HANAMI_NPC0,
  mAc_PROFILE_S_CAR,
  mAc_PROFILE_HANAMI_NPC1,
  mAc_PROFILE_NPC_P_SEL,
  mAc_PROFILE_NPC_P_SEL2,
  mAc_PROFILE_NPC_RCN_GUIDE2,
  mAc_PROFILE_TRAIN_WINDOW,
  mAc_PROFILE_NPC_MAJIN4,
  mAc_PROFILE_KAMAKURA,
  mAc_PROFILE_GYOEI,
  mAc_PROFILE_NPC_MAJIN,
  mAc_PROFILE_T_NPCSAO,
  mAc_PROFILE_EV_SONCHO,
  mAc_PROFILE_UKI,
  mAc_PROFILE_NPC_MAJIN2,
  mAc_PROFILE_NORMAL_NPC,
  mAc_PROFILE_SET_MANAGER,
  mAc_PROFILE_SET_NPC_MANAGER,
  mAc_PROFILE_NPC_SHOP_MASTERSP,
  mAc_PROFILE_ROOM_SUNSHINE_POSTHOUSE,
  mAc_PROFILE_ROOM_SUNSHINE_POLICE,
  mAc_PROFILE_EFFECTBG,
  mAc_PROFILE_EV_CHERRY_MANAGER,
  mAc_PROFILE_EV_YOMISE,
  mAc_PROFILE_TOKYOSO_NPC0,
  mAc_PROFILE_TOKYOSO_NPC1,
  mAc_PROFILE_GOZA,
  mAc_PROFILE_RADIO,
  mAc_PROFILE_YATAI,
  mAc_PROFILE_TOKYOSO_CONTROL,
  mAc_PROFILE_SHOP_UMBRELLA,
  mAc_PROFILE_GYO_RELEASE,
  mAc_PROFILE_TUKIMI,
  mAc_PROFILE_KAMAKURA_INDOOR,
  mAc_PROFILE_EV_MIKO,
  mAc_PROFILE_GYO_KAGE,
  mAc_PROFILE_MIKUJI,
  mAc_PROFILE_HOUSE_GOKI,
  mAc_PROFILE_T_CRACKER,
  mAc_PROFILE_NPC_NEEDLEWORK,
  mAc_PROFILE_T_PISTOL,
  mAc_PROFILE_T_FLAG,
  mAc_PROFILE_T_TUMBLER,
  mAc_PROFILE_TUKIMI_NPC0,
  mAc_PROFILE_TUKIMI_NPC1,
  mAc_PROFILE_NEEDLEWORK_SHOP,
  mAc_PROFILE_COUNTDOWN_NPC0,
  mAc_PROFILE_COUNTDOWN_NPC1,
  mAc_PROFILE_TURI_NPC0,
  mAc_PROFILE_TAISOU_NPC0,
  mAc_PROFILE_COUNT,
  mAc_PROFILE_GARAGARA,
  mAc_PROFILE_TAMAIRE_NPC0,
  mAc_PROFILE_TAMAIRE_NPC1,
  mAc_PROFILE_HATUMODE_NPC0,
  mAc_PROFILE_NPC_TOTAKEKE,
  mAc_PROFILE_COUNT02,
  mAc_PROFILE_HATUMODE_CONTROL,
  mAc_PROFILE_TAMA,
  mAc_PROFILE_KAGO,
  mAc_PROFILE_TURI,
  mAc_PROFILE_HOUSE_CLOCK,
  mAc_PROFILE_TUNAHIKI_CONTROL,
  mAc_PROFILE_TUNAHIKI_NPC0,
  mAc_PROFILE_TUNAHIKI_NPC1,
  mAc_PROFILE_KOINOBORI,
  mAc_PROFILE_BEE,
  mAc_PROFILE_NAMEPLATE,
  mAc_PROFILE_DUMP,
  mAc_PROFILE_ROPE,
  mAc_PROFILE_EV_DOZAEMON,
  mAc_PROFILE_WINDMILL,
  mAc_PROFILE_LOTUS,
  mAc_PROFILE_ANIMAL_LOGO,
  mAc_PROFILE_MIKANBOX,
  mAc_PROFILE_DOUZOU,
  mAc_PROFILE_NPC_RTC,
  mAc_PROFILE_TOUDAI,
  mAc_PROFILE_NPC_RESTART,
  mAc_PROFILE_NPC_MAJIN5,
  mAc_PROFILE_FUUSEN,
  mAc_PROFILE_EV_DOKUTU,
  mAc_PROFILE_DUMMY,
  mAc_PROFILE_NPC_CURATOR,
  mAc_PROFILE_MUSEUM,
  mAc_PROFILE_EV_GHOST,
  mAc_PROFILE_MUSEUM_PICTURE,
  mAc_PROFILE_185,
  mAc_PROFILE_MUSEUM_FISH,
  mAc_PROFILE_MUSEUM_INSECT,
  mAc_PROFILE_BRIDGE_A,
  mAc_PROFILE_ROOM_SUNSHINE_MUSEUM,
  mAc_PROFILE_NEEDLEWORK_INDOOR,
  mAc_PROFILE_ROOM_SUNSHINE_MINSECT,
  mAc_PROFILE_MUSEUM_FOSSIL,
  mAc_PROFILE_MURAL,
  mAc_PROFILE_AC_SIGN,
  mAc_PROFILE_ANT,
  mAc_PROFILE_NPC_SENDO,
  mAc_PROFILE_FLAG,
  mAc_PROFILE_PRESENT_DEMO,
  mAc_PROFILE_PRESENT_NPC,
  mAc_PROFILE_BOAT,
  mAc_PROFILE_BOAT_DEMO,
  mAc_PROFILE_COTTAGE_MY,
  mAc_PROFILE_COTTAGE_NPC,
  mAc_PROFILE_EV_SONCHO2,
  mAc_PROFILE_NPC_MASK_CAT,
  mAc_PROFILE_NPC_MASK_CAT2,
  mAc_PROFILE_RESET_DEMO,
  mAc_PROFILE_GO_HOME_NPC,
  mAc_PROFILE_MISIN,
  mAc_PROFILE_LIGHTHOUSE_SWITCH,
  mAc_PROFILE_MUSEUM_INDOOR,
  mAc_PROFILE_T_ANRIUM1,
  mAc_PROFILE_T_BISCUS1,
  mAc_PROFILE_T_BISCUS2,
  mAc_PROFILE_T_HASU1,
  mAc_PROFILE_T_HAT1,
  mAc_PROFILE_T_ZINNIA1,
  mAc_PROFILE_T_BISCUS3,
  mAc_PROFILE_T_BISCUS4,
  mAc_PROFILE_T_ZINNIA2,
  mAc_PROFILE_T_HAT2,
  mAc_PROFILE_T_HAT3,
  mAc_PROFILE_T_REI1,
  mAc_PROFILE_T_REI2,
  mAc_PROFILE_NPC_SHASHO,
  mAc_PROFILE_T_BAG1,
  mAc_PROFILE_T_BAG2,
  mAc_PROFILE_EV_CASTAWAY,
  mAc_PROFILE_T_COBRA1,
  mAc_PROFILE_BALLOON,
  mAc_PROFILE_NPC_SONCHO,
  mAc_PROFILE_APRILFOOL_CONTROL,
  mAc_PROFILE_EV_MAJIN,
  mAc_PROFILE_HARVEST_NPC0,
  mAc_PROFILE_HARVEST_NPC1,
  mAc_PROFILE_GROUNDHOG_CONTROL,
  mAc_PROFILE_EV_SPEECH_SONCHO,
  mAc_PROFILE_GROUNDHOG_NPC0,
  mAc_PROFILE_EV_TURKEY,
  mAc_PROFILE_GHOG,
  mAc_PROFILE_HTABLE,
  mAc_PROFILE_NPC_HEM,
  mAc_PROFILE_TENT,
  mAc_PROFILE_PTERMINAL,
  mAc_PROFILE_MSCORE_CONTROL,

  mAc_PROFILE_NUM
};

/* sizeof(ACTOR_PROFILE) == 0x24 */
struct actor_profile_s {
  /* 0x00 */ s16 id; /* unique actor type ID */
  /* 0x02 */ u8 part; /* actor type, seemingly called 'part' */
  /* 0x04 */ u32 initial_flags_state; /* initial actor flag state */
  /* 0x08 */ mActor_name_t npc_id; /* "world" npc id/name */
  /* 0x0A */ s16 obj_bank_id; /* used with object exchange */
  /* 0x0C */ size_t class_size; /* sizeof(ZZZ_ACTOR) */
  /* 0x10 */ mActor_proc ct_proc; /* constructor */
  /* 0x14 */ mActor_proc dt_proc; /* destructor */
  /* 0x18 */ mActor_proc mv_proc; /* move */
  /* 0x1C */ mActor_proc dw_proc; /* draw */
  /* 0x20 */ mActor_proc sv_proc; /* save */
};

typedef void (*mActor_shadow_proc)(ACTOR*, LightsN*, GAME_PLAY*);

/* sizeof(Shape_Info) == 0x48 */
typedef struct actor_shape_info_s {
  /* 0x00 */ s_xyz rotation;
  /* 0x06 */ s16 unk_6;
  /* 0x08 */ f32 ofs_y;
  /* 0x0C */ mActor_shadow_proc shadow_proc;
  /* 0x10 */ f32 shadow_size_x;
  /* 0x14 */ f32 shadow_size_z;
  /* 0x18 */ f32 shadow_size_change_rate;
  /* 0x1C */ f32 shadow_alpha_change_rate;
  /* 0x20 */ int unk_20;
  /* 0x24 */ xyz_t* shadow_position;
  /* 0x28 */ int unk_28;
  /* 0x2C */ u8 draw_shadow; /* TRUE = shadow is drawn, FALSE = shadow is not drawn */
  /* 0x2D */ u8 unk_2D;
  /* 0x2E */ u8 force_shadow_position; /* TRUE = shadow's position is forcefully updated, FALSE = non-forcefully updated */
  /* 0x2F */ u8 unused_2F[0x48-0x2F];
} Shape_Info;

typedef struct actor_shadow_s{
    /* 0x00 */ xyz_t position;
    /* 0x0C */ f32 groundY;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ s16 unk20;
    /* 0x22 */ s16 unk22;
    /* 0x24 */ s16 unk24; 
    /* 0x26 */ s16 unk26;
    /* 0x28 */ char pad28[0xC];
    /* 0x34 */ int unk34;
    /* 0x38 */ int kind;
}Shadow_Info;

/* sizeof(struct actor_s) == 0x174 */
struct actor_s {
  /* 0x000 */ s16 id; /* unique actor type ID */
  /* 0x002 */ u8 part;
  /* 0x003 */ u8 restore_fg; /* restores 'fgdata' according to restore_fgdata_all */
  /* 0x004 */ s16 scene_id;
  /* 0x006 */ mActor_name_t npc_id;
  /* 0x008 */ s8 block_x;
  /* 0x009 */ s8 block_z;
  /* 0x00A */ s16 move_actor_list_idx; /* used in aBC_setupCommonMvActor */
  /* 0x00C */ PositionAngle home; /* Home position & rotation */
  /* 0x020 */ u32 state_bitfield; /* bitfield of current actor state */
  /* 0x024 */ s16 actor_specific; /* actor specific temp data */
  /* 0x026 */ s16 data_bank_id; /* data bank id actor is in */
  /* 0x028 */ PositionAngle world; /* World position & rotation */
  /* 0x03C */ xyz_t last_world_position; /* previous actor world position */
  /* 0x048 */ PositionAngle eye; /* actor "eyes" (head/lookat) world position & rotation */
  /* 0x05C */ xyz_t scale; /* actor size */
  /* 0x068 */ xyz_t position_speed; /* actor movement velocity (see Actor_position_speed_set) */
  /* 0x074 */ f32 speed; /* movement speed */
  /* 0x078 */ f32 gravity; /* gravity acting on actor */
  /* 0x07C */ f32 max_velocity_y; /* maximum y velocity possible due to gravity, usually -20.0f */
  /* 0x080 */ f32 ground_y; /* vertical position of ground underneath actor */
  /* 0x084 */ mCoBG_Check_c bg_collision_check; /* background object collision info with actor */
  /* 0x0B4 */ u8 unknown_b4; /* some sort of flag */
  /* 0x0B5 */ u8 drawn; /* was drawn flag, TRUE = actor was drawn, FALSE = actor was not drawn */
  /* 0x0B6 */ s16 player_angle_y; /* Y angle (yaw) between actor and player actor */
  /* 0x0B8 */ f32 player_distance; /* distance between actor and player actor (squared magnitude) */
  /* 0x0BC */ f32 player_distance_xz; /* distance between actor and player actor on XZ plane (magnitude) */
  /* 0x0C0 */ f32 player_distance_y; /* distance between actor and player actor on Y plane */
  /* 0x0C4 */ Status_c status_data; /* collider info, lots of leftover stuff from OoT */
  /* 0x0DC */ Shape_Info shape_info;
  /* 0x124 */ xyz_t camera_position; /* camera position relative to actor position */
  /* 0x130 */ f32 camera_w; /* camera projection W value */
  /* 0x134 */ f32 cull_width;
  /* 0x138 */ f32 cull_height;
  /* 0x13C */ f32 cull_distance;
  /* 0x140 */ f32 cull_radius;
  /* 0x144 */ f32 talk_distance; /* maximum distance for talking to be triggered, default seems to be 55.0f */
  /* 0x148 */ u8 cull_while_talking; /* flag to disable actor drawing while talking */
  /* 0x149 */ u8 skip_drawing; /* manual "do not draw" override flag only used by player umbrella actor */
  /* 0x14C */ ACTOR* parent_actor;
  /* 0x150 */ ACTOR* child_actor;
  /* 0x154 */ ACTOR* prev_actor;
  /* 0x158 */ ACTOR* next_actor;
  /* 0x15C */ mActor_proc ct_proc; /* constructor */
  /* 0x160 */ mActor_proc dt_proc; /* destructor */
  /* 0x164 */ mActor_proc mv_proc; /* move */
  /* 0x168 */ mActor_proc dw_proc; /* draw */
  /* 0x16C */ mActor_proc sv_proc; /* save */
  /* 0x170 */ ACTOR_DLFTBL* dlftbl; /* display list function table */
};

#define mActor_NONE_PROC1 ((mActor_proc)none_proc1)

typedef struct actor_list_s {
  int num_actors;
  ACTOR* actor;
} Actor_list;

typedef struct actor_info_s {
  int total_num;
  Actor_list list[ACTOR_PART_NUM];
} Actor_info;

typedef struct actor_data_s {
  s16 profile;
  s_xyz position;
  s_xyz rotation;
  s16 arg;
} Actor_data;

extern void Actor_world_to_eye(ACTOR* actor, f32 eye_height);
extern void Actor_position_move(ACTOR* actor);
extern void Actor_position_speed_set(ACTOR* actor);
extern void Actor_position_moveF(ACTOR* actor);
extern int Actor_player_look_direction_check(ACTOR* actor, s16 angle, GAME_PLAY* play);
extern void Shape_Info_init(ACTOR* actor, f32 ofs_y, mActor_shadow_proc shadow_proc, f32 shadow_size_x, f32 shadow_size_z);
extern void Actor_delete(ACTOR* actor);
extern int Actor_draw_actor_no_culling_check(ACTOR* actor);
extern int Actor_draw_actor_no_culling_check2(ACTOR* actor, xyz_t* camera_pos, f32 camera_w);
extern void Actor_info_ct(GAME* game, Actor_info* actor_info, Actor_data* player_data);
extern void Actor_info_dt(Actor_info* actor_info, GAME_PLAY* play);
extern void Actor_info_call_actor(GAME_PLAY* play, Actor_info* actor_info);
extern void Actor_info_draw_actor(GAME_PLAY* play, Actor_info* actor_info);
extern void Actor_free_overlay_area(ACTOR_DLFTBL* dlftbl);
extern void Actor_get_overlay_area(ACTOR_DLFTBL* dlftbl, int unused, size_t alloc_size);
extern void Actor_init_actor_class(ACTOR* actor, ACTOR_PROFILE* profile, ACTOR_DLFTBL* dlftbl, GAME_PLAY* play, int bank_idx, f32 x, f32 y, f32 z, s16 rot_x, s16 rot_y, s16 rot_z, s8 block_x, s8 block_z, s16 move_actor_list_idx, mActor_name_t name_id, s16 arg);
#ifndef MUST_MATCH
extern ACTOR* Actor_info_make_actor(Actor_info* actor_info, GAME* game, s16 profile_no, f32 x, f32 y, f32 z, s16 rot_x, s16 rot_y, s16 rot_z, s8 block_x, s8 block_z, s16 move_actor_list_idx, mActor_name_t name_id, s16 arg, s8 npc_info_idx, int data_bank_idx);
#else
extern asm ACTOR* Actor_info_make_actor(Actor_info* actor_info, GAME* game, s16 profile_no, f32 x, f32 y, f32 z, s16 rot_x, s16 rot_y, s16 rot_z, s8 block_x, s8 block_z, s16 move_actor_list_idx, mActor_name_t name_id, s16 arg, s8 npc_info_idx, int data_bank_idx);
#endif
extern ACTOR* Actor_info_make_child_actor(Actor_info* actor_info, ACTOR* parent_actor, GAME* game, s16 profile, f32 x, f32 y, f32 z, s16 rot_x, s16 rot_y, s16 rot_z, s16 move_actor_list_idx, mActor_name_t name_id, s16 arg, int data_bank_idx);
extern void restore_fgdata_all(GAME_PLAY* play);
extern void Actor_info_save_actor(GAME_PLAY* play);
extern ACTOR* Actor_info_delete(Actor_info* actor_info, ACTOR* actor, GAME* game);
extern ACTOR* Actor_info_name_search_sub(ACTOR* actor, s16 name);
extern ACTOR* Actor_info_name_search(Actor_info* actor_info, s16 name, int part);
extern ACTOR* Actor_info_fgName_search_sub(ACTOR* actor, mActor_name_t fgName);
extern ACTOR* Actor_info_fgName_search(Actor_info* actor_info, mActor_name_t fgName, int part);
extern Gfx* HiliteReflect_new(xyz_t* pos, xyz_t* eye, xyz_t* light_direction, GRAPH* graph, Gfx* gfx, Hilite** hilite);
extern Hilite* HiliteReflect_init(xyz_t* pos, xyz_t* eye, xyz_t* light_direction, GRAPH* graph);
extern Hilite* HiliteReflect_xlu_init(xyz_t* pos, xyz_t* eye, xyz_t* light_direction, GRAPH* graph);
extern void Setpos_HiliteReflect_init(xyz_t* pos, GAME_PLAY* play);
extern void Setpos_HiliteReflect_xlu_init(xyz_t* pos, GAME_PLAY* play);


#ifdef __cplusplus
}
#endif

#endif
