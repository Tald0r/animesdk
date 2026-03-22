#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ANIM_CTRLER_PARAMS_TYPE.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x67CE570)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x67CE5D0)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x67CE5E0)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x67CDF90)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x67CE490)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_D148B5D9B2EC21BB_OFFSET UNITYSDK_OFFSET(0x67CDE60)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x67CE500)
#define MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x67CE650)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EntityAnimatorParamMarker_TypeDefinitionIndex = 45230;

	class EntityAnimatorParamMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* EntityTag; // 0x28
		::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE AnimCtrlParamType; // 0x30
		::System::String* paramName; // 0x38
		::System::Boolean booleanValue; // 0x40
		::System::Int32 intValue; // 0x44
		::System::Single floatValue; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_D148B5D9B2EC21BB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_D148B5D9B2EC21BB_OFFSET))(this);
		}

		::System::Void Method_4_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}

		::System::Void Method_4_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYANIMATORPARAMMARKER_METHOD_4_19FB5FBEA9EA66CD_OFFSET))(this);
		}
	};
}
