#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_65C19FEB7BE81FEE_Struct_2_52AD02145F5FCE36_22.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class NapCapsuleAOLightingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class NapCapsuleAOLighting; }

#define CLASS_4_65C19FEB7BE81FEE_METHOD_4_20A627803502A830_OFFSET UNITYSDK_OFFSET(0xCA1D5E0)
#define CLASS_4_65C19FEB7BE81FEE_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xCA1E4A0)
#define CLASS_4_65C19FEB7BE81FEE_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xCA1E4C0)
#define CLASS_4_65C19FEB7BE81FEE_METHOD_4_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xCA1D3C0)
#define CLASS_4_65C19FEB7BE81FEE_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xCA1E4B0)
#define CLASS_4_65C19FEB7BE81FEE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xCA1D4E0)
#define CLASS_4_65C19FEB7BE81FEE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xCA1DDB0)
#define CLASS_4_65C19FEB7BE81FEE__CTOR_OFFSET UNITYSDK_OFFSET(0xCA1E470)

inline static constexpr unsigned int Class_4_65C19FEB7BE81FEE_TypeDefinitionIndex = 61603;

class Class_4_65C19FEB7BE81FEE : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*, ::MoleMole::Timeline::NapCapsuleAOLightingBehaviour*>
{
public:
	::System::Single Field_4_10; // 0x38
	::System::Single Field_4_6; // 0x3C
	::System::Boolean Field_4_2; // 0x40
	::System::Boolean Field_4_9; // 0x41
	::System::Boolean Field_4_5; // 0x42
	::System::Boolean Field_4_7; // 0x43
	::System::Boolean Field_4_12; // 0x44
	::System::Boolean Field_4_3; // 0x45
	::System::Boolean Field_4_1; // 0x46
	::System::Boolean Field_4_11; // 0x47
	::System::Single Field_4_8; // 0x48
	::Class_4_65C19FEB7BE81FEE_Struct_2_52AD02145F5FCE36_22 Field_4_0; // 0x4C
	::System::Single Field_4_4; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_65C19FEB7BE81FEE__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_65C19FEB7BE81FEE_METHOD_4_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_65C19FEB7BE81FEE_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_65C19FEB7BE81FEE_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_65C19FEB7BE81FEE_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_65C19FEB7BE81FEE_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_65C19FEB7BE81FEE_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_20A627803502A830(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_65C19FEB7BE81FEE_METHOD_4_20A627803502A830_OFFSET))(this, a1);
	}
};
