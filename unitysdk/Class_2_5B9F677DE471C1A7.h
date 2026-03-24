#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5B9F677DE471C1A7_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x9E57CD0)
#define CLASS_2_5B9F677DE471C1A7_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x9E57B60)
#define CLASS_2_5B9F677DE471C1A7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9E57DA0)
#define CLASS_2_5B9F677DE471C1A7_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x9E57980)
#define CLASS_2_5B9F677DE471C1A7__CTOR_OFFSET UNITYSDK_OFFSET(0x9E57D90)

inline static constexpr unsigned int Class_2_5B9F677DE471C1A7_TypeDefinitionIndex = 40244;

class Class_2_5B9F677DE471C1A7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_0; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_3; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
