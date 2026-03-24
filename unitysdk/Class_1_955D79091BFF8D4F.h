#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D75840096F50FEFC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_105013703884A094;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }

#define CLASS_1_955D79091BFF8D4F_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xDA1B950)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xDA1BC00)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0xDA1BBD0)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_60069FCD99486CD7_OFFSET UNITYSDK_OFFSET(0xDA1B8E0)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0xDA1BC70)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_AB4AABC1733EB727_OFFSET UNITYSDK_OFFSET(0xDA1BB40)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xDA1BA20)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDA1B9C0)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0xDA1BBE0)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0xDA1BBB0)
#define CLASS_1_955D79091BFF8D4F_METHOD_1_E0C935AE223B555F_OFFSET UNITYSDK_OFFSET(0xDA1BA80)
#define CLASS_1_955D79091BFF8D4F__CTOR_OFFSET UNITYSDK_OFFSET(0xDA1BD20)

inline static constexpr unsigned int Class_1_955D79091BFF8D4F_TypeDefinitionIndex = 69969;

class Class_1_955D79091BFF8D4F : public ::System::Object
{
public:
	::Enum_3_D75840096F50FEFC Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14
	::UnityEngine::Vector3 Field_1_5; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x2C
	::System::Single Field_1_2; // 0x38
	::UnityEngine::Quaternion Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60069FCD99486CD7(::Class_1_105013703884A094* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105013703884A094*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_60069FCD99486CD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_E0C935AE223B555F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_E0C935AE223B555F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AB4AABC1733EB727(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::ConfigPosRot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_AB4AABC1733EB727_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_413F493333BF3391_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_955D79091BFF8D4F_METHOD_1_96F6E9EA89A38FD1_OFFSET))(this);
	}
};
