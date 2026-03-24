#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_77915EE9002093EC;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_7B9EF8EED2E915D3_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x7DD02D0)
#define CLASS_2_7B9EF8EED2E915D3_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x7DD0110)
#define CLASS_2_7B9EF8EED2E915D3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7DD0380)
#define CLASS_2_7B9EF8EED2E915D3__CTOR_OFFSET UNITYSDK_OFFSET(0x7DD0370)

inline static constexpr unsigned int Class_2_7B9EF8EED2E915D3_TypeDefinitionIndex = 40578;

class Class_2_7B9EF8EED2E915D3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_77915EE9002093EC*>* Field_2_1; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x20
	::UnityEngine::GameObject* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B9EF8EED2E915D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7B9EF8EED2E915D3_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B9EF8EED2E915D3_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7B9EF8EED2E915D3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
