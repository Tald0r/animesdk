#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B4E98DED3FBEAE53;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole::Cameras { class CameraTrackBlending; }

#define CLASS_2_B4E98DED3FBEAE53_CLASS_1_12C2F8830D197829_METHOD_1_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x87A6DD0)
#define CLASS_2_B4E98DED3FBEAE53_CLASS_1_12C2F8830D197829_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x87A6DC0)
#define CLASS_2_B4E98DED3FBEAE53_CLASS_1_12C2F8830D197829_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x87A6C80)
#define CLASS_2_B4E98DED3FBEAE53_CLASS_1_12C2F8830D197829__CTOR_OFFSET UNITYSDK_OFFSET(0x8798C00)

inline static constexpr unsigned int Class_2_B4E98DED3FBEAE53_Class_1_12C2F8830D197829_TypeDefinitionIndex = 76375;

class Class_2_B4E98DED3FBEAE53_Class_1_12C2F8830D197829 : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraTrackBlending* Field_1_3; // 0x10
	::MoleMole::MonoGamepadVirtualCursor* Field_1_6; // 0x18
	::Class_2_B4E98DED3FBEAE53* Field_1_4; // 0x20
	::System::Boolean Field_1_5; // 0x28
	::UnityEngine::Vector3 Field_1_1; // 0x2C
	::System::Single Field_1_0; // 0x38
	::UnityEngine::Vector3 Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_1_12C2F8830D197829__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_1_12C2F8830D197829_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_1_12C2F8830D197829_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_1_12C2F8830D197829_METHOD_1_25CD86BF8626C8D9_OFFSET))(this, a1);
	}
};
