#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_79AE422BA06F6D26_171;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_77915EE9002093EC_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x91BF8B0)
#define CLASS_2_77915EE9002093EC_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x91BF980)
#define CLASS_2_77915EE9002093EC_1_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x91BF6C0)
#define CLASS_2_77915EE9002093EC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x91BF970)

inline static constexpr unsigned int Class_2_77915EE9002093EC_1_TypeDefinitionIndex = 71645;

class Class_2_77915EE9002093EC_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_171*>* Field_2_2; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_3; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_171*>* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77915EE9002093EC_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77915EE9002093EC_1_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77915EE9002093EC_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77915EE9002093EC_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
