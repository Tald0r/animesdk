#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20577CF7FC6B1263.h"
#include "unitysdk/Class_4_99FC0D3C4AC4FD2D_Struct_2_AA4EE15A8D4DB005_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class NapContactShadowBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class NapContactShadow; }

#define CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_20A627803502A830_OFFSET UNITYSDK_OFFSET(0x710A2B0)
#define CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x710A110)
#define CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x710AF20)
#define CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x710AF30)
#define CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x710AF40)
#define CLASS_4_99FC0D3C4AC4FD2D_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x710A1E0)
#define CLASS_4_99FC0D3C4AC4FD2D_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x710A910)
#define CLASS_4_99FC0D3C4AC4FD2D__CTOR_OFFSET UNITYSDK_OFFSET(0x710AEF0)

inline static constexpr unsigned int Class_4_99FC0D3C4AC4FD2D_TypeDefinitionIndex = 40547;

class Class_4_99FC0D3C4AC4FD2D : public ::Class_3_20577CF7FC6B1263<::UnityEngine::Rendering::Universal::NapContactShadow*, ::MoleMole::Timeline::NapContactShadowBehaviour*>
{
public:
	::System::Single Field_4_6; // 0x38
	::System::Boolean Field_4_5; // 0x3C
	::System::Boolean Field_4_2; // 0x3D
	::System::Boolean Field_4_8; // 0x3E
	::System::Boolean Field_4_7; // 0x3F
	::System::Int32 Field_4_4; // 0x40
	::System::Boolean Field_4_1; // 0x44
	::System::Boolean Field_4_3; // 0x45
	::Class_4_99FC0D3C4AC4FD2D_Struct_2_AA4EE15A8D4DB005_1 Field_4_0; // 0x48

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

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_99FC0D3C4AC4FD2D_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
