#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B4E98DED3FBEAE53;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole::Cameras { class CameraTrackBlending; }

#define CLASS_2_B4E98DED3FBEAE53_CLASS_1_224B01B5C8CB47BA_METHOD_1_3215AC64FF8F0B10_OFFSET UNITYSDK_OFFSET(0xC55F740)
#define CLASS_2_B4E98DED3FBEAE53_CLASS_1_224B01B5C8CB47BA_METHOD_1_4D82420476E6367C_OFFSET UNITYSDK_OFFSET(0xC55F5F0)
#define CLASS_2_B4E98DED3FBEAE53_CLASS_1_224B01B5C8CB47BA_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xC55F440)
#define CLASS_2_B4E98DED3FBEAE53_CLASS_1_224B01B5C8CB47BA_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xC55F450)
#define CLASS_2_B4E98DED3FBEAE53_CLASS_1_224B01B5C8CB47BA__CTOR_OFFSET UNITYSDK_OFFSET(0xC55F430)

inline static constexpr unsigned int Class_2_B4E98DED3FBEAE53_Class_1_224B01B5C8CB47BA_TypeDefinitionIndex = 44508;

class Class_2_B4E98DED3FBEAE53_Class_1_224B01B5C8CB47BA : public ::System::Object
{
public:
	::MoleMole::MonoGamepadVirtualCursor* Field_1_6; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* Field_1_3; // 0x18
	::Class_2_B4E98DED3FBEAE53* Field_1_4; // 0x20
	::System::Single Field_1_1; // 0x28
	::System::Single Field_1_2; // 0x2C
	::System::Single Field_1_0; // 0x30
	::System::Single Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_1_224B01B5C8CB47BA__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_1_224B01B5C8CB47BA_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_1_224B01B5C8CB47BA_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_1_4D82420476E6367C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_1_224B01B5C8CB47BA_METHOD_1_4D82420476E6367C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3215AC64FF8F0B10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_1_224B01B5C8CB47BA_METHOD_1_3215AC64FF8F0B10_OFFSET))(this);
	}
};
