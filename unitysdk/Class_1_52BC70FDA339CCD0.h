#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_15;
namespace MoleMole { class UITabBtn03RowScrollViewWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_52BC70FDA339CCD0_METHOD_1_32C204623AC78B03_OFFSET UNITYSDK_OFFSET(0x65DFB70)
#define CLASS_1_52BC70FDA339CCD0__CTOR_OFFSET UNITYSDK_OFFSET(0x65DFC60)

inline static constexpr unsigned int Class_1_52BC70FDA339CCD0_TypeDefinitionIndex = 58397;

class Class_1_52BC70FDA339CCD0 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_15*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52BC70FDA339CCD0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_32C204623AC78B03(::MoleMole::UITabBtn03RowScrollViewWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITabBtn03RowScrollViewWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_52BC70FDA339CCD0_METHOD_1_32C204623AC78B03_OFFSET))(this, a1);
	}
};
