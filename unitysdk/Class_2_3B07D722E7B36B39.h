#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/VisibilityTrack_Enum_3_A92A5D49790A47BD.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_3B07D722E7B36B39_METHOD_2_071951CD5266DF8E_OFFSET UNITYSDK_OFFSET(0x82242E0)
#define CLASS_2_3B07D722E7B36B39_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x82242F0)
#define CLASS_2_3B07D722E7B36B39_METHOD_2_401E99765D1F24DB_OFFSET UNITYSDK_OFFSET(0x82242C0)
#define CLASS_2_3B07D722E7B36B39_METHOD_2_80E810A007593AFA_OFFSET UNITYSDK_OFFSET(0x82241D0)
#define CLASS_2_3B07D722E7B36B39_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x82242D0)
#define CLASS_2_3B07D722E7B36B39_METHOD_2_F9EFFEF8189AD312_OFFSET UNITYSDK_OFFSET(0x8223DA0)
#define CLASS_2_3B07D722E7B36B39_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x8223B60)
#define CLASS_2_3B07D722E7B36B39_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x8223E20)
#define CLASS_2_3B07D722E7B36B39__CTOR_OFFSET UNITYSDK_OFFSET(0x82241C0)

inline static constexpr unsigned int Class_2_3B07D722E7B36B39_TypeDefinitionIndex = 75687;

class Class_2_3B07D722E7B36B39 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x10
	::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD Field_2_0; // 0x18
	::System::Boolean Field_2_3; // 0x1C
	::System::Boolean Field_2_1; // 0x1D
	::System::Boolean Field_2_4; // 0x1E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B07D722E7B36B39__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3B07D722E7B36B39_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3B07D722E7B36B39_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_3B07D722E7B36B39*> Method_2_80E810A007593AFA(::UnityEngine::Playables::PlayableGraph a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_3B07D722E7B36B39*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3B07D722E7B36B39_METHOD_2_80E810A007593AFA_OFFSET))(a1, a2);
	}

	::System::Void Method_2_401E99765D1F24DB(::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD))((::PBYTE)hIl2Cpp + CLASS_2_3B07D722E7B36B39_METHOD_2_401E99765D1F24DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3B07D722E7B36B39_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD Method_2_071951CD5266DF8E()
	{
		return ((::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B07D722E7B36B39_METHOD_2_071951CD5266DF8E_OFFSET))(this);
	}

	::System::Void Method_2_F9EFFEF8189AD312(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3B07D722E7B36B39_METHOD_2_F9EFFEF8189AD312_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3B07D722E7B36B39_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
