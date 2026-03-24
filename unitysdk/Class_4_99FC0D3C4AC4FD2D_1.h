#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_99FC0D3C4AC4FD2D_1_Struct_2_52AD02145F5FCE36_28.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class PartialBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }

#define CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xD68A470)
#define CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xD68A450)
#define CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xD689230)
#define CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xD68A460)
#define CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0xD689440)
#define CLASS_4_99FC0D3C4AC4FD2D_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD689340)
#define CLASS_4_99FC0D3C4AC4FD2D_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD689D80)
#define CLASS_4_99FC0D3C4AC4FD2D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD68A430)

inline static constexpr unsigned int Class_4_99FC0D3C4AC4FD2D_1_TypeDefinitionIndex = 66945;

class Class_4_99FC0D3C4AC4FD2D_1 : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::PartialBlur*, ::MoleMole::Timeline::PartialBlurBehaviour*>
{
public:
	::System::Int32 Field_4_8; // 0x38
	::Class_4_99FC0D3C4AC4FD2D_1_Struct_2_52AD02145F5FCE36_28 Field_4_0; // 0x3C
	::System::Single Field_4_6; // 0x64
	::System::Boolean Field_4_5; // 0x68
	::System::Boolean Field_4_11; // 0x69
	::System::Boolean Field_4_1; // 0x6A
	::System::Boolean Field_4_7; // 0x6B
	::System::Int32 Field_4_2; // 0x6C
	::System::Boolean Field_4_10; // 0x70
	::System::Boolean Field_4_9; // 0x71
	::System::Boolean Field_4_3; // 0x72
	::System::Boolean Field_4_12; // 0x73
	::System::Single Field_4_4; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_EBA44A5450C8B29F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_EBA44A5450C8B29F_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
