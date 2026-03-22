#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_3_Struct_2_52AD02145F5FCE36_7.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class FXFogBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define CLASS_4_CE10D09BD1801DE0_3_METHOD_4_045F1AAB54606068_OFFSET UNITYSDK_OFFSET(0x6CFCF90)
#define CLASS_4_CE10D09BD1801DE0_3_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x6D00A00)
#define CLASS_4_CE10D09BD1801DE0_3_METHOD_4_336B51EF746572BB_OFFSET UNITYSDK_OFFSET(0x6CFD7F0)
#define CLASS_4_CE10D09BD1801DE0_3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x6D009F0)
#define CLASS_4_CE10D09BD1801DE0_3_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x6D00A10)
#define CLASS_4_CE10D09BD1801DE0_3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x6CFD4B0)
#define CLASS_4_CE10D09BD1801DE0_3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x6CFF710)
#define CLASS_4_CE10D09BD1801DE0_3__CTOR_OFFSET UNITYSDK_OFFSET(0x6D00960)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_3_TypeDefinitionIndex = 41891;

class Class_4_CE10D09BD1801DE0_3 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::FXFog*, ::MoleMole::Timeline::FXFogBehaviour*>
{
public:
	::System::Single Field_4_6; // 0x38
	::System::Single Field_4_4; // 0x3C
	::System::Boolean Field_4_27; // 0x40
	::System::Boolean Field_4_5; // 0x41
	::System::Single Field_4_38; // 0x44
	::UnityEngine::Color Field_4_24; // 0x48
	::System::Boolean Field_4_37; // 0x58
	::System::Boolean Field_4_7; // 0x59
	::System::Boolean Field_4_45; // 0x5A
	::System::Boolean Field_4_21; // 0x5B
	::System::Boolean Field_4_3; // 0x5C
	::System::Boolean Field_4_16; // 0x5D
	::System::Boolean Field_4_23; // 0x5E
	::System::Boolean Field_4_13; // 0x5F
	::System::Single Field_4_18; // 0x60
	::System::Boolean Field_4_25; // 0x64
	::System::Boolean Field_4_2; // 0x65
	::System::Boolean Field_4_17; // 0x66
	::System::Boolean Field_4_30; // 0x67
	::System::Single Field_4_12; // 0x68
	::System::Boolean Field_4_31; // 0x6C
	::System::Boolean Field_4_33; // 0x6D
	::System::Boolean Field_4_39; // 0x6E
	::System::Boolean Field_4_35; // 0x6F
	::System::Single Field_4_8; // 0x70
	::System::Boolean Field_4_42; // 0x74
	::System::Boolean Field_4_14; // 0x75
	::System::Boolean Field_4_11; // 0x76
	::System::Boolean Field_4_1; // 0x77
	::System::Single Field_4_34; // 0x78
	::UnityEngine::Color Field_4_10; // 0x7C
	::UnityEngine::Color Field_4_20; // 0x8C
	::System::Single Field_4_40; // 0x9C
	::System::Boolean Field_4_29; // 0xA0
	::System::Boolean Field_4_44; // 0xA1
	::System::Boolean Field_4_9; // 0xA2
	::System::Boolean Field_4_15; // 0xA3
	::System::Single Field_4_32; // 0xA4
	::UnityEngine::Color Field_4_28; // 0xA8
	::Class_4_CE10D09BD1801DE0_3_Struct_2_52AD02145F5FCE36_7 Field_4_0; // 0xB8
	::System::Boolean Field_4_46; // 0x178
	::System::Boolean Field_4_43; // 0x179
	::System::Boolean Field_4_41; // 0x17A
	::System::Boolean Field_4_19; // 0x17B
	::System::Single Field_4_22; // 0x17C
	::System::Single Field_4_36; // 0x180
	::System::Single Field_4_26; // 0x184

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_045F1AAB54606068()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_METHOD_4_045F1AAB54606068_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_336B51EF746572BB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_METHOD_4_336B51EF746572BB_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_3_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
