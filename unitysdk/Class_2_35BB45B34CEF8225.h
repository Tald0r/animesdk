#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_35BB45B34CEF8225_METHOD_2_15A96BFA7BCB1910_OFFSET UNITYSDK_OFFSET(0xCE38A40)
#define CLASS_2_35BB45B34CEF8225_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xCE38DE0)
#define CLASS_2_35BB45B34CEF8225_METHOD_2_C4115FB25AD4513C_OFFSET UNITYSDK_OFFSET(0xCE38BE0)
#define CLASS_2_35BB45B34CEF8225_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xCE38E90)
#define CLASS_2_35BB45B34CEF8225__CTOR_OFFSET UNITYSDK_OFFSET(0xCE38E80)

inline static constexpr unsigned int Class_2_35BB45B34CEF8225_TypeDefinitionIndex = 42367;

class Class_2_35BB45B34CEF8225 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::Class_2_CA67A9CEB871FFD3* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35BB45B34CEF8225__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A96BFA7BCB1910(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_35BB45B34CEF8225_METHOD_2_15A96BFA7BCB1910_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_35BB45B34CEF8225_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35BB45B34CEF8225_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>* Method_2_C4115FB25AD4513C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_A8F5ABF31E066ED4*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_35BB45B34CEF8225_METHOD_2_C4115FB25AD4513C_OFFSET))(this, a1, a2);
	}
};
