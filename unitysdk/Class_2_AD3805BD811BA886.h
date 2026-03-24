#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CB7F0487F7A6164A;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_AD3805BD811BA886_METHOD_2_0F56D5DC9847C4D5_OFFSET UNITYSDK_OFFSET(0x94BAD50)
#define CLASS_2_AD3805BD811BA886_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x94BAB10)
#define CLASS_2_AD3805BD811BA886_METHOD_2_26192858CF73CB8E_OFFSET UNITYSDK_OFFSET(0x94BAC40)
#define CLASS_2_AD3805BD811BA886_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x94BAD60)
#define CLASS_2_AD3805BD811BA886_METHOD_2_B9A6947D97AA9960_OFFSET UNITYSDK_OFFSET(0x94BAE30)
#define CLASS_2_AD3805BD811BA886_METHOD_2_E3044C8564941869_OFFSET UNITYSDK_OFFSET(0x94BADE0)
#define CLASS_2_AD3805BD811BA886__CTOR_OFFSET UNITYSDK_OFFSET(0x94BACF0)

inline static constexpr unsigned int Class_2_AD3805BD811BA886_TypeDefinitionIndex = 78066;

class Class_2_AD3805BD811BA886 : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::Struct_2_FA5F50563E60AFBA Field_2_2; // 0x80
	::UnityEngine::Vector3 Field_2_4; // 0x98
	::Struct_2_FC595D1A561D8C6F_1 Field_2_5; // 0xA4
	::UnityEngine::Vector3 Field_2_6; // 0xC0
	::System::Boolean Field_2_0; // 0xCC
	::System::Boolean Field_2_3; // 0xCD
	::System::Boolean Field_2_1; // 0xCE

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_2_26192858CF73CB8E(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_26192858CF73CB8E_OFFSET))(this, a1, a2);
	}

	::Class_1_CB7F0487F7A6164A* Method_2_0F56D5DC9847C4D5()
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_0F56D5DC9847C4D5_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_E3044C8564941869()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_E3044C8564941869_OFFSET))(this);
	}

	::System::Void Method_2_B9A6947D97AA9960(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + CLASS_2_AD3805BD811BA886_METHOD_2_B9A6947D97AA9960_OFFSET))(this, a1, a2);
	}
};
