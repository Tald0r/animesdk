#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_19_Struct_2_52AD02145F5FCE36_40.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class FXFogBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define CLASS_4_CE10D09BD1801DE0_19_METHOD_4_045F1AAB54606068_OFFSET UNITYSDK_OFFSET(0x9DD0DD0)
#define CLASS_4_CE10D09BD1801DE0_19_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1A4B18E0)
#define CLASS_4_CE10D09BD1801DE0_19_METHOD_4_336B51EF746572BB_OFFSET UNITYSDK_OFFSET(0x9DD1710)
#define CLASS_4_CE10D09BD1801DE0_19_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x9DD4CC0)
#define CLASS_4_CE10D09BD1801DE0_19_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x9DD4CD0)
#define CLASS_4_CE10D09BD1801DE0_19_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x9DD1390)
#define CLASS_4_CE10D09BD1801DE0_19_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x9DD3830)
#define CLASS_4_CE10D09BD1801DE0_19__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD4C30)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_19_TypeDefinitionIndex = 77597;

class Class_4_CE10D09BD1801DE0_19 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::FXFog*, ::MoleMole::Timeline::FXFogBehaviour*>
{
public:
	::System::Boolean Field_4_13; // 0x38
	::System::Boolean Field_4_43; // 0x39
	::System::Boolean Field_4_47; // 0x3A
	::System::Boolean Field_4_44; // 0x3B
	::System::Boolean Field_4_17; // 0x3C
	::System::Boolean Field_4_41; // 0x3D
	::System::Boolean Field_4_30; // 0x3E
	::System::Boolean Field_4_7; // 0x3F
	::System::Single Field_4_38; // 0x40
	::Class_4_CE10D09BD1801DE0_19_Struct_2_52AD02145F5FCE36_40 Field_4_0; // 0x44
	::UnityEngine::Color Field_4_28; // 0x114
	::System::Boolean Field_4_25; // 0x124
	::System::Boolean Field_4_11; // 0x125
	::System::Boolean Field_4_2; // 0x126
	::System::Boolean Field_4_16; // 0x127
	::System::Single Field_4_34; // 0x128
	::System::Single Field_4_22; // 0x12C
	::System::Single Field_4_40; // 0x130
	::UnityEngine::Color Field_4_10; // 0x134
	::System::Single Field_4_36; // 0x144
	::System::Single Field_4_12; // 0x148
	::System::Boolean Field_4_50; // 0x14C
	::System::Boolean Field_4_27; // 0x14D
	::System::Boolean Field_4_21; // 0x14E
	::System::Boolean Field_4_29; // 0x14F
	::System::Boolean Field_4_9; // 0x150
	::System::Boolean Field_4_23; // 0x151
	::System::Boolean Field_4_19; // 0x152
	::System::Boolean Field_4_3; // 0x153
	::System::Boolean Field_4_5; // 0x154
	::System::Boolean Field_4_37; // 0x155
	::System::Boolean Field_4_39; // 0x156
	::System::Boolean Field_4_1; // 0x157
	::System::Single Field_4_18; // 0x158
	::System::Single Field_4_46; // 0x15C
	::System::Single Field_4_8; // 0x160
	::System::Single Field_4_4; // 0x164
	::System::Boolean Field_4_45; // 0x168
	::System::Boolean Field_4_15; // 0x169
	::System::Boolean Field_4_14; // 0x16A
	::System::Boolean Field_4_49; // 0x16B
	::System::Single Field_4_32; // 0x16C
	::System::Single Field_4_48; // 0x170
	::System::Single Field_4_26; // 0x174
	::System::Single Field_4_6; // 0x178
	::UnityEngine::Color Field_4_20; // 0x17C
	::UnityEngine::Color Field_4_24; // 0x18C
	::System::Boolean Field_4_35; // 0x19C
	::System::Boolean Field_4_33; // 0x19D
	::System::Boolean Field_4_42; // 0x19E
	::System::Boolean Field_4_31; // 0x19F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_19__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_045F1AAB54606068()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_19_METHOD_4_045F1AAB54606068_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_19_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_19_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_19_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_19_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_336B51EF746572BB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_19_METHOD_4_336B51EF746572BB_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_19_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
