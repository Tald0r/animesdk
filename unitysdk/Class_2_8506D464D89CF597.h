#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8506D464D89CF597_METHOD_2_15A96BFA7BCB1910_OFFSET UNITYSDK_OFFSET(0x87C0660)
#define CLASS_2_8506D464D89CF597_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x87C0970)
#define CLASS_2_8506D464D89CF597_METHOD_2_5E6293B83256A167_OFFSET UNITYSDK_OFFSET(0x87C0800)
#define CLASS_2_8506D464D89CF597_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x87C0A20)
#define CLASS_2_8506D464D89CF597__CTOR_OFFSET UNITYSDK_OFFSET(0x87C0A10)

inline static constexpr unsigned int Class_2_8506D464D89CF597_TypeDefinitionIndex = 39218;

class Class_2_8506D464D89CF597 : public ::Class_1_EEA0111A28582B57
{
public:
	::UIControllerExtensionData* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::MonoUITableScrollV2*>* Field_2_2; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8506D464D89CF597__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A96BFA7BCB1910(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8506D464D89CF597_METHOD_2_15A96BFA7BCB1910_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8506D464D89CF597_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8506D464D89CF597_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MonoUITableScrollV2*>* Method_2_5E6293B83256A167(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::MonoUITableScrollV2*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8506D464D89CF597_METHOD_2_5E6293B83256A167_OFFSET))(this, a1, a2);
	}
};
