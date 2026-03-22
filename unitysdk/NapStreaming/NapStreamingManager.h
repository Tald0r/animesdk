#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace NapStreaming { class NapStreamingData; }
namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define NAPSTREAMING_NAPSTREAMINGMANAGER_ADDSTREAMINGPOSPROVIDER_OFFSET UNITYSDK_OFFSET(0xA1177F0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_APPLYSTREAMINGLAYERNEEDLOAD_OFFSET UNITYSDK_OFFSET(0xA116E70)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA116A40)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_CHECKISSTREAMINGDONE_OFFSET UNITYSDK_OFFSET(0xA119C00)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0xA1192F0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_FORCEUPDATESTREAMING_OFFSET UNITYSDK_OFFSET(0xA118200)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGCOSTTIME_OFFSET UNITYSDK_OFFSET(0xA1169E0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGSUPPORT_OFFSET UNITYSDK_OFFSET(0xA116910)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GET_ININITLOADING_OFFSET UNITYSDK_OFFSET(0xA118BC0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GET_INSTREAMINGSCENE_OFFSET UNITYSDK_OFFSET(0xA118B00)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA11A520)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0xA119170)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_LOADINITASSET_OFFSET UNITYSDK_OFFSET(0xA118D90)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA11A590)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_REGISTERORRUNAFTERLOADACTION_OFFSET UNITYSDK_OFFSET(0xA118860)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_REMOVESTREAMINGPOSPROVIDER_OFFSET UNITYSDK_OFFSET(0xA117A10)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPOI_OFFSET UNITYSDK_OFFSET(0xA117670)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPVS_OFFSET UNITYSDK_OFFSET(0xA1174F0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGCOSTTIME_OFFSET UNITYSDK_OFFSET(0xA116970)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGSUPPORT_OFFSET UNITYSDK_OFFSET(0xA1168A0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGLAYERNEEDLOAD_OFFSET UNITYSDK_OFFSET(0xA119500)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGOBJECTSVISIBLE_OFFSET UNITYSDK_OFFSET(0xA119980)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_STARTSTREAMING_OFFSET UNITYSDK_OFFSET(0xA118A80)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_START_OFFSET UNITYSDK_OFFSET(0xA117110)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0xA119370)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMINGBYMAINCAMERA_OFFSET UNITYSDK_OFFSET(0xA11A010)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMING_OFFSET UNITYSDK_OFFSET(0xA117ED0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA11A430)
#define NAPSTREAMING_NAPSTREAMINGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA11A960)
#define NAPSTREAMING_NAPSTREAMINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA11A820)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingManager_TypeDefinitionIndex = 48090;

	class NapStreamingManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::NapStreaming::NapStreamingManager** StaticGet_s_currentInstance()
		{
			return (::NapStreaming::NapStreamingManager**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x36440);
		}
		static ::System::Collections::Generic::Dictionary_2<::NapStreaming::StreamingLayer, ::System::Boolean>** StaticGet_ModifiedLayerLoadDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::NapStreaming::StreamingLayer, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x36448);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_ProviderTags()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x36450);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::NapStreamingManager_StreamingPosProvider*>** StaticGet_PosProviders()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::NapStreamingManager_StreamingPosProvider*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x36458);
		}
		static ::System::Single* StaticGet_HLODDistanceCoefficient()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD880);
		}
		static ::System::Int32* StaticGet_UnloadCurrentCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD884);
		}
		static ::System::Boolean* StaticGet_EnablePVS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD888);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD889);
		}
		static ::System::Single* StaticGet_LoadDistanceCoefficient()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD88C);
		}
		static ::System::Int32* StaticGet_UnloadBatchCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD890);
		}
		static ::UnityEngine::Vector3* StaticGet_ForceUpdateGap()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD894);
		}
		static ::System::Boolean* StaticGet_EnablePOI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD8A0);
		}
		static ::System::Boolean* StaticGet_OpenLowPrefab()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD8A1);
		}
		static ::System::Boolean* StaticGet_OpenLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD8A2);
		}
		static ::System::Boolean* StaticGet_UseLowPrefab()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD8A3);
		}
		// static const ::System::String* SceneLoadTag; // 0x0
		// static const ::System::Int32 InitTickCount = 0x3C; // 0x0
		::NapStreaming::NapStreamingData* data; // 0x18
		::System::Boolean showAll; // 0x20
		::NapStreaming::StreamingLayer selectLayer; // 0x24
		::System::Boolean checkVisible; // 0x28
		::System::Boolean checkPOI; // 0x29
		::System::Boolean forceStop; // 0x2A
		::System::Boolean inInitLoading; // 0x2B
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetRequestCompleteDel*>* startLoadedPaths; // 0x30
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* tickPaths; // 0x38
		::System::Action* initLoadCallback; // 0x40
		::UnityEngine::Camera* mainCamera; // 0x48
		::UnityEngine::Vector3 providerLastPos; // 0x50
		::System::Single exitProviderGap; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetLoggingSupport(::System::Boolean b)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGSUPPORT_OFFSET))(b);
		}

		static ::System::Boolean GetLoggingSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGSUPPORT_OFFSET))();
		}

		static ::System::Void SetLoggingCostTime(::System::UInt64 costTime)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGCOSTTIME_OFFSET))(costTime);
		}

		static ::System::UInt64 GetLoggingCostTime()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGCOSTTIME_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_START_OFFSET))(this);
		}

		static ::System::Void SetEnablePVS(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPVS_OFFSET))(enabled);
		}

		static ::System::Void SetEnablePOI(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPOI_OFFSET))(enabled);
		}

		static ::System::Void AddStreamingPosProvider(::System::String* tag, ::NapStreaming::NapStreamingManager_StreamingPosProvider* provider)
		{
			return ((::System::Void(*)(::System::String*, ::NapStreaming::NapStreamingManager_StreamingPosProvider*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_ADDSTREAMINGPOSPROVIDER_OFFSET))(tag, provider);
		}

		static ::System::Void RemoveStreamingPosProvider(::System::String* tag, ::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_REMOVESTREAMINGPOSPROVIDER_OFFSET))(tag, forceUpdate);
		}

		static ::System::Void ForceUpdateStreaming()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_FORCEUPDATESTREAMING_OFFSET))();
		}

		static ::System::Void RegisterOrRunAfterLoadAction(::System::Action* initLoadCallback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_REGISTERORRUNAFTERLOADACTION_OFFSET))(initLoadCallback);
		}

		static ::System::Boolean get_InStreamingScene()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GET_INSTREAMINGSCENE_OFFSET))();
		}

		static ::System::Boolean get_InInitLoading()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GET_ININITLOADING_OFFSET))();
		}

		static ::System::Void LoadInitAsset(::Foundation::AssetPath p, ::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_LOADINITASSET_OFFSET))(p, callback);
		}

		static ::Foundation::AssetRequestHandle LoadAssetAsync(::Foundation::AssetPath p, ::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_LOADASSETASYNC_OFFSET))(p, callback);
		}

		static ::System::Void DestroyObject(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_DESTROYOBJECT_OFFSET))(go);
		}

		static ::System::Void UnloadAsset(::Foundation::AssetRequestHandle h, ::System::Boolean immediate)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UNLOADASSET_OFFSET))(h, immediate);
		}

		static ::System::Void SetStreamingLayerNeedLoad(::NapStreaming::StreamingLayer layer, ::System::Boolean needLoad)
		{
			return ((::System::Void(*)(::NapStreaming::StreamingLayer, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGLAYERNEEDLOAD_OFFSET))(layer, needLoad);
		}

		static ::System::Void SetStreamingObjectsVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGOBJECTSVISIBLE_OFFSET))(isVisible);
		}

		::System::Void ApplyStreamingLayerNeedLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_APPLYSTREAMINGLAYERNEEDLOAD_OFFSET))(this);
		}

		::System::Void StartStreaming(::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_STARTSTREAMING_OFFSET))(this, cb);
		}

		::System::Void CheckIsStreamingDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_CHECKISSTREAMINGDONE_OFFSET))(this);
		}

		::System::Void UpdateStreamingByMainCamera(::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMINGBYMAINCAMERA_OFFSET))(this, forceUpdate);
		}

		::System::Void UpdateStreaming(::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMING_OFFSET))(this, forceUpdate);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_ONDESTROY_OFFSET))(this);
		}
	};
}
