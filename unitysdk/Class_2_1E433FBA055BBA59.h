#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralScrollViewTestWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_1E433FBA055BBA59_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x645F220)
#define CLASS_2_1E433FBA055BBA59_METHOD_2_725B4A11CB12187A_OFFSET UNITYSDK_OFFSET(0x645F020)
#define CLASS_2_1E433FBA055BBA59_METHOD_2_C4115FB25AD4513C_OFFSET UNITYSDK_OFFSET(0x645EE20)
#define CLASS_2_1E433FBA055BBA59_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x645F2D0)
#define CLASS_2_1E433FBA055BBA59_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x645EC60)
#define CLASS_2_1E433FBA055BBA59__CTOR_OFFSET UNITYSDK_OFFSET(0x645F2C0)

inline static constexpr unsigned int Class_2_1E433FBA055BBA59_TypeDefinitionIndex = 52687;

class Class_2_1E433FBA055BBA59 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIGeneralScrollViewTestWidgetController*>*>* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_2_60DDD9C206686F44*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIGeneralScrollViewTestWidgetController*>*>* Method_2_725B4A11CB12187A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIGeneralScrollViewTestWidgetController*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59_METHOD_2_725B4A11CB12187A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_60DDD9C206686F44*>* Method_2_C4115FB25AD4513C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_60DDD9C206686F44*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59_METHOD_2_C4115FB25AD4513C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
