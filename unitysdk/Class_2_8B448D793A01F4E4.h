#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_8B448D793A01F4E4_Class_0_16E7307DCC43CB2C_35;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_8B448D793A01F4E4_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x91B8BE0)
#define CLASS_2_8B448D793A01F4E4_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x91B8BD0)
#define CLASS_2_8B448D793A01F4E4_METHOD_2_7C8C42EDBECF6828_OFFSET UNITYSDK_OFFSET(0x91B8960)
#define CLASS_2_8B448D793A01F4E4_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x91B8BF0)
#define CLASS_2_8B448D793A01F4E4_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x91B8A60)
#define CLASS_2_8B448D793A01F4E4_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x91B8B10)
#define CLASS_2_8B448D793A01F4E4_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x91B7DF0)
#define CLASS_2_8B448D793A01F4E4__CTOR_OFFSET UNITYSDK_OFFSET(0x91B8BA0)

inline static constexpr unsigned int Class_2_8B448D793A01F4E4_TypeDefinitionIndex = 59298;

class Class_2_8B448D793A01F4E4 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* Field_2_2; // 0x10
	::System::String* Field_2_3; // 0x18
	::System::String* Field_2_4; // 0x20
	::Il2CppArray<::System::String*>* Field_2_5; // 0x28
	::System::String* Field_2_1; // 0x30
	::Class_2_8B448D793A01F4E4_Class_0_16E7307DCC43CB2C_35* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_7C8C42EDBECF6828(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4_METHOD_2_7C8C42EDBECF6828_OFFSET))(a1, a2);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
