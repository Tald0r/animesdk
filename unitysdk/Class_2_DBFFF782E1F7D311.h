#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DBFFF782E1F7D311_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x6AAF180)
#define CLASS_2_DBFFF782E1F7D311_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x6AAF170)
#define CLASS_2_DBFFF782E1F7D311_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x6AAF060)
#define CLASS_2_DBFFF782E1F7D311_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x6AAEDB0)
#define CLASS_2_DBFFF782E1F7D311__CTOR_OFFSET UNITYSDK_OFFSET(0x6AAF160)

inline static constexpr unsigned int Class_2_DBFFF782E1F7D311_TypeDefinitionIndex = 65557;

class Class_2_DBFFF782E1F7D311 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x10
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_5; // 0x20
	::System::Boolean Field_2_2; // 0x28
	::System::Boolean Field_2_4; // 0x29
	::System::Boolean Field_2_3; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBFFF782E1F7D311__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DBFFF782E1F7D311_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_DBFFF782E1F7D311_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DBFFF782E1F7D311_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_DBFFF782E1F7D311_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
