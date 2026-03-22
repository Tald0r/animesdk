#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_2A2DEBC0A345E8D1_METHOD_2_4D8FF1B434C1F084_OFFSET UNITYSDK_OFFSET(0x8863610)
#define CLASS_2_2A2DEBC0A345E8D1_METHOD_2_8B1528CC6196A3BF_OFFSET UNITYSDK_OFFSET(0x8863490)
#define CLASS_2_2A2DEBC0A345E8D1_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x8863840)
#define CLASS_2_2A2DEBC0A345E8D1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x88630D0)
#define CLASS_2_2A2DEBC0A345E8D1__CCTOR_OFFSET UNITYSDK_OFFSET(0x8863830)
#define CLASS_2_2A2DEBC0A345E8D1__CTOR_OFFSET UNITYSDK_OFFSET(0x8863820)

inline static constexpr unsigned int Class_2_2A2DEBC0A345E8D1_TypeDefinitionIndex = 38437;

class Class_2_2A2DEBC0A345E8D1 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::System::UInt64* StaticGet_Field_2_3()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2A2DEBC0A345E8D1_TypeDefinitionIndex)->GetStaticField(0xF140);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2A2DEBC0A345E8D1_TypeDefinitionIndex)->GetStaticField(0xF148);
	}
	::UnityEngine::Playables::PlayableDirector* Field_2_5; // 0x10
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::System::Boolean Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A2DEBC0A345E8D1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2A2DEBC0A345E8D1__CCTOR_OFFSET))();
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2A2DEBC0A345E8D1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_8B1528CC6196A3BF(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2A2DEBC0A345E8D1_METHOD_2_8B1528CC6196A3BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2A2DEBC0A345E8D1_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_4D8FF1B434C1F084(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_2A2DEBC0A345E8D1_METHOD_2_4D8FF1B434C1F084_OFFSET))(this, a1);
	}
};
