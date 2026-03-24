#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/System/Object.h"

class Class_1_2A3859B4230FECE9;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_1_B8576B54B40B3FB0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEE2C30)
#define CLASS_1_B8576B54B40B3FB0_METHOD_1_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0xAEE2BC0)
#define CLASS_1_B8576B54B40B3FB0_METHOD_1_381774D493239BC8_OFFSET UNITYSDK_OFFSET(0xAEE2860)
#define CLASS_1_B8576B54B40B3FB0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAEE2B60)
#define CLASS_1_B8576B54B40B3FB0_METHOD_1_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0xAEE2B00)
#define CLASS_1_B8576B54B40B3FB0_METHOD_1_7E239D2D893221C6_OFFSET UNITYSDK_OFFSET(0xAEE2E70)
#define CLASS_1_B8576B54B40B3FB0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAEE2AA0)
#define CLASS_1_B8576B54B40B3FB0__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE2820)

inline static constexpr unsigned int Class_1_B8576B54B40B3FB0_TypeDefinitionIndex = 56976;

class Class_1_B8576B54B40B3FB0 : public ::System::Object
{
public:
	::Class_1_2A3859B4230FECE9* Field_1_0; // 0x10
	::MoleMole::Cameras::CameraDataAccessor* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_2A3859B4230FECE9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A3859B4230FECE9*))((::PBYTE)hIl2Cpp + CLASS_1_B8576B54B40B3FB0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8576B54B40B3FB0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_1_49AC00594530B714()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8576B54B40B3FB0_METHOD_1_49AC00594530B714_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8576B54B40B3FB0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_1_B8576B54B40B3FB0_METHOD_1_04DC58A6E3312864_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8576B54B40B3FB0_DISPOSE_OFFSET))(this);
	}

	::MoleMole::CameraModuleAvatarDataConfigExt* Method_1_7E239D2D893221C6()
	{
		return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8576B54B40B3FB0_METHOD_1_7E239D2D893221C6_OFFSET))(this);
	}

	::System::Void Method_1_381774D493239BC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8576B54B40B3FB0_METHOD_1_381774D493239BC8_OFFSET))(this);
	}
};
