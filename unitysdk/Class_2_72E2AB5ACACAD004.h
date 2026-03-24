#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class Class_2_CA67A9CEB871FFD3;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_72E2AB5ACACAD004_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x65FA430)
#define CLASS_2_72E2AB5ACACAD004_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x65FA930)
#define CLASS_2_72E2AB5ACACAD004_METHOD_2_C4115FB25AD4513C_OFFSET UNITYSDK_OFFSET(0x65FA730)
#define CLASS_2_72E2AB5ACACAD004_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x65FAA90)
#define CLASS_2_72E2AB5ACACAD004__CTOR_OFFSET UNITYSDK_OFFSET(0x65FAA80)

inline static constexpr unsigned int Class_2_72E2AB5ACACAD004_TypeDefinitionIndex = 37985;

class Class_2_72E2AB5ACACAD004 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>* Field_2_8; // 0x18
	::UnityEngine::Animation* Field_2_12; // 0x20
	::UnityEngine::RectTransform* Field_2_9; // 0x28
	::UIControllerExtensionData* Field_2_10; // 0x30
	::Class_2_CA67A9CEB871FFD3* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>* Field_2_13; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x48
	::UnityEngine::Animation* Field_2_6; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x58
	::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>* Field_2_5; // 0x60
	::UnityEngine::Transform* Field_2_7; // 0x68
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x70
	::UnityEngine::Transform* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_11; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72E2AB5ACACAD004__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72E2AB5ACACAD004_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>* Method_2_C4115FB25AD4513C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72E2AB5ACACAD004_METHOD_2_C4115FB25AD4513C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72E2AB5ACACAD004_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72E2AB5ACACAD004_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
