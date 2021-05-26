#include <pthread.h>
#include <jni.h>
#include <src/Includes/Utils.h>
#if defined(__aarch64__) //Compile for arm64 lib only
#include <src/And64InlineHook/And64InlineHook.hpp>
#else //Compile for armv7 lib only. Do not worry about greyed out highlighting code, it still works
#include <src/Substrate/SubstrateHook.h>
#endif
#include "KittyMemory/MemoryPatch.h"
#include "Includes/Logger.h"
#include "Includes/Esp.h"
#include "Hook.h"
#include "Includes/obfuscator.hpp"
#define HOOK(offset, ptr, orig) MSHookFunction((void *)getRealOffset(offset), (void *)ptr, (void **)&orig)

//url
extern "C" JNIEXPORT jstring
JNICALL
Java_com_example_loginform2_Auth_Title(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(("https://akashi.hyupaimods.com/login.php"));
}

//dialog
extern "C" JNIEXPORT jstring
JNICALL
Java_com_example_loginform2_MainActivity_Dialog(JNIEnv *env, jobject thiz) {
return env->NewStringUTF(("► Telegram: https://t.me/OusadoXMODs\n\n► Inscreva - Se No Canal LegacyTeam"));
}


// canal mb
extern "C" JNIEXPORT jstring
JNICALL
Java_com_example_loginform2_MainActivity_URL(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(("https://youtube.com/channel/UCr0vByZ3MFojLm6b-gF8RhA"));
}

// canal mb
extern "C" JNIEXPORT jstring
JNICALL
Java_com_example_loginform2_MainActivity_Team(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(("LegacyTeam"));
}




//======"""=======//

extern "C" {
JNIEXPORT jboolean JNICALL
Java_com_example_loginform2_FloatingModMenuService_EnableSounds(
        JNIEnv *env,
        jobject activityObject) {
    return true;
}

JNIEXPORT jstring JNICALL
Java_com_example_loginform2_FloatingModMenuService_Title(
        JNIEnv *env,
        jobject activityObject) {
        	
    jstring str = env->NewStringUTF("VIP MOD PRO");
    return str;
}

JNIEXPORT jstring JNICALL
Java_com_example_loginform2_FloatingModMenuService_Heading(
        JNIEnv *env,
        jobject activityObject) {
        	
    return env->NewStringUTF("Projeto By Hyupai");
}


JNIEXPORT jstring JNICALL
Java_com_example_loginform2_FloatingModMenuService_Icon(
        JNIEnv *env,
        jobject activityObject) {

    //Use https://www.base64encode.org/ to encode your image to base64

    return env->NewStringUTF(
            "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");
}

JNIEXPORT jint JNICALL
Java_com_example_loginform2_FloatingModMenuService_IconSize(
        JNIEnv *env,
        jobject activityObject) {
    return 70;
}

JNIEXPORT jstring JNICALL
Java_com_example_loginform2_FloatingModMenuService_Toast(
        JNIEnv *env,
        jclass clazz) {
    return env->NewStringUTF("..");
}


JNIEXPORT jobjectArray  JNICALL
Java_com_example_loginform2_FloatingModMenuService_getFeatureListttttttttt(
        JNIEnv *env,
        jobject activityObject) {
    jobjectArray ret;

    const char *features[] = {
        
		    "Menu_------- Menu Bot / Legacy -------", //0
            
            "Toggle_AimBot - Auto", //1
            "Toggle_Aimbot - Tiro", //2
            "Toggle_Aimbot - Mira", //3
            "Toggle_Aimbot - Agachar", //4
            
            "SeekBar_AimFov(%)_0_360", //5
            "SeekBar_AimFov Baixo(°)_0_160", //6
            "SeekBar_AimSmoth(%)_0_360", //7
            "SeekBar_AimSmoth Baixo(°)_0_160", //8
                   
            "Menu_Menu Teste Aimbot",
            
            "Category_Fuck You Cracks Mod By\n\nOusado Mods ~ Carlos Cands\nRafael Mods ~ Hunter Mods\nCalica Mods\n\nLegacyTeam © 2021",
            
            
        
        };

    int Total_Feature = (sizeof features /
                         sizeof features[0]); //Now you dont have to manually update the number everytime;

    ret = (jobjectArray) env->NewObjectArray(Total_Feature, env->FindClass("java/lang/String"),
                                             env->NewStringUTF(""));
    int i;
    for (i = 0; i < Total_Feature; i++)
        env->SetObjectArrayElement(ret, i, env->NewStringUTF(features[i]));
    return (ret);
}


int Desativer = 0;

struct {

    float Fov_Aim = 0.998f;
    int semihs = 0;
    bool aimBotFov = false;
    bool aimScope = false;
    bool aimTiro = false;
    bool hs100 = false;
    bool ghost = false;
    bool hs70 = false;
    bool aimAgachado = false;
    bool aimBody = false;
    bool aimbotauto = true;
    bool teleKill = false;
    bool Paraquedas = false;
    bool aimVisibilidade = false;
 
    int TpCeu = 0;
    bool AlertWorld = false;
    bool AlertAround = false;
    bool EspLine = false;
    bool espDistance = false;
    bool espName = false;
    bool espNames = false;
    bool aimFire = false;
    bool espSkeleton = false;
    bool espCircle = false;
    bool espNear = false;
    bool isEspReady = false;

    bool closestEnemy = false;
    bool espFire = false;

    bool fakeName = false;
    bool ESPTESTEALERT = false;
    bool sameteams = false;
    bool hd = false;
    bool aimTeste = false;
    bool aimTeste1 = false;
    bool aimTeste3 = false;
    bool medKit = false;
    

    int enemyCountAround = 0;
    int botCountAround = 0;
    int enemyCountWorld = 0;
    int botCountWorld = 0;

} MT;

bool active = true;
bool launched = false;

struct My_Patches {

   MemoryPatch Teletransport;
    
} hexlibPatches;

JNIEXPORT void JNICALL
Java_com_example_loginform2_FloatingModMenuService_Changes(
        JNIEnv *env,
        jobject activityObject,
        jint feature,
        jint Value) {

    __android_log_print(ANDROID_LOG_VERBOSE, "Mod Menu", "Feature: = %d", feature);
    __android_log_print(ANDROID_LOG_VERBOSE, "Mod Menu", "Value: = %d", Value);

    switch (feature) {
        
        //MENU 0
        
        case 1:
        MT.hs100 = !MT.hs100;
        break;      
        
        case 2:
        MT.aimFire= !MT.aimFire;
        break; 

        case 3:
        MT.aimScope= !MT.aimScope;
        break;
          
        case 4:
        MT.aimAgachado = !MT.aimAgachado;      
        break;
        
        case 5:
        if (Value > 0) {
        MT.Fov_Aim = 1.0f - (0.0020f * (float)Value);
        }
        break;
        
        case 6:
        if (Value > 0) {
        MT.Fov_Aim = 1.0f - (0.0020f * (float)Value);
        }
        break;
        
        case 7:
        if (Value > 0) {
        MT.aimBotFov = 1.0f - (0.0020f * (float)Value);
        }
        break;
        
        case 8:
        if (Value > 0) {
        MT.aimBotFov = 1.0f - (0.0020f * (float)Value);
        }
        break;

             
            
    }

}

JNIEXPORT void JNICALL
Java_com_example_loginform2_FloatingModMenuService_changeToggle(
        JNIEnv *env,
        jobject activityObject,
        jint feature) {

    switch (feature) {
        

}
}

JNIEXPORT void JNICALL
Java_com_example_loginform2_FloatingModMenuService_changeSeekBar(
        JNIEnv *env,
        jobject activityObject,
        jint feature, jint sliderValue) {
    __android_log_print(ANDROID_LOG_VERBOSE, "Mod Menu", "Feature = %d", feature);
    __android_log_print(ANDROID_LOG_VERBOSE, "Mod Menu", "sliderValue = %d", sliderValue);

    switch (feature) {
        
        }
    }
}

void (*LateUpdate)(void *componentPlayer);
void AimBot(void *local_player, void *enemy_player) {

    int pose = GetPhysXPose(enemy_player);
    bool alive = get_isAlive(enemy_player);
    bool visible = get_isVisible(enemy_player);
    bool visi = get_AttackableEntity_IsVisible(enemy_player);
    bool visir = get_AttackableEntity_GetIsDead(enemy_player);

    bool sameteam = get_isLocalTeam(enemy_player);
    void *HeadTF = *(void **)((uintptr_t)enemy_player + Global.HeadTF);
    void *HipTF = *(void **)((uintptr_t)enemy_player + Global.HipTF);
    void *Main_Camera = *(void **)((uintptr_t)local_player + Global.MainCameraTransform);

    if (alive && pose != 8  && visible && !sameteam && HeadTF != NULL && Main_Camera != NULL && HipTF != NULL) {
        Vector3 EnemyLocation = Transform_INTERNAL_GetPosition(HeadTF);
        Vector3 CenterWS = GetAttackableCenterWS(local_player);
        bool scope = get_IsSighting(local_player);
        bool agachado = get_IsCrouching(local_player);
        float distance = Vector3::Distance(CenterWS, EnemyLocation);

        Vector3 PlayerLocation = Transform_INTERNAL_GetPosition(Main_Camera);
        Quaternion PlayerLook = GetRotationToLocation(EnemyLocation, 0.1f, PlayerLocation);
        Quaternion PlayerLook2 = GetRotationToLocation(Transform_INTERNAL_GetPosition(HipTF), 0.1f, PlayerLocation);
                Vector3 fwd = GetForward(Main_Camera);
                
        Vector3 nrml = Vector3::Normalized(EnemyLocation - PlayerLocation);
        float PlayerDot = Vector3::Dot(fwd, nrml);
        



        if (MT.espFire) {
            void *imo = get_imo(local_player);
            if (imo != NULL && distance > 0.1f) {
                set_esp(imo, CenterWS, EnemyLocation);
            }
        }
        
        
          

          if (MT.ESPTESTEALERT) {
            monoString *alert = FormatCount(MT.enemyCountWorld, MT.botCountWorld);
            if (alert != NULL) {
                ShowDynamicPopupMessage(alert);
            }
        }
        
      if (MT.AlertAround) {
            monoString *nick = get_NickName(enemy_player);
            if (nick != NULL) {
                 ShowPopupMessages(nick);
            }
        }
      
            if (MT.fakeName) {
            spofNick(local_player);
        }

           if (MT.espNames) {
            void *ui = CurrentUIScene();
            if (ui != NULL) {
                monoString *nick = get_NickName(enemy_player);
                monoString *distances = U3DStrFormat(distance);
                AddTeammateHud(ui, nick, distances);
            }
        }

        


if (MT.teleKill) {
                for (int u = 0; u < 6; u++) { 
                    puts("XDark"); 
                } 
                set_aim(local_player, PlayerLook); 
                void *_MountTF = Component_GetTransform(enemy_player); 
                if (_MountTF != NULL) { 
                    Vector3 MountTF = 
                            Transform_INTERNAL_GetPosition(_MountTF) - (GetForward(_MountTF) * 1.6f); 
                    Transform_INTERNAL_SetPosition(Component_GetTransform(local_player), Vvector3(MountTF.X, MountTF.Y, MountTF.Z)); 
                } 
            }
       
       
    
        if ((agachado && MT.aimAgachado) && ((PlayerDot > 0.80f && !MT.aimBotFov) || (PlayerDot > MT.Fov_Aim && MT.aimBotFov))) {
                        
            set_aim(local_player, PlayerLook);
        }
        

        if ((scope && MT.aimScope) && ((PlayerDot >  0.80f && !MT.aimBotFov) || (PlayerDot > MT.Fov_Aim && MT.aimBotFov))) {
            set_aim(local_player, PlayerLook);

        }
        

                bool firing = IsFiring(local_player);
        if ((firing && MT.aimFire) && ((PlayerDot > 0.80f && !MT.aimBotFov) || (PlayerDot > MT.Fov_Aim && MT.aimBotFov))) {
                        

            if (MT.aimBody) {
                set_aim(local_player, PlayerLook2);
            }
            if (MT.hs100) {
                set_aim(local_player, PlayerLook);
            }
            if (MT.hs70) {
                if (MT.aimbotauto)
                {
                    set_aim(local_player, PlayerLook);
                    ++MT.semihs;
                } else {
                    set_aim(local_player, PlayerLook2);
                    --MT.semihs;
                }

                if (MT.semihs == 6)
                {
                    MT.aimbotauto = false;
                } else if (MT.semihs == 0) {
                    MT.aimbotauto = true;
                }
                if (MT.semihs > 6 || MT.semihs < 0)
                {
                    MT.semihs = 3;
                    MT.aimbotauto = true;
                }
            }
        }
        }
        }
    


bool isEspReady = false;

void *fakeEnemy;
void _LateUpdate(void *player){
    if (player != NULL) {
        void *local_player = Current_Local_Player();
        if (local_player == NULL){
            local_player = GetLocalPlayerOrObServer();
        }
        if (local_player != NULL){
            void *current_match = Curent_Match();
            if (current_match != NULL) {
                void *fakeCamPlayer = get_MyFollowCamera(local_player);
                void *fakeCamEnemy = get_MyFollowCamera(player);
                if (fakeCamPlayer != NULL && fakeCamEnemy != NULL){
                    void *fakeCamPlayerTF = Component_GetTransform(fakeCamPlayer);
                    void *fakeCamEnemyTF = Component_GetTransform(player);
                    if (fakeCamPlayerTF != NULL && fakeCamEnemyTF != NULL){
                        Vector3 fakeCamPlayerPos = Transform_INTERNAL_GetPosition(fakeCamPlayerTF);
                        Vector3 fakeCamEnemyPos = Transform_INTERNAL_GetPosition(fakeCamEnemyTF);
                        float distance = Vector3::Distance(fakeCamPlayerPos, fakeCamEnemyPos);
                        if (player != local_player){
                            if (distance > 1.6f) {
                                bool sameteams = get_isLocalTeam(player);
                                int pose = GetPhysXPose(player);
                                bool alive = get_isAlive(player);
                                bool visible = get_isVisible(player);
                                bool visir = get_AttackableEntity_GetIsDead(player);
                                       
                                if (!sameteams && pose != 8 && alive && visible){
                                    AimBot(local_player, player);
                                }
                            } else {
                                fakeEnemy = player;
                            }
                        }
                    }
                        
                }
            }
        }
    }
    LateUpdate(player);
}

bool (*orig_ghost)(void* _this, int value);
bool _ghost(void* _this, int value){
    if (_this != NULL){
        if (MT.ghost || MT.teleKill){
            return false;
        }
    }
    return orig_ghost(_this, value);
}

void *hack_thread(void *) {
    LOGI("Loading...");

    ProcMap il2cppMap;
    do {
        il2cppMap = KittyMemory::getLibraryMap("libil2cpp.so");
        sleep(1);
    } while (!il2cppMap.isValid());

MSHookFunction((void*)getRealOffset(0xA1D620), (void*)_LateUpdate, (void**)&LateUpdate);

return NULL;

}

void *Super_thread(void *) {
    LOGD("Carregando...");

    ProcMap unityMap;
    do {
        unityMap = KittyMemory::getLibraryMap("libunity.so");
        sleep(1);
    } while (!unityMap.isValid());


    return NULL;
}

JNIEXPORT jint JNICALL
JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *globalEnv;
    vm->GetEnv((void **) &globalEnv, JNI_VERSION_1_6);

    pthread_t ptid;
    pthread_create(&ptid, NULL, hack_thread, NULL);

    return JNI_VERSION_1_6;
}

JNIEXPORT void JNICALL
JNI_OnUnload(JavaVM *vm, void *reserved) {}


__attribute__((constructor))
void initializer() {
    pthread_t ptid;
    pthread_create(&ptid, NULL, Super_thread, NULL);
}


