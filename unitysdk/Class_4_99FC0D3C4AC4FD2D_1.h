#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_99FC0D3C4AC4FD2D_1_Struct_2_AA4EE15A8D4DB005_3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class PartialBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }

#define CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x9FC5C00)
#define CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x9FC5BE0)
#define CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9FC4C20)
#define CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x9FC5BF0)
#define CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_EBA44A5450C8B29F_OFFSET UNITYSDK_OFFSET(0x9FC4DF0)
#define CLASS_4_99FC0D3C4AC4FD2D_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x9FC4D10)
#define CLASS_4_99FC0D3C4AC4FD2D_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x9FC5570)
#define CLASS_4_99FC0D3C4AC4FD2D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC5BC0)

inline static constexpr unsigned int Class_4_99FC0D3C4AC4FD2D_1_TypeDefinitionIndex = 55990;

class Class_4_99FC0D3C4AC4FD2D_1 : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::PartialBlur*, ::MoleMole::Timeline::PartialBlurBehaviour*>
{
public:
	::Class_4_99FC0D3C4AC4FD2D_1_Struct_2_AA4EE15A8D4DB005_3 Field_4_0; // 0x38
	::System::Int32 Field_4_6; // 0x5C
	::System::Single Field_4_8; // 0x60
	::System::Single Field_4_4; // 0x64
	::System::Boolean Field_4_9; // 0x68
	::System::Boolean Field_4_1; // 0x69
	::System::Boolean Field_4_7; // 0x6A
	::System::Boolean Field_4_10; // 0x6B
	::System::Boolean Field_4_3; // 0x6C
	::System::Boolean Field_4_5; // 0x6D
	::System::Int32 Field_4_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_1_METHOD_4_D0BD1377F2594D33_OFFSET))(this);
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
