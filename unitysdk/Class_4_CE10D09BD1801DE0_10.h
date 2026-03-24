#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_CE10D09BD1801DE0_10_Struct_2_52AD02145F5FCE3A_15.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ColorCurvesBehaviour; }
namespace System { class Object; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class ColorCurves; }

#define CLASS_4_CE10D09BD1801DE0_10_METHOD_4_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x8386440)
#define CLASS_4_CE10D09BD1801DE0_10_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x8387B90)
#define CLASS_4_CE10D09BD1801DE0_10_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x8387BB0)
#define CLASS_4_CE10D09BD1801DE0_10_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x8387BA0)
#define CLASS_4_CE10D09BD1801DE0_10_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x8386770)
#define CLASS_4_CE10D09BD1801DE0_10_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x83865E0)
#define CLASS_4_CE10D09BD1801DE0_10_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x83871F0)
#define CLASS_4_CE10D09BD1801DE0_10__CTOR_OFFSET UNITYSDK_OFFSET(0x8387B80)

inline static constexpr unsigned int Class_4_CE10D09BD1801DE0_10_TypeDefinitionIndex = 51499;

class Class_4_CE10D09BD1801DE0_10 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::ColorCurves*, ::MoleMole::Timeline::ColorCurvesBehaviour*>
{
public:
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_10; // 0x38
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_14; // 0x40
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_4; // 0x48
	::Class_4_CE10D09BD1801DE0_10_Struct_2_52AD02145F5FCE3A_15 Field_4_0; // 0x50
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_12; // 0xD8
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_16; // 0xE0
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_6; // 0xE8
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_8; // 0xF0
	::UnityEngine::NAPRenderPipeline0::TextureCurve* Field_4_2; // 0xF8
	::System::Boolean Field_4_15; // 0x100
	::System::Boolean Field_4_13; // 0x101
	::System::Boolean Field_4_5; // 0x102
	::System::Boolean Field_4_17; // 0x103
	::System::Boolean Field_4_7; // 0x104
	::System::Boolean Field_4_1; // 0x105
	::System::Boolean Field_4_11; // 0x106
	::System::Boolean Field_4_9; // 0x107
	::System::Boolean Field_4_3; // 0x108
	::System::Boolean Field_4_18; // 0x109

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_10__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_10_METHOD_4_0868EF727040C390_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_10_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_10_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_10_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_10_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_10_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_CE10D09BD1801DE0_10_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}
};
