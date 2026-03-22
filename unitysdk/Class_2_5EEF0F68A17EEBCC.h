#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_5EEF0F68A17EEBCC_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x74F2BD0)
#define CLASS_2_5EEF0F68A17EEBCC_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x74F29E0)
#define CLASS_2_5EEF0F68A17EEBCC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x74F2D10)
#define CLASS_2_5EEF0F68A17EEBCC__CTOR_OFFSET UNITYSDK_OFFSET(0x74F2D00)

inline static constexpr unsigned int Class_2_5EEF0F68A17EEBCC_TypeDefinitionIndex = 44201;

class Class_2_5EEF0F68A17EEBCC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x28
	::UnityEngine::Animation* Field_2_0; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EEF0F68A17EEBCC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5EEF0F68A17EEBCC_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EEF0F68A17EEBCC_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5EEF0F68A17EEBCC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
