#ifndef ANDROID_MOD_MENU_GLOBAL_H
#define ANDROID_MOD_MENU_GLOBAL_H

struct {
    
    uintptr_t Dictionary = 0x44;//internal class `ZtmgF(){} 1.60 
    uintptr_t MainCameraTransform = 0x5C; //1.60 
    uintptr_t HeadTF = 0x1BC; //protected Transform JoqBDUR; 1.60 
    uintptr_t HipTF = 0x1C0; //protected Transform gBb{jci; 1.60 
    uintptr_t ToeTF = 0x1C4; //protected Transform `}Klj; 1.60 c
    uintptr_t Sholder1 = 0x1EC; //protected Transform iuhFwSC 1.60 
    uintptr_t Sholder2 = 0x1EC; //protected Transform iuhFwSC 1.60 
    uintptr_t PeDireito = 0x1D4; //protected Transform SrnCMrP; 1.60 
    uintptr_t PeEsquerdo = 0x1D8; //protected Transform jzgDN^; 1.60 
    uintptr_t MaoDireita = 0x1E8; //protected Transform yvZ[NRv; 1.60 
    uintptr_t MaoEsquerda = 0x1B8; //protected Transform yFayxSS; 1.60 
    uintptr_t PescosoTF = 0x1C4; //protected Transform S~D]ly; 1.60 
    uintptr_t Camera_WorldToScreenPoint =  0x2A855A0; //public Vector3 WorldToScreenPoint(Vector3 position) { } 1.60 
    uintptr_t WorldToScreenPoint = 0x2A855A0; //public Vector3 WorldToScreenPoint(Vector3 position) { } 1.60 
    uintptr_t Camera_main = 0x2A85B90; //public static Camera get_main() { } 1.60 
    uintptr_t Component_GetTransform = 0x2A88704; //public Transform get_transform() { } 1.60 
    uintptr_t GetCameraTrackableEntityTransfrom = 0xA42B60;  //public Transform GetCameraTrackableEntityTransfrom() { } 1.60
    uintptr_t Transform_INTERNAL_GetPosition = 0x2CEA400;  //private void INTERNAL_get_position(out Vector3 value) { } 1.60 
    uintptr_t Transform_INTERNAL_SetPosition = 0x2CEA4C0;  //private void INTERNAL_set_position(ref Vector3 value) { } 1.60 
    
  
  //  uintptr_t LineRenderer_Set_PositionCount = 0x2C1A298;//1.60 
  //  uintptr_t LineRenderer_SetPosition = 0x2C1A338;//1.60 
  //  uintptr_t GrenadeLine_DrawLine = 0x1664A98;//1.60 
  //  uintptr_t GrenadeLine_Update = 0x16645B8;//1.60 
 
   
    uintptr_t IsClientBot = 0xD0; //public bool IsClientBot; 1.60 
    uintptr_t IsSameTeam = 0x25CA658; //protected override void OnUIInit() { } 1.60
    uintptr_t IsSkyDiving = 0x9F4240; //public bool get_IsSkyDiving() { } 1.60
    uintptr_t GetForward = 0x2CEAAE4; //public Vector3 get_forward() { } 1.60 
    uintptr_t IsFemale = 0x9F65B8; //public bool get_IsFemale() { } 1.60 
    uintptr_t get_isAlive = 0xA42B68; //public bool IsCameraTrackableEntityAlive() { } 1.60 
    uintptr_t IsSkyDashing =0x9F46D8; //public bool get_IsSkyDashing() { } 1.60 
    uintptr_t IsParachuting = 0x9F3E38; //public bool get_IsParachuting() { } 1.60 
    uintptr_t RealDead = 0x9F3024; //public bool get_IsReallyDead() { } 1.60 
    uintptr_t IsFiring = 0x9EC748; //public bool IsFiring() { } 1.60       
    uintptr_t get_IsCrouching = 0x9FDB94; //public bool IsCrouching() { } 1.60       
    uintptr_t get_IsSighting = 0xA52DC4; //public bool get_IsSighting() { } 1.60       
    uintptr_t get_isLocalPlayer = 0x9F2A54; //public bool IsLocalPlayer() { } 1.60       
    uintptr_t get_isLocalTeam = 0x9FBE3C; //public virtual bool IsLocalTeammate() { } 1.60       
    uintptr_t get_isVisible = 0x9F4F48; //public override bool IsVisible() { } 1.60 nao sei
    uintptr_t set_aim = 0x9F2A0C; //public void SetAimRotation(Quaternion laYChSW) { } 1.60       
    uintptr_t get_HasHelmet = 0x9F196C; //public bool get_HasHelmet() { } 1.60       
    uintptr_t get_HasVest = 0x9F1858; //public bool get_HasVest() { } 1.60       


    uintptr_t GetPlayerDead = 0x1F3EB5C; //public int 0x1A319EC() { } 1.60       
    uintptr_t set_invitee_nickname = 0x2E16E80; //public void set_invitee_nickname(string value) { } 1.60       
    uintptr_t GetPlayerCaido = 0x9F2288; //public bool get_IsDieing() { } 1.60       
    uintptr_t AddTeammateHud = 0xCC91AC; //public void ShowAssistantText(string playerName, string line) { } 1.60       
    uintptr_t get_imo = 0x9F82F0; //public FPnavhE 0x9F82F0() { } 1.60       
    uintptr_t set_esp = 0x1AF864C; //public void utKBmvc(Vector3 RvOJF{, Vector3 bQiMI) { } 1.60       
    uintptr_t set_height = 0x2A86A74; //public float get_height() { } 1.60       
    uintptr_t get_CharacterController = 0x9ECE24; //public CharacterController get_CharacterController() { } 1.60       
    uintptr_t GetAttackableCenterWS = 0x9F11A4; //public override Vector3 GetAttackableCenterWS() { } 1.60       
    uintptr_t GetCharacterControllerTopPosition = 0xA37E30; //public virtual Vector3 GetCharacterControllerTopPosition() { } 1.60       
    uintptr_t get_NickName = 0x2CD983C; //public string get_NickName() { } 1.60       
    uintptr_t get_height = 0x2CDF064; //public static int get_height() { } 1.60       
    uintptr_t get_width = 0x2CDEFD4; //public static int get_width() { } 1.60       
    uintptr_t get_deltaTime = 0x2CE9284; //public static float get_fixedDeltaTime() { } 1.60       
    uintptr_t CurrentUIScene = 0x1774488; //public static UICOWBaseScene CurrentUIScene() { } 1.60       
    uintptr_t CurHp = 0x28BB554; //public int get_CurHP() { } 1.60       
    uintptr_t get_Chars = 0x2510F80; //public char get_Chars(int index) { } 1.60       
    

    uintptr_t Curent_Match = 0x1775074; //1.60       
    uintptr_t Camera_main_fov = 0x2A83C30; //public float get_fieldOfView() { } 1.60       
    uintptr_t Current_Local_Player = 0x17753C8; //public static Player CurrentLocalPlayer() { } 1.60       
    uintptr_t AttackableEntity_GetIsDead = 0x1F3EB5C; //public bool get_IsDead() { } 1.60       
    uintptr_t AttackableEntity_IsVisible = 0x1F3EC50; //public virtual void TakeHealing(int wE~rpy, {QAb~u auxIoj, int OhggZRq, Vector3 `oVk^H, Vector3 ft|sF}F, List<float> `KEFVvE) { } 1.60       
    uintptr_t GetLocalPlayerOrObServer = 0x17768D0; //public static Player GetLocalPlayerOrObserverTarget() { } 1.60       
    uintptr_t CurrentLocalSpectator = 0x1775848; //public static hxgtqc~ CurrentLocalSpectator() { } 1.60       
    uintptr_t Player_Index = 0x1776124; //public Player hszKW]() { }       
    uintptr_t Player_Index2 = 0x17A5050; //public Player |y[WnPu({QAb~u BhUcw{z) { }       
    uintptr_t GetPhysXPose = 0x9FDB60; //public VCDxuoO GetPhysXPose() { } 1.60       
    uintptr_t GetLocalPlayer = 0x1F2A5AC; //private static Player GetLocalPlayer() { } 1.60       
    uintptr_t GetCharacterHeight = 0xA05DE8; //public float GetCharacterHeight() { } 1.60       
    uintptr_t IsUserControlChanged = 0x9FDA78; //public bool IsUserControlChanged() { } 1.60       
    uintptr_t get_MyFollowCamera = 0x9F2380; //public FollowCamera get_MyFollowCamera() { } 1.60       
    uintptr_t Raycast = 0x2C2BD00; //public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance, int layerMask) { } 1.60       


    uintptr_t U3DStr = 0x251E13C; //private string CreateString(sbyte* value) { } 1.60       
    uintptr_t U3DStrConcat = 0x250E9B0; //public static string Concat(string str0, string str1) { } 1.60       
    uintptr_t spof_nick = 0x1D3B870; //protected void m]^O~Mn(string IyxY|Aa) { } 1.60       
    uintptr_t ShowDynamicPopupMessage = 0xCAEC2C; //public void ShowDynamicPopupMessage(string message, float duration = 5) { } 1.60       
    uintptr_t ShowPopupMessage = 0xCAEDA8; //public void ShowPopupMessage(string message, float duration = 2) { } 1.60       


    uintptr_t RightShoulder = 0x1F0; // protected Transform IcoOWF; // 0x1FO (1.60)       
    uintptr_t LeftShoulder = 0x1EC; // protected Transform iuhFwSC; // 0x1EC  (1.60)       
    uintptr_t IsCrouching = 0x9FDB94; // public bool IsCrouching 1.60        
    uintptr_t get_IsReallyDead = 0x9F3024; // public bool get_IsReallyDead 1.60       
    uintptr_t spof_uid = 0x9F15C4; // protected void sWvUNu(ulong IyxY|Aa) { } 1.60       
    uintptr_t telamento2 = 0x15EF720; // public int get_CurrentSpectatorCount 1.60       
    uintptr_t noRecoil = 0xA83794; // public float GetScatterRate 1.60       
    uintptr_t GetHead = 0xA37A68; // public virtual Transform GetHeadTF() { } 1.60       
    uintptr_t GetHipTF = 0xA37B94; //public virtual Transform GetHipTF() { } 1.60       
    uintptr_t CurrentMatch = 0x239A338; // public static  CurrentMatch() { } 1.60       
    uintptr_t GetLocalPlayer2 = 0x1776124; //public Player KGsYtd({QAb~u BhUcw{z, bool Hbahl = False) { } 1.60       
    uintptr_t getPlayerByIndex = 0x17A4F8C; // public Player elpb[T(byte Ox|uy|) { } 1.60       
    uintptr_t get_CurHP = 0x28BB554; //public int get_CurHP() { } 1.60       
    uintptr_t get_PlayerID = 0x9EF740; //public {QAb~u get_PlayerID() { } 1.60       
    uintptr_t get_IsDieing = 0x9F2288; //public bool get_IsDieing() { } 1.60       
    uintptr_t get_IsSkyDiving = 0x9F4240; //public bool get_IsSkyDiving() { } 1.60       
    uintptr_t get_IsSkyDashing = 0x9F46D8; //public bool get_IsSkyDashing() { } 1.60       
    uintptr_t get_IsParachuting = 0x9F3E38; //public bool get_IsParachuting() { } 1.60       
    uintptr_t SetAimRotation = 0x9F2A0C; //public void SetAimRotation(Quaternion laYChSW) { } 1.60       
    uintptr_t get_MaxHP = 0x1A319EC; //public override int get_MaxHp() { } 1.60       
    
    uintptr_t il2cpp_string_new = 0x2E2CE0C; // 1.53.2  no DUMP
    uintptr_t String_Concat = 0x250E9B0; //public static string Concat(string str0, string str1) { } 1.60       
    uintptr_t Screen_get_width = 0x2AE64D0; //public static int get_width() { } 1.60       
    uintptr_t Screen_get_height = 0x2AE6560; //public static int get_height() { } 1.60       
    uintptr_t get_main = 0x2A85B90; //public static Camera get_main() { } 1.60       
    uintptr_t Component_get_transform = 0x2A88704; //public Transform get_transform() { } 1.60       
    uintptr_t Transform_get_position = 0x2CEA400; //private void INTERNAL_get_position(out Vector3 value) { } 1.60       
    uintptr_t IsVisible = 0x9F4F48; //public override bool IsVisible() { } 1.60       
    uintptr_t IsLocalPlayer = 0x9F2A54; //public bool IsLocalPlayer() { } 1.60       
    uintptr_t Transform_get_forward = 0x2CEAAE4;  //public Vector3 get_forward() { } 1.60
    uintptr_t IsLocalTeammate = 0x9FBE3C; //public virtual bool IsLocalTeammate() { } 1.60
    uintptr_t setcolor = 0x2CDA94C; //setfogcolor 1.60
/*

// RVA: 0x1F60A2C Offset: 0x1F60A2C VA: 0xB4FB5A2C
    public uint get_Health() { }

 */








} Global;

#endif


