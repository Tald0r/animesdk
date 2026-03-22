#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_BDB3EC61F4E4691C_Class_2_9A621164AF3B9F42;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIMusicalBattleLevelItemWidgetController_Data; }
namespace System { class String; }

#define CLASS_2_BDB3EC61F4E4691C_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x702C630)
#define CLASS_2_BDB3EC61F4E4691C_METHOD_2_9D768FB7C06C1DF3_OFFSET UNITYSDK_OFFSET(0x702C570)
#define CLASS_2_BDB3EC61F4E4691C_METHOD_2_C4D2D467B429D401_OFFSET UNITYSDK_OFFSET(0x702C770)
#define CLASS_2_BDB3EC61F4E4691C__CTOR_OFFSET UNITYSDK_OFFSET(0x702C5E0)

inline static constexpr unsigned int Class_2_BDB3EC61F4E4691C_TypeDefinitionIndex = 72088;

class Class_2_BDB3EC61F4E4691C : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::Class_2_BDB3EC61F4E4691C_Class_2_9A621164AF3B9F42* Field_2_2; // 0x50
	::MoleMole::UIMusicalBattleLevelItemWidgetController_Data* Field_2_0; // 0x58
	::System::Int32 Field_2_1; // 0x60
	::System::Boolean Field_2_3; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDB3EC61F4E4691C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D768FB7C06C1DF3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_BDB3EC61F4E4691C_METHOD_2_9D768FB7C06C1DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDB3EC61F4E4691C_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_C4D2D467B429D401(::MoleMole::UIMusicalBattleLevelItemWidgetController_Data* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMusicalBattleLevelItemWidgetController_Data*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BDB3EC61F4E4691C_METHOD_2_C4D2D467B429D401_OFFSET))(this, a1, a2);
	}
};
