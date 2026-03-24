#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_8B98EB4DBCE88C4A_Class_2_34C0A42A128BD230;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_8B98EB4DBCE88C4A_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x860A210)
#define CLASS_2_8B98EB4DBCE88C4A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x860A6B0)
#define CLASS_2_8B98EB4DBCE88C4A_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x860A4C0)
#define CLASS_2_8B98EB4DBCE88C4A__CTOR_OFFSET UNITYSDK_OFFSET(0x860A6A0)

inline static constexpr unsigned int Class_2_8B98EB4DBCE88C4A_TypeDefinitionIndex = 80474;

class Class_2_8B98EB4DBCE88C4A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_8B98EB4DBCE88C4A_Class_2_34C0A42A128BD230*>* Field_2_4; // 0x30
	::UnityEngine::Transform* Field_2_8; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x40
	::UnityEngine::GameObject* Field_2_2; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x50
	::Class_2_0D31A1661D004892<::Class_2_8B98EB4DBCE88C4A_Class_2_34C0A42A128BD230*>* Field_2_3; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B98EB4DBCE88C4A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8B98EB4DBCE88C4A_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B98EB4DBCE88C4A_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8B98EB4DBCE88C4A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
