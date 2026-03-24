#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_99FC0D3C4AC4FD2D_Struct_2_AA4EE15A8D4DB005_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class NapContactShadowBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class NapContactShadow; }

#define CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_20A627803502A830_OFFSET UNITYSDK_OFFSET(0xC52F560)
#define CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA6315C0)
#define CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xC5301E0)
#define CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xC5301F0)
#define CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xC5301D0)
#define CLASS_4_99FC0D3C4AC4FD2D_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC52F490)
#define CLASS_4_99FC0D3C4AC4FD2D_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xC52FBC0)
#define CLASS_4_99FC0D3C4AC4FD2D__CTOR_OFFSET UNITYSDK_OFFSET(0xC5301A0)

inline static constexpr unsigned int Class_4_99FC0D3C4AC4FD2D_TypeDefinitionIndex = 44440;

class Class_4_99FC0D3C4AC4FD2D : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::NapContactShadow*, ::MoleMole::Timeline::NapContactShadowBehaviour*>
{
public:
	::Class_4_99FC0D3C4AC4FD2D_Struct_2_AA4EE15A8D4DB005_1 Field_4_0; // 0x38
	::System::Boolean Field_4_1; // 0x4C
	::System::Boolean Field_4_8; // 0x4D
	::System::Boolean Field_4_5; // 0x4E
	::System::Boolean Field_4_3; // 0x4F
	::System::Single Field_4_6; // 0x50
	::System::Boolean Field_4_2; // 0x54
	::System::Boolean Field_4_7; // 0x55
	::System::Int32 Field_4_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_20A627803502A830(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_20A627803502A830_OFFSET))(this, a1);
	}
};
