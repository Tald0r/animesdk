#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_DA90296903337120_CLASS_1_AAFF6F94C108465B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x74263D0)
#define CLASS_3_DA90296903337120_CLASS_1_AAFF6F94C108465B_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x7425DB0)
#define CLASS_3_DA90296903337120_CLASS_1_AAFF6F94C108465B_METHOD_1_7436702E91167B36_OFFSET UNITYSDK_OFFSET(0x7426440)
#define CLASS_3_DA90296903337120_CLASS_1_AAFF6F94C108465B__CTOR_OFFSET UNITYSDK_OFFSET(0x7425DA0)

inline static constexpr unsigned int Class_3_DA90296903337120_Class_1_AAFF6F94C108465B_TypeDefinitionIndex = 69635;

class Class_3_DA90296903337120_Class_1_AAFF6F94C108465B : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_3; // 0x10
	::MoleMole::ScreenPlayer* Field_1_0; // 0x18
	::UnityEngine::GameObject* Field_1_2; // 0x20
	::UnityEngine::Renderer* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* Field_1_5; // 0x30
	::MoleMole::ScreenPlayer* Field_1_1; // 0x38
	::MoleMole::Battle::Entity* Field_1_9; // 0x40
	::System::String* Field_1_8; // 0x48
	::System::Boolean Field_1_7; // 0x50
	::System::Int32 Field_1_6; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_CLASS_1_AAFF6F94C108465B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_CLASS_1_AAFF6F94C108465B_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_CLASS_1_AAFF6F94C108465B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_7436702E91167B36(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_CLASS_1_AAFF6F94C108465B_METHOD_1_7436702E91167B36_OFFSET))(this, a1);
	}
};
