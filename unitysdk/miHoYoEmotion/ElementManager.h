#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace miHoYoEmotion { class BaseEmoAnimation; }
namespace miHoYoEmotion { class BaseShapeData; }
namespace miHoYoEmotion { class ElementManager_BaseShapeRuntime; }
namespace miHoYoEmotion { class EmoStateManager; }

#define MIHOYOEMOTION_ELEMENTMANAGER_ADDSHAPERUNTIME_OFFSET UNITYSDK_OFFSET(0x18AE3990)
#define MIHOYOEMOTION_ELEMENTMANAGER_GET_EMOANIM_OFFSET UNITYSDK_OFFSET(0x18AE5390)
#define MIHOYOEMOTION_ELEMENTMANAGER_GET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x18AE5330)
#define MIHOYOEMOTION_ELEMENTMANAGER_GET_SHAPEDATA_OFFSET UNITYSDK_OFFSET(0x18AE5370)
#define MIHOYOEMOTION_ELEMENTMANAGER_GET_STATEMGR_OFFSET UNITYSDK_OFFSET(0x18AE53A0)
#define MIHOYOEMOTION_ELEMENTMANAGER_GET_TICKABLE_OFFSET UNITYSDK_OFFSET(0x18AE5350)
#define MIHOYOEMOTION_ELEMENTMANAGER_INITEMOANIM_OFFSET UNITYSDK_OFFSET(0x18AE34B0)
#define MIHOYOEMOTION_ELEMENTMANAGER_INITSTATEMGR_OFFSET UNITYSDK_OFFSET(0x18AE53C0)
#define MIHOYOEMOTION_ELEMENTMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18AE5600)
#define MIHOYOEMOTION_ELEMENTMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18AE55C0)
#define MIHOYOEMOTION_ELEMENTMANAGER_SET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x18AE5340)
#define MIHOYOEMOTION_ELEMENTMANAGER_SET_SHAPEDATA_OFFSET UNITYSDK_OFFSET(0x18AE5380)
#define MIHOYOEMOTION_ELEMENTMANAGER_SET_TICKABLE_OFFSET UNITYSDK_OFFSET(0x18AE5360)
#define MIHOYOEMOTION_ELEMENTMANAGER_SET_TIMECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x18AE53B0)
#define MIHOYOEMOTION_ELEMENTMANAGER_START_OFFSET UNITYSDK_OFFSET(0x18AE03A0)
#define MIHOYOEMOTION_ELEMENTMANAGER_UPDATESHAPEDATA_OFFSET UNITYSDK_OFFSET(0x18AE34F0)
#define MIHOYOEMOTION_ELEMENTMANAGER_UPDATESHAPERUNTIME_OFFSET UNITYSDK_OFFSET(0x18AE38F0)
#define MIHOYOEMOTION_ELEMENTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18AE5640)
#define MIHOYOEMOTION_ELEMENTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE4010)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ElementManager_TypeDefinitionIndex = 36145;

	class ElementManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::miHoYoEmotion::BaseShapeData* _shapeData; // 0x18
		::System::Boolean _previewMode_k__BackingField; // 0x20
		::System::Boolean _tickable_k__BackingField; // 0x21
		::miHoYoEmotion::BaseEmoAnimation* _emoAnim; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::miHoYoEmotion::ElementManager_BaseShapeRuntime*>* _shapeRuntimeCache; // 0x30
		::miHoYoEmotion::EmoStateManager* _stateMgr; // 0x38
		::System::Double _timeCheckPoint; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_previewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_GET_PREVIEWMODE_OFFSET))(this);
		}

		::System::Void set_previewMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_SET_PREVIEWMODE_OFFSET))(this, value);
		}

		::System::Boolean get_tickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_GET_TICKABLE_OFFSET))(this);
		}

		::System::Void set_tickable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_SET_TICKABLE_OFFSET))(this, value);
		}

		::miHoYoEmotion::BaseShapeData* get_shapeData()
		{
			return ((::miHoYoEmotion::BaseShapeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_GET_SHAPEDATA_OFFSET))(this);
		}

		::System::Void set_shapeData(::miHoYoEmotion::BaseShapeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShapeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_SET_SHAPEDATA_OFFSET))(this, value);
		}

		::miHoYoEmotion::BaseEmoAnimation* get_emoAnim()
		{
			return ((::miHoYoEmotion::BaseEmoAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_GET_EMOANIM_OFFSET))(this);
		}

		::System::Void AddShapeRuntime(::System::String* name, ::miHoYoEmotion::ElementManager_BaseShapeRuntime* shapeRuntime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::miHoYoEmotion::ElementManager_BaseShapeRuntime*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_ADDSHAPERUNTIME_OFFSET))(this, name, shapeRuntime);
		}

		::System::Void UpdateShapeRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_UPDATESHAPERUNTIME_OFFSET))(this);
		}

		::miHoYoEmotion::EmoStateManager* get_stateMgr()
		{
			return ((::miHoYoEmotion::EmoStateManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_GET_STATEMGR_OFFSET))(this);
		}

		::System::Void set_timeCheckPoint(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_SET_TIMECHECKPOINT_OFFSET))(this, value);
		}

		::System::Void InitEmoAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_INITEMOANIM_OFFSET))(this);
		}

		::System::Void InitStateMgr()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_INITSTATEMGR_OFFSET))(this);
		}

		::System::Void UpdateShapeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_UPDATESHAPEDATA_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_UPDATE_OFFSET))(this);
		}
	};
}
