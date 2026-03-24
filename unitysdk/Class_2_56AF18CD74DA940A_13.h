#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_56AF18CD74DA940A_13_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0xE133280)
#define CLASS_2_56AF18CD74DA940A_13_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE1333F0)
#define CLASS_2_56AF18CD74DA940A_13__CTOR_OFFSET UNITYSDK_OFFSET(0xE1333E0)

inline static constexpr unsigned int Class_2_56AF18CD74DA940A_13_TypeDefinitionIndex = 62141;

class Class_2_56AF18CD74DA940A_13 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_7; // 0x18
	::UnityEngine::Transform* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_6; // 0x28
	::UnityEngine::Transform* Field_2_5; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38
	::UnityEngine::Transform* Field_2_1; // 0x40
	::UnityEngine::Transform* Field_2_0; // 0x48
	::UnityEngine::Transform* Field_2_3; // 0x50
	::UnityEngine::Transform* Field_2_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56AF18CD74DA940A_13__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_56AF18CD74DA940A_13_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_56AF18CD74DA940A_13_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
