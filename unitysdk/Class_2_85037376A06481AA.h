#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_85037376A06481AA_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x7FACB90)
#define CLASS_2_85037376A06481AA_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x7FAC7E0)
#define CLASS_2_85037376A06481AA_METHOD_2_4CBBF9B83351D46C_OFFSET UNITYSDK_OFFSET(0x7FAC990)
#define CLASS_2_85037376A06481AA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7FACC40)
#define CLASS_2_85037376A06481AA__CTOR_OFFSET UNITYSDK_OFFSET(0x7FACC30)

inline static constexpr unsigned int Class_2_85037376A06481AA_TypeDefinitionIndex = 73300;

class Class_2_85037376A06481AA : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::Class_3_A2BF74BADF6F7D16<::MoleMole::UIHollowCardItemBtnWidgetController*>*>* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85037376A06481AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_85037376A06481AA_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85037376A06481AA_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_85037376A06481AA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_A2BF74BADF6F7D16<::MoleMole::UIHollowCardItemBtnWidgetController*>*>* Method_2_4CBBF9B83351D46C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_A2BF74BADF6F7D16<::MoleMole::UIHollowCardItemBtnWidgetController*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_85037376A06481AA_METHOD_2_4CBBF9B83351D46C_OFFSET))(this, a1, a2);
	}
};
