#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/LOD.h"
#include "unitysdk/UnityEngine/LODFadeMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_LODGROUP_FORCELODGROUPUPDATE_OFFSET UNITYSDK_OFFSET(0x1A112750)
#define UNITYENGINE_LODGROUP_FORCELOD_OFFSET UNITYSDK_OFFSET(0x1A112700)
#define UNITYENGINE_LODGROUP_GETCONFIGDISABLECULLED_OFFSET UNITYSDK_OFFSET(0x1A112760)
#define UNITYENGINE_LODGROUP_GETCONFIGREGARDLOD0ASLOD1_OFFSET UNITYSDK_OFFSET(0x1A112780)
#define UNITYENGINE_LODGROUP_GETLODSNONALLOC_OFFSET UNITYSDK_OFFSET(0x1A1126D0)
#define UNITYENGINE_LODGROUP_GETLODS_OFFSET UNITYSDK_OFFSET(0x1A1126C0)
#define UNITYENGINE_LODGROUP_GET_ANIMATECROSSFADING_OFFSET UNITYSDK_OFFSET(0x1A112630)
#define UNITYENGINE_LODGROUP_GET_CROSSFADEANIMATIONDURATION_OFFSET UNITYSDK_OFFSET(0x1A112720)
#define UNITYENGINE_LODGROUP_GET_DISABLECULLED_OFFSET UNITYSDK_OFFSET(0x1A112670)
#define UNITYENGINE_LODGROUP_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A112650)
#define UNITYENGINE_LODGROUP_GET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x1A112610)
#define UNITYENGINE_LODGROUP_GET_LOCALREFERENCEPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A112550)
#define UNITYENGINE_LODGROUP_GET_LOCALREFERENCEPOINT_OFFSET UNITYSDK_OFFSET(0x1A112500)
#define UNITYENGINE_LODGROUP_GET_LODCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1125A0)
#define UNITYENGINE_LODGROUP_GET_NOCULLEDUSEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A1125D0)
#define UNITYENGINE_LODGROUP_GET_REGARDLOD0ASLOD1_OFFSET UNITYSDK_OFFSET(0x1A112690)
#define UNITYENGINE_LODGROUP_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A112580)
#define UNITYENGINE_LODGROUP_GET_STARTLOD_OFFSET UNITYSDK_OFFSET(0x1A1125F0)
#define UNITYENGINE_LODGROUP_GET_USEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A1125B0)
#define UNITYENGINE_LODGROUP_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A1126B0)
#define UNITYENGINE_LODGROUP_SETCONFIGDISABLECULLED_OFFSET UNITYSDK_OFFSET(0x1A112770)
#define UNITYENGINE_LODGROUP_SETCONFIGREGARDLOD0ASLOD1_OFFSET UNITYSDK_OFFSET(0x1A112790)
#define UNITYENGINE_LODGROUP_SETLODGROUPUPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1A112740)
#define UNITYENGINE_LODGROUP_SETLODS_1_OFFSET UNITYSDK_OFFSET(0x1A1126F0)
#define UNITYENGINE_LODGROUP_SETLODS_OFFSET UNITYSDK_OFFSET(0x1A1126E0)
#define UNITYENGINE_LODGROUP_SETVALIDLODLEVELMASK_OFFSET UNITYSDK_OFFSET(0x1A112710)
#define UNITYENGINE_LODGROUP_SET_ANIMATECROSSFADING_OFFSET UNITYSDK_OFFSET(0x1A112640)
#define UNITYENGINE_LODGROUP_SET_CROSSFADEANIMATIONDURATION_OFFSET UNITYSDK_OFFSET(0x1A112730)
#define UNITYENGINE_LODGROUP_SET_DISABLECULLED_OFFSET UNITYSDK_OFFSET(0x1A112680)
#define UNITYENGINE_LODGROUP_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A112660)
#define UNITYENGINE_LODGROUP_SET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x1A112620)
#define UNITYENGINE_LODGROUP_SET_LOCALREFERENCEPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A112570)
#define UNITYENGINE_LODGROUP_SET_LOCALREFERENCEPOINT_OFFSET UNITYSDK_OFFSET(0x1A112560)
#define UNITYENGINE_LODGROUP_SET_NOCULLEDUSEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A1125E0)
#define UNITYENGINE_LODGROUP_SET_REGARDLOD0ASLOD1_OFFSET UNITYSDK_OFFSET(0x1A1126A0)
#define UNITYENGINE_LODGROUP_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A112590)
#define UNITYENGINE_LODGROUP_SET_STARTLOD_OFFSET UNITYSDK_OFFSET(0x1A112600)
#define UNITYENGINE_LODGROUP_SET_USEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A1125C0)
#define UNITYENGINE_LODGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1127A0)

namespace UnityEngine
{
	inline static constexpr unsigned int LODGroup_TypeDefinitionIndex = 5258;

	class LODGroup : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_localReferencePoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_LOCALREFERENCEPOINT_OFFSET))(this);
		}

		::System::Void set_localReferencePoint(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_LOCALREFERENCEPOINT_OFFSET))(this, value);
		}

		::System::Single get_size()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_SIZE_OFFSET))(this, value);
		}

		::System::Int32 get_lodCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_LODCOUNT_OFFSET))(this);
		}

		::System::Boolean get_useDistance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_USEDISTANCE_OFFSET))(this);
		}

		::System::Void set_useDistance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_USEDISTANCE_OFFSET))(this, value);
		}

		::System::Boolean get_noCulledUseDistance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_NOCULLEDUSEDISTANCE_OFFSET))(this);
		}

		::System::Void set_noCulledUseDistance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_NOCULLEDUSEDISTANCE_OFFSET))(this, value);
		}

		::System::Int32 get_startLOD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_STARTLOD_OFFSET))(this);
		}

		::System::Void set_startLOD(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_STARTLOD_OFFSET))(this, value);
		}

		::UnityEngine::LODFadeMode get_fadeMode()
		{
			return ((::UnityEngine::LODFadeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_FADEMODE_OFFSET))(this);
		}

		::System::Void set_fadeMode(::UnityEngine::LODFadeMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LODFadeMode))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_FADEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_animateCrossFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_ANIMATECROSSFADING_OFFSET))(this);
		}

		::System::Void set_animateCrossFading(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_ANIMATECROSSFADING_OFFSET))(this, value);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_disableCulled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_DISABLECULLED_OFFSET))(this);
		}

		::System::Void set_disableCulled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_DISABLECULLED_OFFSET))(this, value);
		}

		::System::Boolean get_regardLod0AsLod1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_REGARDLOD0ASLOD1_OFFSET))(this);
		}

		::System::Void set_regardLod0AsLod1(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_REGARDLOD0ASLOD1_OFFSET))(this, value);
		}

		::System::Void RecalculateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_RECALCULATEBOUNDS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::LOD>* GetLODs()
		{
			return ((::Il2CppArray<::UnityEngine::LOD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GETLODS_OFFSET))(this);
		}

		::System::Void GetLODsNonAlloc(::System::Collections::Generic::List_1<::UnityEngine::LOD>* lods)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::LOD>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GETLODSNONALLOC_OFFSET))(this, lods);
		}

		::System::Void SetLODS(::Il2CppArray<::UnityEngine::LOD>* lods)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::LOD>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SETLODS_OFFSET))(this, lods);
		}

		::System::Void SetLODs_1(::Il2CppArray<::UnityEngine::LOD>* lods)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::LOD>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SETLODS_1_OFFSET))(this, lods);
		}

		::System::Void ForceLOD(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_FORCELOD_OFFSET))(this, index);
		}

		::System::Void SetValidLODLevelMask(::System::Byte mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SETVALIDLODLEVELMASK_OFFSET))(this, mask);
		}

		static ::System::Single get_crossFadeAnimationDuration()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_CROSSFADEANIMATIONDURATION_OFFSET))();
		}

		static ::System::Void set_crossFadeAnimationDuration(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_CROSSFADEANIMATIONDURATION_OFFSET))(value);
		}

		static ::System::Void SetLODGroupUpdateInterval(::System::Single interval)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SETLODGROUPUPDATEINTERVAL_OFFSET))(interval);
		}

		static ::System::Void ForceLODGroupUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_FORCELODGROUPUPDATE_OFFSET))();
		}

		static ::System::Boolean GetConfigDisableCulled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GETCONFIGDISABLECULLED_OFFSET))();
		}

		static ::System::Void SetConfigDisableCulled(::System::Boolean val)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SETCONFIGDISABLECULLED_OFFSET))(val);
		}

		static ::System::Boolean GetConfigRegardLod0AsLod1()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GETCONFIGREGARDLOD0ASLOD1_OFFSET))();
		}

		static ::System::Void SetConfigRegardLod0AsLod1(::System::Boolean val)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SETCONFIGREGARDLOD0ASLOD1_OFFSET))(val);
		}

		::System::Void get_localReferencePoint_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_GET_LOCALREFERENCEPOINT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_localReferencePoint_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_SET_LOCALREFERENCEPOINT_INJECTED_OFFSET))(this, value);
		}
	};
}
