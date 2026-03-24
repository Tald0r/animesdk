#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_4EE0CEC6F7951ADF_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xA8E1C60)
#define CLASS_2_4EE0CEC6F7951ADF_METHOD_2_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0xA8E1B50)
#define CLASS_2_4EE0CEC6F7951ADF_METHOD_2_6349F8BECC5FCFA0_OFFSET UNITYSDK_OFFSET(0xA8E1C80)
#define CLASS_2_4EE0CEC6F7951ADF_METHOD_2_8652DE0774915A40_OFFSET UNITYSDK_OFFSET(0xA8E1C70)
#define CLASS_2_4EE0CEC6F7951ADF_METHOD_2_9D9341B8D6B6663E_OFFSET UNITYSDK_OFFSET(0xA8E1C90)
#define CLASS_2_4EE0CEC6F7951ADF_METHOD_2_AA6DFF23813B1E6C_OFFSET UNITYSDK_OFFSET(0xA8E10B0)
#define CLASS_2_4EE0CEC6F7951ADF_METHOD_2_BBEE8C0801828E89_OFFSET UNITYSDK_OFFSET(0xA8E1EC0)
#define CLASS_2_4EE0CEC6F7951ADF_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xA8E1C50)
#define CLASS_2_4EE0CEC6F7951ADF_METHOD_2_F6C10DB4374245F7_OFFSET UNITYSDK_OFFSET(0xA8E1C40)
#define CLASS_2_4EE0CEC6F7951ADF_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA8E0E60)
#define CLASS_2_4EE0CEC6F7951ADF_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA8E1240)
#define CLASS_2_4EE0CEC6F7951ADF__CTOR_OFFSET UNITYSDK_OFFSET(0xA8E1B40)

inline static constexpr unsigned int Class_2_4EE0CEC6F7951ADF_TypeDefinitionIndex = 49976;

class Class_2_4EE0CEC6F7951ADF : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Animation* Field_2_2; // 0x10
	::UnityEngine::ParticleSystem* Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF_METHOD_2_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_2_F6C10DB4374245F7(::UnityEngine::Animation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF_METHOD_2_F6C10DB4374245F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA6DFF23813B1E6C(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF_METHOD_2_AA6DFF23813B1E6C_OFFSET))(this, a1);
	}

	::UnityEngine::Animation* Method_2_8652DE0774915A40()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF_METHOD_2_8652DE0774915A40_OFFSET))(this);
	}

	::UnityEngine::ParticleSystem* Method_2_6349F8BECC5FCFA0()
	{
		return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF_METHOD_2_6349F8BECC5FCFA0_OFFSET))(this);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_4EE0CEC6F7951ADF*> Method_2_9D9341B8D6B6663E(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::ParticleSystem* a2)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_4EE0CEC6F7951ADF*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF_METHOD_2_9D9341B8D6B6663E_OFFSET))(a1, a2);
	}

	::System::Void Method_2_BBEE8C0801828E89(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_4EE0CEC6F7951ADF_METHOD_2_BBEE8C0801828E89_OFFSET))(this, a1);
	}
};
