#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_35ED954145425B5D_Class_3_50D343C44D28BEFB_7;
namespace MoleMole::Cameras { class AnimationVirtualCamera; }
namespace System { class Object; }

#define CLASS_2_35ED954145425B5D_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x6AC6030)
#define CLASS_2_35ED954145425B5D_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x6AC6020)
#define CLASS_2_35ED954145425B5D_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x6AC6010)
#define CLASS_2_35ED954145425B5D_METHOD_2_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0x6AC5F30)
#define CLASS_2_35ED954145425B5D_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x6AC5160)
#define CLASS_2_35ED954145425B5D_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x6AC51D0)
#define CLASS_2_35ED954145425B5D_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x6AC5270)
#define CLASS_2_35ED954145425B5D__CTOR_OFFSET UNITYSDK_OFFSET(0x6AC6000)

inline static constexpr unsigned int Class_2_35ED954145425B5D_TypeDefinitionIndex = 66633;

class Class_2_35ED954145425B5D : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::Class_2_35ED954145425B5D_Class_3_50D343C44D28BEFB_7** StaticGet_Field_2_0()
	{
		return (::Class_2_35ED954145425B5D_Class_3_50D343C44D28BEFB_7**)Il2CppClass::FromTypeDefinitionIndex(Class_2_35ED954145425B5D_TypeDefinitionIndex)->GetStaticField(0x49270);
	}
	::MoleMole::Cameras::AnimationVirtualCamera* Field_2_1; // 0x10
	::System::Boolean Field_2_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_E7CD24A54D7ADF3B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D_METHOD_2_E7CD24A54D7ADF3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
