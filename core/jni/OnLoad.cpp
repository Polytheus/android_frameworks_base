#include <android_runtime/AndroidRuntime.h>
#include "jni.h"
#include "JNIHelp.h"
#include <assert.h>
#include <utils/Log.h>

extern void register_BindTest();

extern int register_android_os_Binder(JNIEnv* env);
extern int register_android_os_Process(JNIEnv* env);
extern int register_android_graphics_Bitmap(JNIEnv*);
extern int register_android_graphics_BitmapFactory(JNIEnv*);
extern int register_android_graphics_Camera(JNIEnv* env);
extern int register_android_graphics_Graphics(JNIEnv* env);
extern int register_android_graphics_Interpolator(JNIEnv* env);
extern int register_android_graphics_LayerRasterizer(JNIEnv*);
extern int register_android_graphics_MaskFilter(JNIEnv* env);
extern int register_android_graphics_Movie(JNIEnv* env);
extern int register_android_graphics_NinePatch(JNIEnv*);
extern int register_android_graphics_PathEffect(JNIEnv* env);
extern int register_android_graphics_Region(JNIEnv* env);
extern int register_android_graphics_Shader(JNIEnv* env);
extern int register_android_graphics_Typeface(JNIEnv* env);

extern int register_com_google_android_gles_jni_EGLImpl(JNIEnv* env);
extern int register_com_google_android_gles_jni_GLImpl(JNIEnv* env);
extern int register_android_opengl_jni_GLES10(JNIEnv* env);
extern int register_android_opengl_jni_GLES10Ext(JNIEnv* env);
extern int register_android_opengl_jni_GLES11(JNIEnv* env);
extern int register_android_opengl_jni_GLES11Ext(JNIEnv* env);

extern int register_android_hardware_Camera(JNIEnv *env);

extern int register_android_hardware_SensorManager(JNIEnv *env);

extern int register_android_media_AudioRecord(JNIEnv *env);
extern int register_android_media_AudioSystem(JNIEnv *env);
extern int register_android_media_AudioTrack(JNIEnv *env);
extern int register_android_media_JetPlayer(JNIEnv *env);
extern int register_android_media_ToneGenerator(JNIEnv *env);

extern int register_android_message_digest_sha1(JNIEnv *env);

extern int register_android_util_FloatMath(JNIEnv* env);

namespace android {
extern int register_android_content_AssetManager(JNIEnv* env);
extern int register_android_util_EventLog(JNIEnv* env);
extern int register_android_util_Log(JNIEnv* env);
extern int register_android_content_StringBlock(JNIEnv* env);
extern int register_android_content_XmlBlock(JNIEnv* env);
extern int register_android_emoji_EmojiFactory(JNIEnv* env);
extern int register_android_graphics_Canvas(JNIEnv* env);
extern int register_android_graphics_ColorFilter(JNIEnv* env);
extern int register_android_graphics_DrawFilter(JNIEnv* env);
extern int register_android_graphics_Matrix(JNIEnv* env);
extern int register_android_graphics_Paint(JNIEnv* env);
extern int register_android_graphics_Path(JNIEnv* env);
extern int register_android_graphics_PathMeasure(JNIEnv* env);
extern int register_android_graphics_Picture(JNIEnv*);
extern int register_android_graphics_PorterDuff(JNIEnv* env);
extern int register_android_graphics_Rasterizer(JNIEnv* env);
extern int register_android_graphics_Xfermode(JNIEnv* env);
extern int register_android_graphics_PixelFormat(JNIEnv* env);
extern int register_com_android_internal_graphics_NativeUtils(JNIEnv *env);
extern int register_android_view_Display(JNIEnv* env);
extern int register_android_view_Surface(JNIEnv* env);
extern int register_android_view_ViewRoot(JNIEnv* env);
extern int register_android_database_CursorWindow(JNIEnv* env);
extern int register_android_database_SQLiteDatabase(JNIEnv* env);
extern int register_android_database_SQLiteDebug(JNIEnv* env);
extern int register_android_database_SQLiteProgram(JNIEnv* env);
extern int register_android_database_SQLiteQuery(JNIEnv* env);
extern int register_android_database_SQLiteStatement(JNIEnv* env);
extern int register_android_debug_JNITest(JNIEnv* env);
extern int register_android_nio_utils(JNIEnv* env);
extern int register_android_pim_EventRecurrence(JNIEnv* env);
extern int register_android_text_format_Time(JNIEnv* env);
extern int register_android_os_Debug(JNIEnv* env);
extern int register_android_os_ParcelFileDescriptor(JNIEnv *env);
extern int register_android_os_Power(JNIEnv *env);
extern int register_android_os_StatFs(JNIEnv *env);
extern int register_android_os_SystemProperties(JNIEnv *env);
extern int register_android_os_Hardware(JNIEnv* env);
extern int register_android_os_SystemClock(JNIEnv* env);
extern int register_android_os_FileObserver(JNIEnv *env);
extern int register_android_os_FileUtils(JNIEnv *env);
extern int register_android_os_UEventObserver(JNIEnv* env);
extern int register_android_os_MemoryFile(JNIEnv* env);
extern int register_android_net_LocalSocketImpl(JNIEnv* env);
extern int register_android_net_NetworkUtils(JNIEnv* env);
extern int register_android_net_wifi_WifiManager(JNIEnv* env);
extern int register_android_security_Md5MessageDigest(JNIEnv *env);
extern int register_android_text_AndroidCharacter(JNIEnv *env);
extern int register_android_text_KeyCharacterMap(JNIEnv *env);
extern int register_android_opengl_classes(JNIEnv *env);
extern int register_android_bluetooth_HeadsetBase(JNIEnv* env);
extern int register_android_bluetooth_BluetoothAudioGateway(JNIEnv* env);
extern int register_android_bluetooth_BluetoothSocket(JNIEnv *env);
extern int register_android_bluetooth_ScoSocket(JNIEnv *env);
extern int register_android_server_BluetoothService(JNIEnv* env);
extern int register_android_server_BluetoothEventLoop(JNIEnv *env);
extern int register_android_server_BluetoothA2dpService(JNIEnv* env);
extern int register_android_ddm_DdmHandleNativeHeap(JNIEnv *env);
extern int register_com_android_internal_os_ZygoteInit(JNIEnv* env);
extern int register_android_util_Base64(JNIEnv* env);
extern int register_android_location_GpsLocationProvider(JNIEnv* env);
extern int register_android_backup_BackupDataInput(JNIEnv *env);
extern int register_android_backup_BackupDataOutput(JNIEnv *env);
extern int register_android_backup_FileBackupHelperBase(JNIEnv *env);
extern int register_android_backup_BackupHelperDispatcher(JNIEnv *env);
}

using namespace android;

#define REG_JNI(name)      { name, #name }
struct RegJNIRec {
    int (*mProc)(JNIEnv*);
    const char* mName;
};

static int register_jni_procs(const RegJNIRec array[], size_t count, JNIEnv* env)
{
    for (size_t i = 0; i < count; i++) {
        if (array[i].mProc(env) < 0) {
            LOGE("----------!!! %s failed to load\n", array[i].mName);
            return -1;
        }
    }
    return 0;
}

/**
 * This will be called by dalvik after System.loadLibrary()
 * The rest of this file is unused, because the old libandroid_runtime
 * from donut will be used
 */
__attribute__ ((visibility("default")))
jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    LOGI("Loaded libandroid_runtime_eclair\n");
    JNIEnv* env = NULL;
    jint result = -1;

    if (vm->GetEnv((void**) &env, JNI_VERSION_1_4) != JNI_OK) {
        LOGE("ERROR: GetEnv failed\n");
        goto bail;
    }

    assert(env != NULL);
    static const RegJNIRec regOverwriteJNI[] = {
        REG_JNI(register_android_database_CursorWindow),
        REG_JNI(register_android_database_SQLiteDatabase),
        REG_JNI(register_android_database_SQLiteDebug),
        REG_JNI(register_android_database_SQLiteProgram),
        REG_JNI(register_android_database_SQLiteQuery),
        REG_JNI(register_android_database_SQLiteStatement),
        REG_JNI(register_android_os_Process),
        REG_JNI(register_android_os_MemoryFile),
        REG_JNI(register_android_net_NetworkUtils),
        REG_JNI(register_android_graphics_Typeface)
        };

    if(register_jni_procs(regOverwriteJNI, NELEM(regOverwriteJNI), env))
        goto bail;

    /* success -- return valid version number */
    result = JNI_VERSION_1_4;

bail:
    printf("Leaving JNI_OnLoad (result=0x%x)\n", result);
    return result;
}
