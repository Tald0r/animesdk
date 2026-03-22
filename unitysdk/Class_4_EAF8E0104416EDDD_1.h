#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_EAF8E0104416EDDD_1_Struct_2_52AD02145F5FCE36_10.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class UnsharpMaskBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class UnsharpMask; }

#define CLASS_4_EAF8E0104416EDDD_1_METHOD_4_20A627803502A830_OFFSET UNITYSDK_OFFSET(0xB994FE0)
#define CLASS_4_EAF8E0104416EDDD_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB9961E0)
#define CLASS_4_EAF8E0104416EDDD_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xB9961F0)
#define CLASS_4_EAF8E0104416EDDD_1_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xB994D90)
#define CLASS_4_EAF8E0104416EDDD_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xB9961D0)
#define CLASS_4_EAF8E0104416EDDD_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB994ED0)
#define CLASS_4_EAF8E0104416EDDD_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB995A20)
#define CLASS_4_EAF8E0104416EDDD_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB9961B0)

inline static constexpr unsigned int Class_4_EAF8E0104416EDDD_1_TypeDefinitionIndex = 44285;

class Class_4_EAF8E0104416EDDD_1 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::UnsharpMask*, ::MoleMole::Timeline::UnsharpMaskBehaviour*>
{
public:
	::System::Single Field_4_10; // 0x38
	::System::Single Field_4_4; // 0x3C
	::System::Boolean Field_4_11; // 0x40
	::System::Boolean Field_4_2; // 0x41
	::System::Boolean Field_4_9; // 0x42
	::System::Boolean Field_4_14; // 0x43
	::System::Boolean Field_4_1; // 0x44
	::System::Boolean Field_4_5; // 0x45
	::System::Int32 Field_4_8; // 0x48
	::System::Boolean Field_4_12; // 0x4C
	::System::Boolean Field_4_7; // 0x4D
	::System::Boolean Field_4_3; // 0x4E
	::System::Boolean Field_4_13; // 0x4F
	::Class_4_EAF8E0104416EDDD_1_Struct_2_52AD02145F5FCE36_10 Field_4_0; // 0x50
	::System::Single Field_4_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_METHOD_4_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_20A627803502A830(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_METHOD_4_20A627803502A830_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF8E0104416EDDD_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
