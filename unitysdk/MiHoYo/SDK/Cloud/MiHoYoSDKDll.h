#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK { class InvokeResponseModel; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDACTION_OFFSET UNITYSDK_OFFSET(0x181EDFA0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDCALLBACK_OFFSET UNITYSDK_OFFSET(0x181EEE60)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDINVORERETURNCALLBACK_OFFSET UNITYSDK_OFFSET(0x181EFDD0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x181F1300)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x181F1250)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x181EE100)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKFUNCTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x181F0290)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKFUNCTIONINDEX_OFFSET UNITYSDK_OFFSET(0x181EF920)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKPLATFORM_OFFSET UNITYSDK_OFFSET(0x181F2090)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKWATERMARKPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x181F1C60)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_CLIPBOARD_DATA_OFFSET UNITYSDK_OFFSET(0x181F1BC0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_DATA_OFFSET UNITYSDK_OFFSET(0x181F1900)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SAVE_IMAGE_OFFSET UNITYSDK_OFFSET(0x181F1AA0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_DATA_OFFSET UNITYSDK_OFFSET(0x181F19D0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_GAME_CONTROL_IMU_ENABLE_OFFSET UNITYSDK_OFFSET(0x181F1C50)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_LAUNCH_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x181F18F0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_TRANSMIT_DATA_OFFSET UNITYSDK_OFFSET(0x181F1B30)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_GETCMDLINEMAP_OFFSET UNITYSDK_OFFSET(0x181EE1A0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x181F1120)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x181EF9B0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET UNITYSDK_OFFSET(0x181F1B90)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x181F1750)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x181F1820)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_MIDDLEFUNCCHECK_OFFSET UNITYSDK_OFFSET(0x181EEF20)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x181EE4C0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONGETINVOKERESPONSE_OFFSET UNITYSDK_OFFSET(0x181EFF90)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONINITRESPONSE_OFFSET UNITYSDK_OFFSET(0x181EFE90)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKEFUNCTION_OFFSET UNITYSDK_OFFSET(0x181EF590)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x181EF3B0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SHARE_SHARE_OFFSET UNITYSDK_OFFSET(0x181F2000)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_START_OFFSET UNITYSDK_OFFSET(0x181EE4B0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x181EE4D0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x181F1F50)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x181F1EA0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WHITEFUNCCHECK_OFFSET UNITYSDK_OFFSET(0x181EE7B0)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x181F2180)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x181F2160)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 18523;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA350);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>** StaticGet_invokeReturnCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA358);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_actionList()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA360);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_whiteFuncList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA368);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA370);
		}
		static ::System::Action_1<::System::String*>** StaticGet_initCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA378);
		}
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA380);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_cmdLineMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA388);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>** StaticGet_invokeCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA390);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA398);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_middleFuncList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xA3A0);
		}
		static ::System::Int32* StaticGet_shareCallbackIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4510);
		}
		static ::System::Int32* StaticGet_index()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4514);
		}
		static ::System::Int32* StaticGet_TimeoutCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4518);
		}
		static ::System::Int32* StaticGet_loginCallbackIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x451C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL__CCTOR_OFFSET))();
		}

		static ::System::Void AddAction(::System::Action* job)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDACTION_OFFSET))(job);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_UPDATE_OFFSET))(this);
		}

		static ::System::Boolean WhiteFuncCheck(::System::String* funcName, ::System::String*& r, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WHITEFUNCCHECK_OFFSET))(funcName, r, args, callback);
		}

		static ::System::Void MiddleFuncCheck(::System::String* funcName, ::System::String* args)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_MIDDLEFUNCCHECK_OFFSET))(funcName, args);
		}

		static ::System::String* SDKInvoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKE_OFFSET))(funcName, args, callback);
		}

		static ::System::String* SDKInvokeFunction(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SDKINVOKEFUNCTION_OFFSET))(funcName, args, callback);
		}

		static ::System::String* InvokeReturn(::System::String* funcName, ::System::String* args)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INVOKERETURN_OFFSET))(funcName, args);
		}

		static ::System::Void OnInitResponse(::System::String* response)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONINITRESPONSE_OFFSET))(response);
		}

		static ::System::Void OnGetInvokeResponse(::System::String* response)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ONGETINVOKERESPONSE_OFFSET))(response);
		}

		static ::System::Void AddCallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDCALLBACK_OFFSET))(callback);
		}

		static ::System::Void AddInvoreReturnCallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ADDINVORERETURNCALLBACK_OFFSET))(callback);
		}

		static ::System::Void CheckFunctionIndex(::System::String* funcName, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKFUNCTIONINDEX_OFFSET))(funcName, index);
		}

		static ::System::Boolean CheckFunctionCallback(::MiHoYo::SDK::InvokeResponseModel* resp)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::InvokeResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKFUNCTIONCALLBACK_OFFSET))(resp);
		}

		::System::Void GetCmdLineMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_GETCMDLINEMAP_OFFSET))(this);
		}

		static ::System::Void Init(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_INIT_OFFSET))(callback);
		}

		static ::System::String* all_set_env(::System::String* env)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET))(env);
		}

		static ::System::String* all_set_env_and_gamebiz(::System::String* dataString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET))(dataString);
		}

		static ::System::String* login_enter_game(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET))(jsonString);
		}

		static ::System::String* login_will_enter_game(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET))(jsonString);
		}

		static ::System::String* cloud_set_launch_parameters(::System::String* parameters)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_LAUNCH_PARAMETERS_OFFSET))(parameters);
		}

		static ::System::String* cloud_get_data(::System::String* key, ::System::Int32 callbackIndex)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_DATA_OFFSET))(key, callbackIndex);
		}

		static ::System::String* cloud_set_data(::System::String* saveData)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_DATA_OFFSET))(saveData);
		}

		static ::System::String* cloud_save_image(::System::String* jsonString, ::System::Int32 callbackIndex)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SAVE_IMAGE_OFFSET))(jsonString, callbackIndex);
		}

		static ::System::String* cloud_transmit_data(::System::String* data, ::System::Int32 callbackIndex)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_TRANSMIT_DATA_OFFSET))(data, callbackIndex);
		}

		static ::System::String* launch_get_disk_free_space()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET))();
		}

		static ::System::String* cloud_get_clipboard_data(::System::String* key, ::System::Int32 callbackIndex)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_GET_CLIPBOARD_DATA_OFFSET))(key, callbackIndex);
		}

		static ::System::String* cloud_set_game_control_imu_enable(::System::String* enable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CLOUD_SET_GAME_CONTROL_IMU_ENABLE_OFFSET))(enable);
		}

		static ::System::Boolean CheckWatermarkPlatformType()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKWATERMARKPLATFORMTYPE_OFFSET))();
		}

		static ::System::String* watermark_set_enable(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET))(args);
		}

		static ::System::String* watermark_set_config(::System::String* jsonStrings)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET))(jsonStrings);
		}

		static ::System::String* share_share(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_SHARE_SHARE_OFFSET))(jsonString);
		}

		static ::System::Void CheckPlatform()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL_CHECKPLATFORM_OFFSET))();
		}
	};
}
