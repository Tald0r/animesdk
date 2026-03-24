#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
class Class_3_99D7454A62EA9BE6;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralFilterPopWindowController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace System { class String; }

#define CLASS_2_11ADBB2FD32E89C4_METHOD_2_4AA7827CFB505DDD_OFFSET UNITYSDK_OFFSET(0x7C10600)
#define CLASS_2_11ADBB2FD32E89C4_METHOD_2_666D326082D530EE_OFFSET UNITYSDK_OFFSET(0x7C10B40)
#define CLASS_2_11ADBB2FD32E89C4_METHOD_2_9D768FB7C06C1DF3_OFFSET UNITYSDK_OFFSET(0x7C10540)
#define CLASS_2_11ADBB2FD32E89C4_METHOD_2_DBBEB514B9CCAA6D_OFFSET UNITYSDK_OFFSET(0x7C10670)
#define CLASS_2_11ADBB2FD32E89C4_METHOD_2_EC8A3FBE028E52AF_OFFSET UNITYSDK_OFFSET(0x7C10810)
#define CLASS_2_11ADBB2FD32E89C4__CTOR_OFFSET UNITYSDK_OFFSET(0x7C105B0)

inline static constexpr unsigned int Class_2_11ADBB2FD32E89C4_TypeDefinitionIndex = 67931;

class Class_2_11ADBB2FD32E89C4 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	// static const ::System::Int32 Field_2_2 = 0x0; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::MoleMole::UIGeneralFilterPopWindowController* Field_2_0; // 0x50
	::MoleMole::UIGeneralToggleWidgetController* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11ADBB2FD32E89C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D768FB7C06C1DF3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_11ADBB2FD32E89C4_METHOD_2_9D768FB7C06C1DF3_OFFSET))(this, a1, a2);
	}

	::Class_3_99D7454A62EA9BE6* Method_2_4AA7827CFB505DDD()
	{
		return ((::Class_3_99D7454A62EA9BE6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11ADBB2FD32E89C4_METHOD_2_4AA7827CFB505DDD_OFFSET))(this);
	}

	::System::Void Method_2_DBBEB514B9CCAA6D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_11ADBB2FD32E89C4_METHOD_2_DBBEB514B9CCAA6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_666D326082D530EE(::MoleMole::UIBaseController* a1, ::MoleMole::UIGeneralFilterPopWindowController* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIGeneralFilterPopWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_11ADBB2FD32E89C4_METHOD_2_666D326082D530EE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EC8A3FBE028E52AF(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_11ADBB2FD32E89C4_METHOD_2_EC8A3FBE028E52AF_OFFSET))(this, a1, a2);
	}
};
