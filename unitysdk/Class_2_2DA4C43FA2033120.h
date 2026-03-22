#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_0_16E4307DCC419505_119;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_2_2DA4C43FA2033120_METHOD_2_6CF93C63C9513BEF_OFFSET UNITYSDK_OFFSET(0x8D4C5D0)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x8D4CE90)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_A8F6F688241E6DBC_1_OFFSET UNITYSDK_OFFSET(0x8D4D6E0)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x8D4D590)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_E11BB58CDF5EE653_1_OFFSET UNITYSDK_OFFSET(0x8D4D280)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_E11BB58CDF5EE653_OFFSET UNITYSDK_OFFSET(0x8D4CF70)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_E800CA804B13CF7E_OFFSET UNITYSDK_OFFSET(0x8D4CAC0)
#define CLASS_2_2DA4C43FA2033120__CTOR_OFFSET UNITYSDK_OFFSET(0x8D4CA70)

inline static constexpr unsigned int Class_2_2DA4C43FA2033120_TypeDefinitionIndex = 50039;

class Class_2_2DA4C43FA2033120 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_75527B5277EE1A90<::UnityEngine::Vector3>* Field_2_3; // 0x50
	::Class_2_75527B5277EE1A90<::UnityEngine::Transform*>* Field_2_2; // 0x58
	::Class_0_16E4307DCC419505_119<::MoleMole::TurnBattleEntityUnit*>* Field_2_0; // 0x60
	::Class_2_75527B5277EE1A90<::UnityEngine::Transform*>* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6CF93C63C9513BEF(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_6CF93C63C9513BEF_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_E800CA804B13CF7E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_E800CA804B13CF7E_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_E11BB58CDF5EE653()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_E11BB58CDF5EE653_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_E11BB58CDF5EE653_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_E11BB58CDF5EE653_1_OFFSET))(this);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_A8F6F688241E6DBC_1_OFFSET))(this);
	}
};
