#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0208C58D3AAD2AB6.h"
#include "unitysdk/Class_4_C07400ECE2D2CB7D_Struct_2_52AD02145F5FCE36_30.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class VignetteBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define CLASS_4_C07400ECE2D2CB7D_METHOD_4_08F456DAF4329D84_OFFSET UNITYSDK_OFFSET(0x6A230E0)
#define CLASS_4_C07400ECE2D2CB7D_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x6A241A0)
#define CLASS_4_C07400ECE2D2CB7D_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x6A22E60)
#define CLASS_4_C07400ECE2D2CB7D_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x6A24190)
#define CLASS_4_C07400ECE2D2CB7D_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x6A24180)
#define CLASS_4_C07400ECE2D2CB7D_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x6A22FB0)
#define CLASS_4_C07400ECE2D2CB7D_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x6A23990)
#define CLASS_4_C07400ECE2D2CB7D__CTOR_OFFSET UNITYSDK_OFFSET(0x6A24150)

inline static constexpr unsigned int Class_4_C07400ECE2D2CB7D_TypeDefinitionIndex = 67579;

class Class_4_C07400ECE2D2CB7D : public ::Class_3_0208C58D3AAD2AB6<::UnityEngine::Rendering::Universal::Vignette*, ::MoleMole::Timeline::VignetteBehaviour*>
{
public:
	::UnityEngine::Vector2 Field_4_4; // 0x38
	::System::Single Field_4_8; // 0x40
	::UnityEngine::Color Field_4_2; // 0x44
	::System::Single Field_4_6; // 0x54
	::Class_4_C07400ECE2D2CB7D_Struct_2_52AD02145F5FCE36_30 Field_4_0; // 0x58
	::System::Boolean Field_4_11; // 0x90
	::System::Boolean Field_4_3; // 0x91
	::System::Boolean Field_4_10; // 0x92
	::System::Boolean Field_4_12; // 0x93
	::System::Boolean Field_4_9; // 0x94
	::System::Boolean Field_4_5; // 0x95
	::System::Boolean Field_4_7; // 0x96
	::System::Boolean Field_4_1; // 0x97

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C07400ECE2D2CB7D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C07400ECE2D2CB7D_METHOD_4_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_C07400ECE2D2CB7D_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_C07400ECE2D2CB7D_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_08F456DAF4329D84(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_C07400ECE2D2CB7D_METHOD_4_08F456DAF4329D84_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_C07400ECE2D2CB7D_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C07400ECE2D2CB7D_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_C07400ECE2D2CB7D_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
