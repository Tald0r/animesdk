#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDCD1259222B5A4A.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/MoleMole/SuperDebug_LogModule.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_0_16E4307DCC419505_515;
class Class_1_F0DD91CF91C3B169;
class Class_3_6124F7AF16B30AB1;
class Class_3_A5AF8EA2F7094EFB;
namespace MoleMole::Battle { class BulletHoleConfigObject; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace System { class Random; }

#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_32D5C78451849AD8_OFFSET UNITYSDK_OFFSET(0x16635650)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x16635CF0)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x16635AA0)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x16635730)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x166359D0)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_C6452F701014F617_OFFSET UNITYSDK_OFFSET(0x166355E0)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16635580)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_CC634A5DC90EEA5A_OFFSET UNITYSDK_OFFSET(0x16635390)
#define CLASS_2_80FD8D6DCEB53EC0_METHOD_2_E57D6F9393F28D86_OFFSET UNITYSDK_OFFSET(0x16635950)
#define CLASS_2_80FD8D6DCEB53EC0__CCTOR_OFFSET UNITYSDK_OFFSET(0x16635540)
#define CLASS_2_80FD8D6DCEB53EC0__CTOR_OFFSET UNITYSDK_OFFSET(0x166354D0)

inline static constexpr unsigned int Class_2_80FD8D6DCEB53EC0_TypeDefinitionIndex = 75177;

class Class_2_80FD8D6DCEB53EC0 : public ::Class_1_BDCD1259222B5A4A
{
public:
	static ::System::Random** StaticGet_Field_2_8()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_2_80FD8D6DCEB53EC0_TypeDefinitionIndex)->GetStaticField(0x3F350);
	}
	static ::System::Single* StaticGet_Field_2_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_80FD8D6DCEB53EC0_TypeDefinitionIndex)->GetStaticField(0xFB30);
	}
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_80FD8D6DCEB53EC0_TypeDefinitionIndex)->GetStaticField(0xFB34);
	}
	static ::MoleMole::SuperDebug_LogModule* StaticGet_Field_2_7()
	{
		return (::MoleMole::SuperDebug_LogModule*)Il2CppClass::FromTypeDefinitionIndex(Class_2_80FD8D6DCEB53EC0_TypeDefinitionIndex)->GetStaticField(0xFB38);
	}
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_3; // 0x28
	::MoleMole::Battle::BulletHoleConfigObject* Field_2_1; // 0x30
	::MoleMole::Battle::Entity* Field_2_4; // 0x38
	::Class_1_F0DD91CF91C3B169* Field_2_0; // 0x40
	::System::UInt32 Field_2_9; // 0x48
	::MoleMole::Config::DamageDecalData Field_2_2; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CC634A5DC90EEA5A(::Class_0_16E4307DCC419505_515* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_515*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_CC634A5DC90EEA5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C6452F701014F617(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_C6452F701014F617_OFFSET))(this, a1);
	}

	::System::Void Method_2_32D5C78451849AD8(::Class_3_A5AF8EA2F7094EFB* a1, ::Class_3_6124F7AF16B30AB1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_32D5C78451849AD8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E57D6F9393F28D86(::Class_0_16E4307DCC419505_515* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_515*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_E57D6F9393F28D86_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80FD8D6DCEB53EC0_METHOD_2_43D99DDD80B1E30C_OFFSET))(this);
	}
};
