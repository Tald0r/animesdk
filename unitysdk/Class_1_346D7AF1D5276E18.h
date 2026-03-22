#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigNewbie_NewbieFairy.h"
#include "unitysdk/MoleMole/ConfigNewbie_NewbieInputLogicType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }

#define CLASS_1_346D7AF1D5276E18_METHOD_1_183C69B5336997A0_OFFSET UNITYSDK_OFFSET(0x7312260)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x7311F80)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x7311260)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x7312060)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_D2FE384848989954_OFFSET UNITYSDK_OFFSET(0x73121C0)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_E4EC0FD7A76783C9_OFFSET UNITYSDK_OFFSET(0x73122E0)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7312360)
#define CLASS_1_346D7AF1D5276E18__CTOR_OFFSET UNITYSDK_OFFSET(0x7311250)

inline static constexpr unsigned int Class_1_346D7AF1D5276E18_TypeDefinitionIndex = 50949;

class Class_1_346D7AF1D5276E18 : public ::System::Object
{
public:
	::MoleMole::ConfigNewbie_NewbieFairy Field_1_1; // 0x10
	::MoleMole::UIGeneralNewsBubbleWidgetController* Field_1_0; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::System::Boolean Field_1_3; // 0x34
	::MoleMole::ConfigNewbie_NewbieInputLogicType Field_1_2; // 0x38

	::System::Void _ctor(::MoleMole::UIGeneralNewsBubbleWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Int32 Method_1_1A425C083DDF2BB1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_1A425C083DDF2BB1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D2FE384848989954(::MoleMole::ConfigNewbie_NewbieFairy a1, ::System::Boolean a2, ::MoleMole::ConfigNewbie_NewbieInputLogicType a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNewbie_NewbieFairy, ::System::Boolean, ::MoleMole::ConfigNewbie_NewbieInputLogicType))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_D2FE384848989954_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_183C69B5336997A0(::MoleMole::UIGeneralNewsBubbleRowWidgetController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_183C69B5336997A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E4EC0FD7A76783C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_E4EC0FD7A76783C9_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
