#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }

#define CLASS_2_E9ABE5073CEACE88_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x96653B0)
#define CLASS_2_E9ABE5073CEACE88_1_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x9665240)
#define CLASS_2_E9ABE5073CEACE88_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9665460)
#define CLASS_2_E9ABE5073CEACE88_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9665450)

inline static constexpr unsigned int Class_2_E9ABE5073CEACE88_1_TypeDefinitionIndex = 80414;

class Class_2_E9ABE5073CEACE88_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_0; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9ABE5073CEACE88_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9ABE5073CEACE88_1_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9ABE5073CEACE88_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9ABE5073CEACE88_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
